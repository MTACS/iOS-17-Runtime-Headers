
@interface HKFHIRIdentifierElement : NSObject <HKCodedObject, NSCopying, NSSecureCoding> {
    HKConcept * _type;
    NSArray * _typeCodings;
    NSString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HKConcept *type;
@property (nonatomic, readonly, copy) HKMedicalCodingCollection *typeCodingCollection;
@property (nonatomic, readonly, copy) NSArray *typeCodings;
@property (nonatomic, readonly, copy) NSString *value;

+ (id)identifierWithTypeCodings:(id)arg1 value:(id)arg2;
+ (id)indexableKeyPathsWithPrefix:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setType:(id)arg1;
- (void)_setTypeCodings:(id)arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeCodings:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)type;
- (id)typeCodingCollection;
- (id)typeCodings;
- (id)value;

@end
