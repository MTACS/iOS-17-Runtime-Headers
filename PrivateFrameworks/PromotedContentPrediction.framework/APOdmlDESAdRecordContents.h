
@interface APOdmlDESAdRecordContents : NSObject {
    NSString * _adamID;
    bool  _appInstalled;
    bool  _impressed;
    NSString * _instanceID;
    bool  _isDupe;
    APOdmlServerResponse * _odmlResponse;
    NSNumber * _rerankingErrorCode;
    NSString * _responseType;
    bool  _tapped;
}

@property (nonatomic, readonly) NSString *adamID;
@property (nonatomic) bool appInstalled;
@property (nonatomic) bool impressed;
@property (nonatomic, readonly) NSString *instanceID;
@property (nonatomic) bool isDupe;
@property (nonatomic, retain) APOdmlServerResponse *odmlResponse;
@property (nonatomic, readonly) NSNumber *rerankingErrorCode;
@property (nonatomic, retain) NSString *responseType;
@property (nonatomic) bool tapped;

- (void).cxx_destruct;
- (id)adamID;
- (bool)appInstalled;
- (id)convertToDictionary;
- (bool)impressed;
- (id)initWithInstanceID:(id)arg1 adamID:(id)arg2 odmlResponse:(id)arg3 appInstalled:(bool)arg4 isDupe:(bool)arg5 rerankingError:(id)arg6;
- (id)instanceID;
- (bool)isDupe;
- (id)odmlResponse;
- (id)rerankingErrorCode;
- (id)responseType;
- (void)setAppInstalled:(bool)arg1;
- (void)setImpressed:(bool)arg1;
- (void)setIsDupe:(bool)arg1;
- (void)setOdmlResponse:(id)arg1;
- (void)setResponseType:(id)arg1;
- (void)setTapped:(bool)arg1;
- (bool)tapped;
- (void)updateRecordWithEvent:(long long)arg1;

@end
