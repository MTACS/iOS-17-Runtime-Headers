
@interface INGetIntentParameterOptionsForwardingActionResponse : INIntentForwardingActionResponse {
    NSData * _archivedObjectCollection;
}

@property (nonatomic, readonly) NSData *archivedObjectCollection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archivedObjectCollection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithArchivedObjectCollection:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
