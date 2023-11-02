
@interface PassKitUI.PaymentRequestViewInterface : NSObject {
    void context;
    void hostDelegate;
    void presenter;
    void serviceDelegate;
    void stateMachine;
    void viewController;
}

@property (nonatomic, retain) id serviceDelegate;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)serviceDelegate;
- (void)setServiceDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (id)viewController;

@end
