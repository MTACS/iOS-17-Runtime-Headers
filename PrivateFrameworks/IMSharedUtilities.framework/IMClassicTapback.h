
@interface IMClassicTapback : IMTapback

+ (bool)isValidAssociatedMessageType:(long long)arg1;
+ (bool)isValidRepresentation:(id)arg1;

- (id)actionString;
- (id)initWithAssociatedMessageType:(long long)arg1;

@end
