
@interface CKMergeableDeltaID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _deltaIdentifier;
    CKMergeableValueID * _valueID;
}

@property (nonatomic, readonly, copy) NSString *deltaIdentifier;
@property (nonatomic, readonly, copy) CKMergeableValueID *valueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deltaIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeltaIdentifier:(id)arg1 valueID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)valueID;

@end
