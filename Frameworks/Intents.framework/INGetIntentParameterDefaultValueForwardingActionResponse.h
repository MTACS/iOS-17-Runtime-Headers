
@interface INGetIntentParameterDefaultValueForwardingActionResponse : INIntentForwardingActionResponse {
    NSData * _archivedDefaultValue;
}

@property (nonatomic, readonly) NSData *archivedDefaultValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archivedDefaultValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithArchivedDefaultValue:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
