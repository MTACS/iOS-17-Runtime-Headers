
@interface SUControllerScanOptions : NSObject <NSSecureCoding> {
    bool  _downloadWhenFound;
    bool  _userInitiated;
}

@property (nonatomic) bool downloadWhenFound;
@property (nonatomic) bool userInitiated;

+ (bool)supportsSecureCoding;

- (id)copy;
- (id)description;
- (bool)downloadWhenFound;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDownloadWhenFound:(bool)arg1;
- (void)setUserInitiated:(bool)arg1;
- (id)summary;
- (bool)userInitiated;

@end
