
@interface ContactsUI.CNTipsHelper : NSObject {
    void controller;
    void currentTipView;
    void entries;
    void lock;
    void startupTask;
}

@property (nonatomic, retain) UIView *currentTipView;

+ (id)shared;

- (void).cxx_destruct;
- (id)currentTipView;
- (id)init;
- (void)setCurrentTipView:(id)arg1;
- (void)tipKitSetSiriTipContext:(id)arg1;
- (void)tipKitStartObservation:(id)arg1;
- (void)tipKitStopObservation;

@end
