
@interface DIStatFS : NSObject <NSCoding, NSSecureCoding> {
    unsigned long long  _blockSize;
    NSString * _mountedFrom;
    NSURL * _mountedOnURL;
}

@property (nonatomic, readonly) unsigned long long blockSize;
@property (nonatomic, readonly, copy) NSString *mountedFrom;
@property (nonatomic, readonly, copy) NSURL *mountedOnURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)blockSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1 error:(id*)arg2;
- (void)logWithHeader:(id)arg1;
- (id)mountedFrom;
- (id)mountedOnURL;

@end
