
@interface BufferInfo : NSObject {
    unsigned long long  _size;
    unsigned long long  _usage;
}

@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) unsigned long long usage;

- (void)incrementUsage;
- (id)initWithSize:(unsigned long long)arg1 usage:(unsigned long long)arg2;
- (void)resetUsage;
- (unsigned long long)size;
- (unsigned long long)usage;

@end
