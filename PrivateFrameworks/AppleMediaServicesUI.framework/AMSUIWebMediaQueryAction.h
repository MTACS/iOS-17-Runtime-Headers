
@interface AMSUIWebMediaQueryAction : AMSUIWebAction {
    NSArray * _bundleIDs;
    NSNumber * _observing;
    NSArray * _storeItemIDs;
}

@property (nonatomic, retain) NSArray *bundleIDs;
@property (nonatomic, retain) NSNumber *observing;
@property (nonatomic, retain) NSArray *storeItemIDs;

- (void).cxx_destruct;
- (id)bundleIDs;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)observing;
- (id)runAction;
- (void)setBundleIDs:(id)arg1;
- (void)setObserving:(id)arg1;
- (void)setStoreItemIDs:(id)arg1;
- (id)storeItemIDs;

@end
