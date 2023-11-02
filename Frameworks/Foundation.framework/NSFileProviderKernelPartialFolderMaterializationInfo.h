
@interface NSFileProviderKernelPartialFolderMaterializationInfo : NSObject <NSSecureCoding> {
    NSString * fileName;
}

@property (readonly) NSString *fileName;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileName:(id)arg1;

@end
