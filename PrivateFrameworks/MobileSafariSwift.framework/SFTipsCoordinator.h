
@interface SFTipsCoordinator : NSObject <_SFTipsObserver> {
    _SFTipsCoordinator * _internal;
    <SFTipsObserver> * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SFTipsObserver> *observer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool webSearchTipAvailable;
@property (nonatomic, readonly) UIView *webSearchTipView;
@property (nonatomic, readonly) UIViewController *webSearchTipViewController;

- (void).cxx_destruct;
- (void)donatePerformSearchFromDefaultSearchEngineWebPageEvent;
- (id)init;
- (void)invalidateWebSearchTip;
- (id)observer;
- (void)setObserver:(id)arg1;
- (void)startObserving;
- (bool)webSearchTipAvailable;
- (void)webSearchTipDidBecomeUnavailable;
- (id)webSearchTipView;
- (id)webSearchTipViewController;

@end
