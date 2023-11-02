
@interface _SFTipsCoordinator : NSObject {
    void observer;
    void webSearchTipAvailable;
    void webSearchTipManager;
}

@property (nonatomic) <_SFTipsObserver> *observer;
@property (nonatomic) bool webSearchTipAvailable;
@property (nonatomic, readonly) UIView *webSearchTipView;
@property (nonatomic, readonly) UIViewController *webSearchTipViewController;

+ (void)configureTipsCenter;

- (void).cxx_destruct;
- (void)donatePerformSearchFromDefaultSearchEngineWebPageEvent;
- (id)init;
- (void)invalidateWebSearchTip;
- (id)observer;
- (void)setObserver:(id)arg1;
- (void)setWebSearchTipAvailable:(bool)arg1;
- (void)startObserving;
- (bool)webSearchTipAvailable;
- (id)webSearchTipView;
- (id)webSearchTipViewController;

@end
