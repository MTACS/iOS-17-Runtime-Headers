
@interface HKCodedValue : NSObject <HKCodedObject, NSCopying, NSSecureCoding> {
    NSArray * _codings;
    HKConcept * _ontologyConcept;
    NSArray * _referenceRanges;
    HKInspectableValue * _value;
}

@property (nonatomic, readonly, copy) NSArray *codings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKConcept *ontologyConcept;
@property (nonatomic, readonly, copy) NSArray *referenceRanges;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HKInspectableValue *value;

+ (id)codedValueWithCodings:(id)arg1 value:(id)arg2 referenceRanges:(id)arg3;
+ (id)indexableKeyPathsWithPrefix:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setOntologyConcept:(id)arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)chartableCodedQuantitySetWithDate:(id)arg1 error:(id*)arg2;
- (id)chartableCodedQuantityWithError:(id*)arg1;
- (id)codings;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodings:(id)arg1 value:(id)arg2 referenceRanges:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)ontologyConcept;
- (id)referenceRanges;
- (id)value;

@end
