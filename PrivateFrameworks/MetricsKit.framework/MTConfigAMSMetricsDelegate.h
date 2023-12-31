
@interface MTConfigAMSMetricsDelegate : NSObject <MTConfigDelegate> {
    <AMSBagProtocol> * _bag;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bag;
- (id)initWithAMSBag:(id)arg1;
- (void)setBag:(id)arg1;
- (id)sources;

@end
