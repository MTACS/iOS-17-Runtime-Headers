
@interface AMSUIWebDialogAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSArray * _buttonModels;
    bool  _pauseTimeouts;
    AMSDialogRequest * _request;
}

@property (nonatomic, retain) NSArray *buttonModels;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool pauseTimeouts;
@property (nonatomic, retain) AMSDialogRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buttonModels;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (bool)pauseTimeouts;
- (id)request;
- (id)runAction;
- (void)setButtonModels:(id)arg1;
- (void)setPauseTimeouts:(bool)arg1;
- (void)setRequest:(id)arg1;

@end
