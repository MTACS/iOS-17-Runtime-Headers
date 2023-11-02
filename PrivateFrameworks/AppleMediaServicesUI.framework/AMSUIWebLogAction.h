
@interface AMSUIWebLogAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    long long  _level;
    NSString * _message;
    bool  _sensitive;
}

@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long level;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) bool sensitive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned char)_logTypeFromLevel:(long long)arg1;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (long long)level;
- (id)message;
- (id)runAction;
- (bool)sensitive;
- (void)setLevel:(long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setSensitive:(bool)arg1;

@end
