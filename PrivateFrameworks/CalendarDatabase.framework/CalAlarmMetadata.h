
@interface CalAlarmMetadata : CalItemMetadata

+ (bool)isRecognizedParameter:(id)arg1 forProperty:(id)arg2 inComponent:(id)arg3;
+ (bool)isRecognizedProperty:(id)arg1 inComponent:(id)arg2;
+ (id)metadataWithData:(id)arg1;
+ (bool)shouldSkipSavingUnrecognizedParametersForProperty:(id)arg1 inComponent:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;

@end
