
@interface ENDownloadEndpointState : NSObject <NSSecureCoding> {
    ENDownloadEndpoint * _endpoint;
    NSUUID * _identifier;
    NSString * _lastDownloadedFilePath;
    NSDate * _lastFetchAttemptDate;
    NSDate * _lastSuccessfulFetchDate;
    NSString * _shortIdentifier;
}

@property (nonatomic, retain) ENDownloadEndpoint *endpoint;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *lastDownloadedFilePath;
@property (nonatomic, copy) NSDate *lastFetchAttemptDate;
@property (nonatomic, copy) NSDate *lastSuccessfulFetchDate;
@property (nonatomic, readonly, copy) NSString *shortIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)lastDownloadedFilePath;
- (id)lastFetchAttemptDate;
- (id)lastSuccessfulFetchDate;
- (void)setEndpoint:(id)arg1;
- (void)setLastDownloadedFilePath:(id)arg1;
- (void)setLastFetchAttemptDate:(id)arg1;
- (void)setLastSuccessfulFetchDate:(id)arg1;
- (id)shortIdentifier;

@end
