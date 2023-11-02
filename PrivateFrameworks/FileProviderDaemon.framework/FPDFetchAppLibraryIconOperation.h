
@interface FPDFetchAppLibraryIconOperation : FPOperation <FPOperationClient> {
    bool  _allowAppStoreLookup;
    bool  _allowLocalLookup;
    NSArray * _appBundleIDs;
    NSMutableArray * _appBundleIDsNotFound;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredSize;
    id /* block */  _perAppBundleCompletion;
    NSProgress * _progress;
    double  _screenScale;
}

@property (nonatomic) bool allowAppStoreLookup;
@property (nonatomic) bool allowLocalLookup;
@property (nonatomic, readonly) NSArray *appBundleIDs;
@property (nonatomic, copy) id /* block */ perAppBundleCompletion;
@property (nonatomic, readonly) NSProgress *progress;

+ (id)sharedOperationQueue;

- (void).cxx_destruct;
- (bool)_checkIsNotPrefixedByTeamID:(id)arg1;
- (bool)_checkTypeIsValid:(id)arg1;
- (void)_perAppBundleCompletion:(id)arg1 iconData:(id)arg2 contentType:(id)arg3 error:(id)arg4;
- (void)_retrieveIconsFromAppStore;
- (void)_retrieveIconsFromLocalDevice;
- (void)_verifyAppBundleIDsFormat;
- (bool)allowAppStoreLookup;
- (bool)allowLocalLookup;
- (id)appBundleIDs;
- (id)initWithAppBundleIDs:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 screenScale:(double)arg3;
- (void)main;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (id /* block */)perAppBundleCompletion;
- (id)progress;
- (void)setAllowAppStoreLookup:(bool)arg1;
- (void)setAllowLocalLookup:(bool)arg1;
- (void)setPerAppBundleCompletion:(id /* block */)arg1;

@end
