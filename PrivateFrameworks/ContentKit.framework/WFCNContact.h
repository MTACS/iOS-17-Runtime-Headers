
@interface WFCNContact : WFContact {
    NSString * _accountIdentifier;
    CNContact * _contact;
    NSString * _contactIdentifier;
    bool  _fromVCard;
    long long  _multivalueIndex;
    int  _propertyID;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly, copy) CNContact *contact;
@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (nonatomic, readonly) bool fromVCard;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)addContactsChangeObserver:(id /* block */)arg1;
+ (id)changeObservers;
+ (void)contactStoreDidChange:(id)arg1;
+ (id)contactWithCNContact:(id)arg1;
+ (id)contactWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3;
+ (id)contactWithVCardData:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3;
+ (id)contactsWithVCardData:(id)arg1;
+ (void)removeContactsChangeObserver:(id)arg1;
+ (id)requiredKeysToFetch;
+ (bool)supportsSecureCoding;
+ (void)updateContactStoreObservation;

- (void).cxx_destruct;
- (id)URLs;
- (id)accountIdentifier;
- (id)attributionSetWithCachingIdentifier:(id)arg1;
- (id)birthday;
- (id)contact;
- (id)contactIdentifier;
- (id)contactIdentifierForINPerson;
- (id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dates;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)formattedName;
- (bool)fromVCard;
- (bool)hasImageData;
- (bool)hasValueForPropertyID:(int)arg1;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 fromVCard:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (id)instantMessageAddresses;
- (bool)isEqual:(id)arg1;
- (bool)isPropertyIDRepresented:(int)arg1;
- (id)lastName;
- (id)middleName;
- (long long)multivalueIndex;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)organization;
- (id)phoneNumbers;
- (int)propertyID;
- (void)refetchContact;
- (id)socialProfiles;
- (id)streetAddresses;
- (id)thumbnailImageData;
- (id)vCardRepresentationWithFullData:(bool)arg1;
- (id)valueForPropertyID:(int)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)triggerDisplayName;

@end
