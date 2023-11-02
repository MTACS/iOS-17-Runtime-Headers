
@interface MessageUI.MessageUITipsManager : NSObject {
    void $__lazy_storage_$_addToYourEmailTip;
    void presentingController;
    void tipObservation;
    void tipPopoverController;
}

+ (void)donateHasSentEmailEvent;
+ (void)donateHasUsedAttachment;
+ (void)setShouldDisplayTo:(bool)arg1;

- (void).cxx_destruct;
- (void)controllerDidAppear;
- (void)controllerDidDisappear;
- (id)init;
- (id)initWith:(id)arg1;

@end
