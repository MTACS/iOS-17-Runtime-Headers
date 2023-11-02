
@interface INRootCodableDescription : INCodableDescription <INWidgetPlistRepresentable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _referencedCodableDescriptions;
    NSDictionary * _referencedCodableDescriptionsByClassName;
}

@property (nonatomic, readonly) NSDictionary *_referencedCodableDescriptionsByClassName;
@property (setter=_setReferencedCodableDescriptions:, nonatomic, retain) NSArray *referencedCodableDescriptions;

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (void)recursivelyAssignCodableDescriptionsFor:(id)arg1 referencedCodableDescriptions:(id)arg2 visitedCodableDescriptions:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1;
- (id)_referencedCodableDescriptionsByClassName;
- (void)_setReferencedCodableDescriptions:(id)arg1;
- (long long)codableDescriptionType;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)referencedCodableDescriptions;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

@end
