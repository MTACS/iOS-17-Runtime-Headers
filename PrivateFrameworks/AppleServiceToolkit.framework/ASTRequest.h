
@interface ASTRequest : ASTSealablePayload {
    long long  _clientStatus;
    NSNumber * _currentTest;
    NSDictionary * _data;
    ASTErrorStatus * _error;
    NSNumber * _estimatedTimeRemaining;
    NSNumber * _progress;
}

@property (nonatomic) long long clientStatus;
@property (nonatomic, retain) NSNumber *currentTest;
@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, retain) ASTErrorStatus *error;
@property (nonatomic, retain) NSNumber *estimatedTimeRemaining;
@property (nonatomic, retain) NSNumber *progress;

+ (bool)isEstimatedTimeRemainingFeatureEnabled;
+ (id)request;
+ (id)stringFromClientStatus:(long long)arg1;

- (void).cxx_destruct;
- (long long)clientStatus;
- (id)currentTest;
- (id)data;
- (id)description;
- (id)error;
- (id)estimatedTimeRemaining;
- (id)generatePayload;
- (id)init;
- (id)progress;
- (void)setClientStatus:(long long)arg1;
- (void)setCurrentTest:(id)arg1;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setEstimatedTimeRemaining:(id)arg1;
- (void)setProgress:(id)arg1;

@end
