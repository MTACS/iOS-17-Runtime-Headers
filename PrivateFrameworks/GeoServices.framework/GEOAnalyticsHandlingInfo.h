
@interface GEOAnalyticsHandlingInfo : NSObject <NSSecureCoding> {
    long long  _dbExpireCount;
    long long  _logMsgType;
    long long  _persistCount;
    long long  _uploadFailureCount;
    long long  _uploadSuccessByteCountOnCellular;
    long long  _uploadSuccessByteCountOnWifi;
    long long  _uploadSuccessCountOnCellular;
    long long  _uploadSuccessCountOnWifi;
}

@property (nonatomic) long long dbExpireCount;
@property (nonatomic) long long logMsgType;
@property (nonatomic) long long persistCount;
@property (nonatomic) long long uploadFailureCount;
@property (nonatomic) long long uploadSuccessByteCountOnCellular;
@property (nonatomic) long long uploadSuccessByteCountOnWifi;
@property (nonatomic) long long uploadSuccessCountOnCellular;
@property (nonatomic) long long uploadSuccessCountOnWifi;

+ (bool)supportsSecureCoding;

- (long long)dbExpireCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)logMsgType;
- (long long)persistCount;
- (void)setDbExpireCount:(long long)arg1;
- (void)setLogMsgType:(long long)arg1;
- (void)setPersistCount:(long long)arg1;
- (void)setUploadFailureCount:(long long)arg1;
- (void)setUploadSuccessByteCountOnCellular:(long long)arg1;
- (void)setUploadSuccessByteCountOnWifi:(long long)arg1;
- (void)setUploadSuccessCountOnCellular:(long long)arg1;
- (void)setUploadSuccessCountOnWifi:(long long)arg1;
- (long long)uploadFailureCount;
- (long long)uploadSuccessByteCountOnCellular;
- (long long)uploadSuccessByteCountOnWifi;
- (long long)uploadSuccessCountOnCellular;
- (long long)uploadSuccessCountOnWifi;

@end
