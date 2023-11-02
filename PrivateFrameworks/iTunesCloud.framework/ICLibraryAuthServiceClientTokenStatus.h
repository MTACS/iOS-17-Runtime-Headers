
@interface ICLibraryAuthServiceClientTokenStatus : NSObject <NSSecureCoding> {
    NSError * _lastError;
    double  _lastUpdateAttemptTime;
    bool  _shouldExcludeFromBackgroundRefresh;
    ICLibraryAuthServiceClientTokenResult * _tokenResult;
}

@property (nonatomic, copy) NSError *lastError;
@property (nonatomic) double lastUpdateAttemptTime;
@property (nonatomic, readonly, copy) NSDate *lastUpdatedDate;
@property (nonatomic) bool shouldExcludeFromBackgroundRefresh;
@property (nonatomic, copy) ICLibraryAuthServiceClientTokenResult *tokenResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastError;
- (double)lastUpdateAttemptTime;
- (id)lastUpdatedDate;
- (void)setLastError:(id)arg1;
- (void)setLastUpdateAttemptTime:(double)arg1;
- (void)setShouldExcludeFromBackgroundRefresh:(bool)arg1;
- (void)setTokenResult:(id)arg1;
- (bool)shouldExcludeFromBackgroundRefresh;
- (id)tokenResult;

@end
