
@interface _PSRecipient : NSObject <NSSecureCoding> {
    CNContact * _contact;
    NSString * _displayName;
    bool  _familyHeuristic;
    NSString * _familyName;
    NSString * _givenName;
    NSString * _handle;
    NSString * _handleString;
    long long  _handleType;
    NSString * _identifier;
    NSString * _mostRecentTransportBundleId;
    bool  _photosInference;
    NSString * _senderHandle;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic) bool familyHeuristic;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, copy) NSString *handleString;
@property long long handleType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *mostRecentTransportBundleId;
@property (nonatomic) bool photosInference;
@property (nonatomic, copy) NSString *senderHandle;

+ (id)recipientForINPerson:(id)arg1 contactResolver:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (bool)familyHeuristic;
- (id)familyName;
- (id)givenName;
- (id)handle;
- (id)handleString;
- (long long)handleType;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 contact:(id)arg3;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 contact:(id)arg3 mostRecentTransportBundleId:(id)arg4;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 displayName:(id)arg3 contact:(id)arg4;
- (id)initWithIdentifier:(id)arg1 senderHandle:(id)arg2 handle:(id)arg3 displayName:(id)arg4 contact:(id)arg5;
- (id)initWithIdentifier:(id)arg1 senderHandle:(id)arg2 handle:(id)arg3 displayName:(id)arg4 contact:(id)arg5 mostRecentTransportBundleId:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)mostRecentTransportBundleId;
- (bool)photosInference;
- (id)senderHandle;
- (void)setContact:(id)arg1;
- (void)setFamilyHeuristic:(bool)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setHandleString:(id)arg1;
- (void)setHandleType:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMostRecentTransportBundleId:(id)arg1;
- (void)setPhotosInference:(bool)arg1;
- (void)setSenderHandle:(id)arg1;

@end
