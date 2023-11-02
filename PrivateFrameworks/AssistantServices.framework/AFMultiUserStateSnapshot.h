
@interface AFMultiUserStateSnapshot : NSObject <AFContextSnapshot, AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSArray * _confidenceScores;
    NSNumber * _vtSatScore;
}

@property (nonatomic, readonly, copy) NSArray *confidenceScores;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSNumber *vtSatScore;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)ad_shortDescription;
- (id)buildDictionaryRepresentation;
- (id)confidenceScores;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfidenceScores:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSerializedBackingStore:(id)arg1;
- (id)initWithVtSatScore:(id)arg1;
- (id)initWithVtSatScore:(id)arg1 confidenceScores:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)serializedBackingStore;
- (id)vtSatScore;

@end
