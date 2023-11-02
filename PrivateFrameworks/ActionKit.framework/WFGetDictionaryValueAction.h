
@interface WFGetDictionaryValueAction : WFAction

+ (bool)outputIsExemptFromTaintTrackingInheritance;

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setOutputWithValue:(id)arg1 preferredDictionaryType:(id)arg2 contentAttributionSet:(id)arg3;

@end
