
@interface SBBackgroundFetchExternalRequest : NSObject {
    UIFetchContentInBackgroundAction * _action;
    SBBackgroundFetchTask * _task;
}

@property (nonatomic, readonly) UIFetchContentInBackgroundAction *action;

- (void).cxx_destruct;
- (id)action;
- (void)dealloc;
- (void)execute;
- (id)initForAppInfo:(id)arg1;

@end
