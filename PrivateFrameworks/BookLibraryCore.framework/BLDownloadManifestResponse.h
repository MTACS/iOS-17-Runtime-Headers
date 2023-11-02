
@interface BLDownloadManifestResponse : NSObject <NSSecureCoding> {
    NSArray * _validDownloadIDs;
}

@property (nonatomic, copy) NSArray *validDownloadIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValidDownloadIDs:(id)arg1;
- (id)validDownloadIDs;

@end
