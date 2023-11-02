
@interface _SBHUDModel : NSObject <SBHUDControlling, _SBHUDHostViewControllerDelegate> {
    SBHUDController * _HUDController;
    UIViewController<SBHUDViewControlling> * _HUDViewController;
    double  _dismissalInterval;
    NSTimer * _dismissalTimer;
    bool  _dismissed;
    bool  _dismissing;
    NSString * _identifier;
    bool  _presented;
    bool  _presenting;
}

@property (nonatomic, readonly) SBHUDController *HUDController;
@property (nonatomic, readonly) UIViewController<SBHUDViewControlling> *HUDViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double dismissalInterval;
@property (getter=isDismissalScheduled, nonatomic, readonly) bool dismissalScheduled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (setter=setDismissed:, nonatomic) bool isDismissed;
@property (setter=setDismissing:, nonatomic) bool isDismissing;
@property (setter=setPresented:, nonatomic) bool isPresented;
@property (setter=setPresenting:, nonatomic) bool isPresenting;
@property (nonatomic, readonly) bool isVisible;
@property (readonly) Class superclass;

+ (id)HUDModelForController:(id)arg1 viewController:(id)arg2 identifier:(id)arg3;

- (void).cxx_destruct;
- (id)HUDController;
- (id)HUDViewController;
- (id)description;
- (void)dismiss;
- (void)dismissAnimated:(bool)arg1;
- (double)dismissalInterval;
- (void)hudViewController:(id)arg1 didDismissHUD:(id)arg2;
- (void)hudViewController:(id)arg1 didPresentHUD:(id)arg2;
- (void)hudViewController:(id)arg1 willDismissHUD:(id)arg2;
- (void)hudViewController:(id)arg1 willPresentHUD:(id)arg2;
- (id)identifier;
- (void)invalidateDismissalTimer;
- (bool)isDismissalScheduled;
- (bool)isDismissed;
- (bool)isDismissing;
- (bool)isEqual:(id)arg1;
- (bool)isPresented;
- (bool)isPresenting;
- (bool)isVisible;
- (void)presentWithDismissalInterval:(double)arg1;
- (void)presentWithDismissalInterval:(double)arg1 animated:(bool)arg2;
- (void)rescheduleDismissalTimer;
- (void)scheduleDismissalTimer;
- (void)setDismissed:(bool)arg1;
- (void)setDismissing:(bool)arg1;
- (void)setPresented:(bool)arg1;
- (void)setPresenting:(bool)arg1;

@end
