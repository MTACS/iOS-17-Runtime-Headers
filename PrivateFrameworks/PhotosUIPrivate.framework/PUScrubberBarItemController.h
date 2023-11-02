
@interface PUScrubberBarItemController : NSObject {
    PUBrowsingSession * _browsingSession;
    UIBarButtonItem * _scrubberBarButtonItem;
    PUScrubberView * _scrubberView;
}

@property (nonatomic, retain) PUBrowsingSession *browsingSession;
@property (nonatomic, readonly) UIBarButtonItem *scrubberBarButtonItem;

- (void).cxx_destruct;
- (void)_invalidateScrubberBarButtonItem;
- (void)_updateScrubberBarButtonItemIfNeeded;
- (id)browsingSession;
- (id)scrubberBarButtonItem;
- (void)setBrowsingSession:(id)arg1;

@end
