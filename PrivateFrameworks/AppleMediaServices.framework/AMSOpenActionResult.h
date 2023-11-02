
@interface AMSOpenActionResult : NSObject {
    AMSURLAction * _action;
    bool  _engagementPresented;
    bool  _interruptionResult;
}

@property (nonatomic, retain) AMSURLAction *action;
@property (nonatomic) bool engagementPresented;
@property (nonatomic) bool interruptionResult;

- (void).cxx_destruct;
- (id)action;
- (bool)engagementPresented;
- (bool)interruptionResult;
- (void)setAction:(id)arg1;
- (void)setEngagementPresented:(bool)arg1;
- (void)setInterruptionResult:(bool)arg1;

@end
