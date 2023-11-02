
@interface WFComposeUserActivityManager : NSObject {
    bool  _active;
    UIResponder * _responder;
    NSDictionary * _userInfo;
    WFWorkflow * _workflow;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) UIResponder *responder;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, readonly) WFWorkflow *workflow;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWorkflow:(id)arg1 targetResponder:(id)arg2;
- (bool)isActive;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)responder;
- (void)setActive:(bool)arg1;
- (void)setResponder:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)updateUserActivityState:(id)arg1;
- (id)userInfo;
- (id)workflow;

@end
