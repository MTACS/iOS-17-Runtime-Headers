
@interface PKAccountEvent : NSObject <PKCloudStoreCoding> {
    NSString * _accountIdentifier;
    NSString * _altDSID;
    bool  _blockNotification;
    NSDate * _date;
    NSDate * _expirationDate;
    NSString * _identifier;
    NSSet * _items;
    long long  _type;
    unsigned long long  _updateReasons;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic) bool blockNotification;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSSet *items;
@property (nonatomic) long long type;
@property (nonatomic, readonly) bool updateReasonIsInitialDownload;
@property (nonatomic, readonly) unsigned long long updateReasons;

+ (long long)accountEventTypeFromRecord:(id)arg1;
+ (id)accountIdentifierFromRecord:(id)arg1;
+ (id)eventIdentifierFromRecordName:(id)arg1;
+ (id)recordNameForEventIdentifier:(id)arg1;
+ (id)recordNamePrefix;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_encodeServerDataForCloudStoreCoder:(id)arg1;
- (id)accountIdentifier;
- (void)addUpdateReasons:(unsigned long long)arg1;
- (id)altDSID;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (bool)blockNotification;
- (id)date;
- (id)description;
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccountEvent:(id)arg1;
- (unsigned long long)itemType;
- (id)items;
- (id)primaryIdentifier;
- (id)recordName;
- (id)recordNameForItem:(id)arg1;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setBlockNotification:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (bool)updateReasonIsInitialDownload;
- (unsigned long long)updateReasons;
- (id)updateReasonsDescription;

@end
