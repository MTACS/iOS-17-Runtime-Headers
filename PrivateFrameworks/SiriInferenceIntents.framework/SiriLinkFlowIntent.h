
@interface SiriLinkFlowIntent : INIntent

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *bundleIdentifier;

- (id)init;
- (id)initWithCoder:(id)arg1;

@end
