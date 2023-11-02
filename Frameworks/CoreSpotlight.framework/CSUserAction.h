
@interface CSUserAction : NSObject <CSCoderEncoder, NSSecureCoding> {
    NSString * _contentAction;
    unsigned long long  _eligibility;
    NSString * _itemIdentifier;
    NSSet * _keywords;
    NSArray * _madeCurrentDates;
    NSArray * _madeCurrentEndDates;
    double  _madeCurrentInterval;
    NSArray * _madeInitiallyCurrentDates;
    NSArray * _sentToIndexerDates;
    NSUUID * _uaIdentifier;
    NSDictionary * _userInfo;
}

@property (copy) NSString *contentAction;
@property unsigned long long eligibility;
@property (copy) NSString *itemIdentifier;
@property (retain) NSSet *keywords;
@property (nonatomic, copy) NSArray *madeCurrentDates;
@property (nonatomic, copy) NSArray *madeCurrentEndDates;
@property (nonatomic) double madeCurrentInterval;
@property (nonatomic, copy) NSArray *madeInitiallyCurrentDates;
@property (nonatomic, copy) NSArray *sentToIndexerDates;
@property (nonatomic, retain) NSUUID *uaIdentifier;
@property (retain) NSDictionary *userInfo;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpc_dictionary;

+ (id)actionFromUserActivity:(id)arg1 searchableItem:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_propertiesDescription;
- (id)contentAction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)eligibility;
- (void)encodeWithCSCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserActivity:(id)arg1 searchableItem:(id)arg2;
- (id)initWithXPCDict:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifier;
- (id)keywords;
- (id)madeCurrentDates;
- (id)madeCurrentEndDates;
- (double)madeCurrentInterval;
- (id)madeInitiallyCurrentDates;
- (id)sentToIndexerDates;
- (void)setContentAction:(id)arg1;
- (void)setEligibility:(unsigned long long)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setMadeCurrentDates:(id)arg1;
- (void)setMadeCurrentEndDates:(id)arg1;
- (void)setMadeCurrentInterval:(double)arg1;
- (void)setMadeInitiallyCurrentDates:(id)arg1;
- (void)setSentToIndexerDates:(id)arg1;
- (void)setUaIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)uaIdentifier;
- (void)updateWithUserAction:(id)arg1;
- (id)userInfo;
- (id)xpc_dictionary;

@end
