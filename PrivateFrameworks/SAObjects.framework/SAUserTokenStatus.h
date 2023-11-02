
@interface SAUserTokenStatus : AceObject <SABackgroundContextObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *errorCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *lastUpdateAttemptTime;
@property (nonatomic, copy) NSNumber *shouldExcludeFromBackgroundRefresh;
@property (readonly) Class superclass;

- (id)encodedClassName;
- (id)errorCode;
- (id)groupIdentifier;
- (id)lastUpdateAttemptTime;
- (void)setErrorCode:(id)arg1;
- (void)setLastUpdateAttemptTime:(id)arg1;
- (void)setShouldExcludeFromBackgroundRefresh:(id)arg1;
- (id)shouldExcludeFromBackgroundRefresh;

@end
