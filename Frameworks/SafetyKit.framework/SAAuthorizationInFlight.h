
@interface SAAuthorizationInFlight : NSObject {
    id /* block */  _completionHandler;
    SABundleManagerApp * _fromApp;
    NSString * _fromBundleId;
    bool  _inFlight;
    long long  _preflightAuthorizationStatus;
    NSString * _toBundleId;
    NSString * toBundleLocalizedName;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) SABundleManagerApp *fromApp;
@property (nonatomic, retain) NSString *fromBundleId;
@property (getter=getFromBundleLocalizedName, nonatomic, readonly) NSString *fromBundleLocalizedName;
@property (getter=isInFlight, nonatomic) bool inFlight;
@property (nonatomic) long long preflightAuthorizationStatus;
@property (nonatomic, retain) NSString *toBundleId;
@property (getter=getToBundleLocalizedName, nonatomic, readonly) NSString *toBundleLocalizedName;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)description;
- (id)fromApp;
- (id)fromBundleId;
- (id)getFromBundleLocalizedName;
- (void)getFromBundleLocalizedNameWithCompletion:(id /* block */)arg1;
- (id)getToBundleLocalizedName;
- (bool)isInFlight;
- (long long)preflightAuthorizationStatus;
- (void)reset;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setFromApp:(id)arg1;
- (void)setFromBundleId:(id)arg1;
- (void)setInFlight:(bool)arg1;
- (void)setPreflightAuthorizationStatus:(long long)arg1;
- (void)setToBundleId:(id)arg1;
- (id)toBundleId;

@end
