
@interface ASDJobManagerOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString * _persistenceIdentifier;
    bool  _shouldFilterExternalOriginatedDownloads;
    bool  _shouldReportDownloadProgress;
}

@property (nonatomic, copy) NSString *persistenceIdentifier;
@property (nonatomic) bool shouldFilterExternalOriginatedDownloads;
@property (nonatomic) bool shouldReportDownloadProgress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)persistenceIdentifier;
- (void)setPersistenceIdentifier:(id)arg1;
- (void)setShouldFilterExternalOriginatedDownloads:(bool)arg1;
- (void)setShouldReportDownloadProgress:(bool)arg1;
- (bool)shouldFilterExternalOriginatedDownloads;
- (bool)shouldReportDownloadProgress;

@end
