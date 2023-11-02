
@interface NSFileProviderKernelFileMaterializationInfo : NSObject <NSSecureCoding> {
    long long  offset;
    long long  size;
}

@property (readonly) long long offset;
@property (readonly) long long size;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(long long)arg1 offset:(long long)arg2;
- (long long)offset;
- (long long)size;

@end
