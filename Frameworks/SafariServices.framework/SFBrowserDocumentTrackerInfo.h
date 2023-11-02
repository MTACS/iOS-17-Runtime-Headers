
@interface SFBrowserDocumentTrackerInfo : NSObject {
    NSSet * _allowedKnownTrackingThirdParties;
    NSSet * _blockedKnownTrackingThirdParties;
    bool  _cachedTrackingPreventionEnabled;
    <_SFBrowserDocument> * _document;
    NSDate * _lastNavigationCommitDate;
    NSSet * _preventedKnownTrackingThirdParties;
    WBSQueryParameterFilteringDataQueue * _queryParameterFilteringDataQueue;
}

@property (nonatomic, readonly) NSSet *allowedKnownTrackingThirdParties;
@property (nonatomic, readonly) NSSet *blockedKnownTrackingThirdParties;
@property (nonatomic, readonly) <_SFBrowserDocument> *document;
@property (nonatomic, readonly) NSSet *preventedKnownTrackingThirdParties;
@property (nonatomic, readonly) WBSQueryParameterFilteringDataQueue *queryParameterFilteringDataQueue;

+ (bool)trackingPreventionEnabled;

- (void).cxx_destruct;
- (void)_flushKnownTrackingThirdParties;
- (void)_resetKnownTrackingThirdParties;
- (void)_updateKnownTrackingThirdPartiesWithCompletionHandler:(id /* block */)arg1;
- (id)allowedKnownTrackingThirdParties;
- (id)blockedKnownTrackingThirdParties;
- (void)dealloc;
- (id)document;
- (void)documentDidCommitNavigation;
- (id)initWithDocument:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)preventedKnownTrackingThirdParties;
- (id)queryParameterFilteringDataQueue;
- (void)updateKnownTrackingThirdPartiesWithCompletionHandler:(id /* block */)arg1;

@end
