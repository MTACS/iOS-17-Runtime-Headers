
@interface HDDrugInteractionClass : HKDrugInteractionClass {
    NSArray * _relationships;
}

@property (nonatomic, readonly, copy) NSArray *relationships;

- (void).cxx_destruct;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 relationships:(id)arg2 ancestorIdentifier:(id)arg3 ontologyIdentifier:(id)arg4 validRegionCodes:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)relationships;

@end
