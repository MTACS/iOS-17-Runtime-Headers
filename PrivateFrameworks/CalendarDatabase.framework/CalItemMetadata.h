
@interface CalItemMetadata : NSObject <NSSecureCoding> {
    NSDictionary * _unrecognizedProperties;
}

@property (nonatomic, readonly) NSDictionary *unrecognizedProperties;

+ (id)_whitelistedClassesForSecureCoding;
+ (bool)isRecognizedParameter:(id)arg1 forProperty:(id)arg2 inComponent:(id)arg3;
+ (bool)isRecognizedProperty:(id)arg1 inComponent:(id)arg2;
+ (id)metadataWithData:(id)arg1;
+ (id)metadataWithICSComponent:(id)arg1;
+ (bool)shouldSkipSavingUnrecognizedParametersForProperty:(id)arg1 inComponent:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToComponent:(id)arg1;
- (id)dataRepresentationWithExistingMetaData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithICSComponent:(id)arg1;
- (id)propertyValueForComparison:(id)arg1 propertyKey:(id)arg2;
- (id)unrecognizedProperties;

@end
