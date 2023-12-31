
@protocol MPCPlayerFeedbackCommand <MPCPlayerCommand>

@required

- (MPCPlayerCommandRequest *)changeValue:(bool)arg1;
- (NSString *)localizedShortTitle;
- (NSString *)localizedTitle;
- (long long)presentationStyle;
- (bool)value;

@end
