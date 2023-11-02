
@interface BAAppExtensionInfo : NSObject <NSSecureCoding> {
    NSNumber * _restrictedDownloadSizeRemaining;
    NSNumber * _restrictedEssentialDownloadSizeRemaining;
}

@property (readonly) NSNumber *restrictedDownloadSizeRemaining;
@property (readonly) NSNumber *restrictedEssentialDownloadSizeRemaining;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)restrictedDownloadSizeRemaining;
- (id)restrictedEssentialDownloadSizeRemaining;

@end
