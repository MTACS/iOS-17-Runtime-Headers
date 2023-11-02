
@interface FARecommendedFamilyMember : NSObject <NSCopying, NSSecureCoding> {
    CNContact * _contact;
    NSString * _displayName;
    NSString * _handle;
    NSString * _iMessageHandle;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, copy) NSString *iMessageHandle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_safeClasses;
- (id)contact;
- (id)contactFromRecommendationWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)iMessageHandle;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecommendation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setIMessageHandle:(id)arg1;

@end
