
@interface CNChangeHistoryContactChange : NSObject <NSSecureCoding> {
    CNChangeHistoryAnchor * _changeAnchor;
    NSNumber * _changeID;
    long long  _changeType;
    CNContact * _contact;
    NSString * _contactIdentifier;
    NSString * _externalID;
    NSString * _externalModificationTag;
    NSString * _externalURI;
    NSNumber * _imagesChanged;
    NSString * _linkToPersonUUID;
    NSArray * _linkedContactIdentifiers;
    NSString * _personLinkUUID;
}

@property (nonatomic, retain) CNChangeHistoryAnchor *changeAnchor;
@property (nonatomic, retain) NSNumber *changeID;
@property (nonatomic) long long changeType;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, retain) NSString *externalID;
@property (nonatomic, retain) NSString *externalModificationTag;
@property (nonatomic, retain) NSString *externalURI;
@property (nonatomic, retain) NSNumber *imagesChanged;
@property (nonatomic, retain) NSString *linkToPersonUUID;
@property (nonatomic, copy) NSArray *linkedContactIdentifiers;
@property (nonatomic, retain) NSString *personLinkUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changeAnchor;
- (id)changeID;
- (long long)changeType;
- (id)contact;
- (id)contactIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalID;
- (id)externalModificationTag;
- (id)externalURI;
- (unsigned long long)hash;
- (id)imagesChanged;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4;
- (id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 externalID:(id)arg5 imagesChanged:(id)arg6 linkToPersonUUID:(id)arg7 personLinkUUID:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)linkToPersonUUID;
- (id)linkedContactIdentifiers;
- (id)personLinkUUID;
- (void)setChangeAnchor:(id)arg1;
- (void)setChangeID:(id)arg1;
- (void)setChangeType:(long long)arg1;
- (void)setContact:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setExternalURI:(id)arg1;
- (void)setImagesChanged:(id)arg1;
- (void)setLinkToPersonUUID:(id)arg1;
- (void)setLinkedContactIdentifiers:(id)arg1;
- (void)setPersonLinkUUID:(id)arg1;

@end
