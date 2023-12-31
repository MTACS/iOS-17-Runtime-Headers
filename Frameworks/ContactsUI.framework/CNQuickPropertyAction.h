
@interface CNQuickPropertyAction : CNQuickContactAction

@property (nonatomic, readonly) CNPropertyAction *propertyAction;

- (id)_coreDuetValue;
- (bool)enabled;
- (id)identifier;
- (id)initWithPropertyAction:(id)arg1;
- (void)performWithCompletionBlock:(id /* block */)arg1;
- (id)propertyAction;
- (id)propertyItem;
- (unsigned long long)score;
- (id)subtitleForContext:(long long)arg1;
- (id)titleForContext:(long long)arg1;

@end
