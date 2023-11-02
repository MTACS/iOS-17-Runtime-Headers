
@interface AMSUIWebRestrictedFeatureAction : AMSUIWebAction {
    NSNumber * _enabled;
    NSString * _identifier;
}

@property (nonatomic, retain) NSNumber *enabled;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (id)_featureWithIdentifier:(id)arg1;
- (id)enabled;
- (id)identifier;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setEnabled:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
