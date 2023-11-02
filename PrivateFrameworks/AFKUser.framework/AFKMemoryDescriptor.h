
@interface AFKMemoryDescriptor : NSObject {
    char * _buffer;
    unsigned long long  _cachedLength;
    unsigned long long  _capacity;
    AFKMemoryDescriptorManager * _manager;
    unsigned long long  _regID;
    unsigned long long  _token;
}

@property (nonatomic, readonly) char *buffer;
@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic) unsigned long long length;
@property (nonatomic, readonly) AFKMemoryDescriptorManager *manager;
@property (nonatomic, readonly) unsigned long long regID;
@property (nonatomic, readonly) unsigned long long token;

+ (id)withManager:(id)arg1 capacity:(unsigned long long)arg2;
+ (id)withManager:(id)arg1 capacity:(unsigned long long)arg2 token:(unsigned long long)arg3;

- (void).cxx_destruct;
- (int)assertPower:(bool)arg1;
- (int)assumeControl;
- (char *)buffer;
- (unsigned long long)capacity;
- (void)dealloc;
- (void)handleEnqueue;
- (id)initWithManager:(id)arg1 capacity:(unsigned long long)arg2 buffer:(bool)arg3;
- (id)initWithManager:(id)arg1 capacity:(unsigned long long)arg2 token:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)manager;
- (bool)mapDescriptor;
- (int)readBytes:(void*)arg1 size:(unsigned long long)arg2 fromOffset:(unsigned long long)arg3;
- (unsigned long long)regID;
- (int)releaseControl:(bool)arg1;
- (void)setLength:(unsigned long long)arg1;
- (unsigned long long)token;
- (int)writeBytes:(const void*)arg1 size:(unsigned long long)arg2 toOffset:(unsigned long long)arg3;

@end
