
@interface AMSUIWebMetricsAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSArray * _events;
    bool  _shouldFlush;
}

@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *events;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldFlush;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)events;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setEvents:(id)arg1;
- (void)setShouldFlush:(bool)arg1;
- (bool)shouldFlush;

@end
