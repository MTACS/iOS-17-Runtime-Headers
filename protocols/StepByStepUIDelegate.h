
@protocol StepByStepUIDelegate

@required

- (void)stepByStepCompleteWithResult:(int)arg1 paramDict:(NSDictionary *)arg2;
- (void)stepByStepNextStep:(int)arg1 paramDict:(NSDictionary *)arg2;
- (void)stepByStepProgressUpdated:(int)arg1 status:(int)arg2 paramString:(NSString *)arg3;

@end
