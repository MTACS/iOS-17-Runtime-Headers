
@protocol _ICFeedbackManaging

@required

- (void)provideLexiconFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)providePredictionFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;

@end
