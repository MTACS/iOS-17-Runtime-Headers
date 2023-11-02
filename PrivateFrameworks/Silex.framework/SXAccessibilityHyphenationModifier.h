
@interface SXAccessibilityHyphenationModifier : NSObject <SXDOMModifying>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)enableHyphenationForComponentTextStyleWithIdentifier:(id)arg1 DOM:(id)arg2 context:(id)arg3;
- (void)modifyDOM:(id)arg1 context:(id)arg2;

@end
