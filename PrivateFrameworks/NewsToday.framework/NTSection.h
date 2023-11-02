
@interface NTSection : NSObject <NSCopying, NSSecureCoding, NTSectionDisplayDescriptor> {
    NSString * _actionTitle;
    NSURL * _actionURL;
    NSString * _backingTagID;
    NTPBSectionDisplayDescriptor * _displayDescriptor;
    NSString * _identifier;
    NSOrderedSet * _items;
    NSString * _personalizationFeatureID;
    SFRankingFeedback * _rankingFeedback;
    NSString * _referralBarName;
    NSString * _subidentifier;
}

@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, copy) NSURL *actionURL;
@property (nonatomic, readonly, copy) NSString *backgroundColorDark;
@property (nonatomic, readonly, copy) NSString *backgroundColorLight;
@property (nonatomic, copy) NSString *backingTagID;
@property (nonatomic, copy) NTPBSectionDisplayDescriptor *displayDescriptor;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSOrderedSet *items;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSURL *nameActionURL;
@property (nonatomic, readonly, copy) NSString *nameColorDark;
@property (nonatomic, readonly, copy) NSString *nameColorLight;
@property (nonatomic, readonly, copy) NSString *personalizationFeatureID;
@property (nonatomic, copy) SFRankingFeedback *rankingFeedback;
@property (nonatomic, copy) NSString *referralBarName;
@property (nonatomic, copy) NSString *subidentifier;

+ (id)_itemClassesByType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionTitle;
- (id)actionURL;
- (id)backgroundColorDark;
- (id)backgroundColorLight;
- (id)backingTagID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayDescriptor;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 subidentifier:(id)arg2 actionTitle:(id)arg3 actionURL:(id)arg4 personalizationFeatureID:(id)arg5 items:(id)arg6 rankingFeedback:(id)arg7 displayDescriptor:(id)arg8 referralBarName:(id)arg9 backingTagID:(id)arg10;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)name;
- (id)nameActionURL;
- (id)nameColorDark;
- (id)nameColorLight;
- (id)personalizationFeatureID;
- (id)rankingFeedback;
- (id)referralBarName;
- (void)setActionTitle:(id)arg1;
- (void)setActionURL:(id)arg1;
- (void)setBackingTagID:(id)arg1;
- (void)setDisplayDescriptor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setRankingFeedback:(id)arg1;
- (void)setReferralBarName:(id)arg1;
- (void)setSubidentifier:(id)arg1;
- (id)subidentifier;

@end
