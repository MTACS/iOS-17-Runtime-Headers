
@interface LiveFSMemoryMap : NSObject {
    unsigned long long  _address;
    unsigned int  _port;
    unsigned long long  _size;
}

@property (readonly) unsigned long long address;
@property unsigned int port;
@property (readonly) unsigned long long size;

+ (id)newWithPort:(unsigned int)arg1 address:(unsigned long long)arg2 andSize:(unsigned long long)arg3;

- (unsigned long long)address;
- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1 address:(unsigned long long)arg2 andSize:(unsigned long long)arg3;
- (unsigned int)port;
- (void)setPort:(unsigned int)arg1;
- (unsigned long long)size;

@end
