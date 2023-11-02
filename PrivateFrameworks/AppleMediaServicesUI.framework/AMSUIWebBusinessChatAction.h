
@interface AMSUIWebBusinessChatAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSString * _body;
    NSString * _businessGroupID;
    NSString * _businessID;
    NSString * _intentID;
}

@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSString *businessGroupID;
@property (nonatomic, retain) NSString *businessID;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *intentID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)body;
- (id)businessGroupID;
- (id)businessID;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)intentID;
- (id)makeBusinessChatDeeplink;
- (id)runAction;
- (void)setBody:(id)arg1;
- (void)setBusinessGroupID:(id)arg1;
- (void)setBusinessID:(id)arg1;
- (void)setIntentID:(id)arg1;

@end
