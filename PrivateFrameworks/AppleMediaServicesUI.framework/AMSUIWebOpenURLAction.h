
@interface AMSUIWebOpenURLAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSURL * _URL;
    long long  _type;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (id)_openIgnoringOverrides:(id)arg1;
+ (id)_openUniversalLink:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setType:(long long)arg1;
- (void)setURL:(id)arg1;
- (long long)type;

@end
