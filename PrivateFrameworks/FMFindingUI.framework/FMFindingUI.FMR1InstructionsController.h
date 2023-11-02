
@interface FMFindingUI.FMR1InstructionsController : NSObject {
    void autoDismissWorkItem;
    void constants;
    void delegate;
    void experienceType;
    void findable;
    void inState;
    void isBTConnected;
    void isRanging;
    void outState;
    void previousInState;
    void searchingDelayWorkItem;
    void searchingNoBTConnectionCount;
    void searchingNoBTConnectionWorkItem;
    void searchingWithBTConnectionWorkItem;
    void stillSearchingWithBTConnectionWorkItem;
    void tryMovingNoBTConnectionWorkItem;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
