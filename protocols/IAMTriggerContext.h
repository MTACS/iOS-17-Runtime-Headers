
@protocol IAMTriggerContext <NSObject>

@required

- (NSString *)bundleIdentifier;
- (bool)satisfiesPresentationTrigger:(ICIAMMessagePresentationTrigger *)arg1;

@end
