
@protocol CNKCallParticipantLabelDescriptorProtocol <NSObject>

@required

- (bool)isDynamic;
- (long long)layoutState;
- (NSString *)localizedSenderIdentity;
- (NSString *)secondaryString;
- (void)setIsDynamic:(bool)arg1;
- (void)setLayoutState:(long long)arg1;
- (void)setLocalizedSenderIdentity:(NSString *)arg1;
- (void)setSecondaryString:(NSString *)arg1;
- (void)setStrings:(NSArray *)arg1;
- (NSArray *)strings;

@end
