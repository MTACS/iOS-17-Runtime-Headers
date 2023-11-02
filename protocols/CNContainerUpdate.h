
@protocol CNContainerUpdate <NSObject>

@required

- (void)applyToMutableContainer:(CNMutableContainer *)arg1;
- (CNContainerPropertyDescription *)property;
- (id)value;

@end
