
@interface WFToastManager : NSObject {
    void _toastedSession;
    void delegate;
    void lock;
    void timer;
    void transaction;
}

@property (nonatomic) <WFToastManagerDelegate> *delegate;
@property (nonatomic, readonly) WFSessionKitAssertion *toastedSession;

- (void).cxx_destruct;
- (id)delegate;
- (void)eatTheToastWithReason:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)toastSessionWithIdentifier:(id)arg1 forDuration:(double)arg2;
- (id)toastedSession;

@end
