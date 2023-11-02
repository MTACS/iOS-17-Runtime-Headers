
@interface SFAppContent : NSObject {
    NSArray * _adamIDs;
    NSDictionary * _amsArtworkDict;
    AMSBag * _amsBag;
    NSString * _amsLaunchURL;
    NSError * _amsResultsError;
    int  _amsResultsState;
    NSURL * _amsURLOverride;
    struct CGImage {} ** _appIcon;
    NSString * _appName;
    LSApplicationProxy * _appProxy;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _infoFetchRequests;
    SFLaunchRequest * _launchRequest;
}

@property (nonatomic, retain) NSArray *adamIDs;
@property (nonatomic, retain) NSURL *amsURLOverride;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) bool installed;

- (void).cxx_destruct;
- (id)_amsAppNameFromResult:(id)arg1;
- (id)_amsArtworkDictionaryFromResult:(id)arg1;
- (void)_amsFetchAppResultsWithCompletion:(id /* block */)arg1;
- (void)_amsFetchArtworkIfNeeded;
- (void)_amsFetchArtworkWithRequest:(id)arg1;
- (void)_amsFetchResults;
- (id)_amsFirstResponseDataItemFromResult:(id)arg1;
- (void)_amsLaunchIfNeeded;
- (id)_amsLaunchURLFromResult:(id)arg1;
- (void)_amsRun;
- (void)_fetchNameAndIconWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)_launchOptions;
- (void)_launchWithCompletion:(id /* block */)arg1;
- (id)adamIDs;
- (id)amsURLOverride;
- (id)dispatchQueue;
- (void)fetchNameAndIconWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)initWithAdamIDs:(id)arg1;
- (bool)installed;
- (void)launchWithCompletion:(id /* block */)arg1;
- (void)setAdamIDs:(id)arg1;
- (void)setAmsURLOverride:(id)arg1;
- (void)setDispatchQueue:(id)arg1;

@end
