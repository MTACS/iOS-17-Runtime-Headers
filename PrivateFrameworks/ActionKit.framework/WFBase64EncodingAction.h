
@interface WFBase64EncodingAction : WFAction

+ (bool)outputIsExemptFromTaintTrackingInheritance;

- (id)base64EncodedStringItemFromFile:(id)arg1 lineBreakMode:(id)arg2;
- (id)inputContentClasses;
- (id)itemFromBase64EncodedString:(id)arg1 nameIfKnown:(id)arg2;
- (id)outputContentClasses;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;

@end
