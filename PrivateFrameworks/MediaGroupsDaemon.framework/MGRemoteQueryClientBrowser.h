
@interface MGRemoteQueryClientBrowser : NSObject {
    NSObject<OS_nw_browser> * _browser;
    <MGRemoteQueryClientBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSError * _error;
    bool  _invalidated;
    NSSet * _knownTargets;
    NSSet * _updatedTargets;
}

@property (nonatomic, retain) NSObject<OS_nw_browser> *browser;
@property (nonatomic, readonly) <MGRemoteQueryClientBrowserDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool invalidated;
@property (nonatomic, retain) NSSet *knownTargets;
@property (nonatomic, retain) NSSet *updatedTargets;

- (void).cxx_destruct;
- (void)_applyUpdates;
- (void)_handleBrowseChangeFromTarget:(id)arg1 toTarget:(id)arg2 applyBatch:(bool)arg3;
- (void)_invalidate;
- (void)_invalidated;
- (id)_prepareBrowseDescriptor;
- (id)_prepareBrowseParameters;
- (void)_prepareBrowserHandlers;
- (void)_startBrowsing;
- (id)_targetForBrowseResult:(id)arg1;
- (id)browser;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)dispatchQueue;
- (id)error;
- (id)initWithDelegate:(id)arg1 dispatchQueue:(id)arg2;
- (bool)invalidated;
- (id)knownTargets;
- (void)setBrowser:(id)arg1;
- (void)setError:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setKnownTargets:(id)arg1;
- (void)setUpdatedTargets:(id)arg1;
- (id)updatedTargets;

@end
