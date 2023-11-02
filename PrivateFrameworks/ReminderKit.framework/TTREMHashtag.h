
@interface TTREMHashtag : NSObject <NSSecureCoding, TTModelAttributeComparable> {
    NSString * _objectIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *objectIdentifier;
@property (readonly) Class superclass;

+ (bool)isHashtag:(id)arg1 equalToModelComparable:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToModelComparable:(id)arg1;
- (id)objectIdentifier;
- (void)setObjectIdentifier:(id)arg1;

@end
