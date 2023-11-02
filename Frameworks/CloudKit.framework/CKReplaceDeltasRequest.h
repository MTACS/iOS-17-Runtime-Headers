
@interface CKReplaceDeltasRequest : NSObject <CKPropertiesDescription, CKRoughlyEquivalent, NSCopying, NSSecureCoding> {
    NSArray * _deltaIdentifiersToReplace;
    NSArray * _replacementDeltas;
    bool  _replacementDeltasContainNewData;
    CKMergeableValueID * _valueID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSArray *deltaIdentifiersToReplace;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *replacementDeltas;
@property (nonatomic, readonly) bool replacementDeltasContainNewData;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) CKMergeableValueID *valueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deltaIdentifiersToReplace;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalencyProperties;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithValueID:(id)arg1 deltaIdentifiersToReplace:(id)arg2 replacementDeltas:(id)arg3 replacementDeltasContainNewData:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)replacementDeltas;
- (bool)replacementDeltasContainNewData;
- (id)valueID;

@end
