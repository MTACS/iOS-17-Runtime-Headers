
@protocol INRunVoiceCommandIntentResponseExport <NSObject, JSExport>

@required

- (NSString *)appBundleId;
- (long long)code;
- (NSNumber *)continueRunning;
- (NSNumber *)customResponsesDisabled;
- (long long)intentCategory;
- (NSNumber *)interstitialDisabled;
- (NSString *)localizedAppName;
- (NSDictionary *)parameters;
- (NSNumber *)prefersExecutionOnCompanion;
- (NSString *)responseTemplate;
- (void)setAppBundleId:(NSString *)arg1;
- (void)setContinueRunning:(NSNumber *)arg1;
- (void)setCustomResponsesDisabled:(NSNumber *)arg1;
- (void)setIntentCategory:(long long)arg1;
- (void)setInterstitialDisabled:(NSNumber *)arg1;
- (void)setLocalizedAppName:(NSString *)arg1;
- (void)setParameters:(NSDictionary *)arg1;
- (void)setPrefersExecutionOnCompanion:(NSNumber *)arg1;
- (void)setResponseTemplate:(NSString *)arg1;
- (void)setSteps:(NSArray *)arg1;
- (void)setToggleState:(long long)arg1;
- (void)setUnderlyingIntent:(INArchivedObject *)arg1;
- (void)setUnderlyingIntentResponse:(INArchivedObject *)arg1;
- (void)setUnderlyingIntentTitle:(NSString *)arg1;
- (void)setVerb:(NSString *)arg1;
- (NSArray *)steps;
- (long long)toggleState;
- (INArchivedObject *)underlyingIntent;
- (INArchivedObject *)underlyingIntentResponse;
- (NSString *)underlyingIntentTitle;
- (NSString *)verb;

@end
