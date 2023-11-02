
@interface HMIAnalysisStateUpdate : HMFObject <NSSecureCoding> {
    NSSet * _torsoAnnotations;
}

@property (readonly) NSSet *torsoAnnotations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTorsoAnnotations:(id)arg1;
- (id)initWithTorsoAnnotationsArray:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)stateUpdateByMergingStateUpdate:(id)arg1;
- (id)torsoAnnotations;

@end
