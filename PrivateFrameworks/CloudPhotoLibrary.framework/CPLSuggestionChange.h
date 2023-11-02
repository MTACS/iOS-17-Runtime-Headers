
@interface CPLSuggestionChange : CPLRecordChange {
    NSData * _actionData;
    NSDate * _activationDate;
    NSDate * _creationDate;
    NSDate * _expungeDate;
    NSData * _featuresData;
    unsigned short  _notificationState;
    CPLSuggestionRecordList * _recordList;
    NSDate * _relevantUntilDate;
    unsigned short  _state;
    NSString * _subtitle;
    unsigned short  _subtype;
    NSString * _title;
    unsigned short  _type;
    long long  _version;
}

@property (nonatomic, copy) NSData *actionData;
@property (nonatomic, copy) NSDate *activationDate;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSDate *expungeDate;
@property (nonatomic, copy) NSData *featuresData;
@property (nonatomic) unsigned short notificationState;
@property (nonatomic, copy) CPLSuggestionRecordList *recordList;
@property (nonatomic, copy) NSDate *relevantUntilDate;
@property (nonatomic) unsigned short state;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic) unsigned short subtype;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned short type;
@property (nonatomic) long long version;

+ (id)_createTestSuggestionWithKeyAssets:(id)arg1 representativeAssets:(id)arg2;
+ (bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (bool)supportsDeletion;
+ (bool)supportsDirectDeletion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionData;
- (id)activationDate;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)expungeDate;
- (id)featuresData;
- (id)initWithCoder:(id)arg1;
- (unsigned short)notificationState;
- (id)propertiesDescription;
- (id)recordList;
- (id)relevantUntilDate;
- (id)scopedIdentifiersForMapping;
- (void)setActionData:(id)arg1;
- (void)setActivationDate:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setExpungeDate:(id)arg1;
- (void)setFeaturesData:(id)arg1;
- (void)setNotificationState:(unsigned short)arg1;
- (void)setRecordList:(id)arg1;
- (void)setRelevantUntilDate:(id)arg1;
- (void)setState:(unsigned short)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtype:(unsigned short)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned short)arg1;
- (void)setVersion:(long long)arg1;
- (unsigned short)state;
- (id)subtitle;
- (unsigned short)subtype;
- (id)title;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (unsigned short)type;
- (long long)version;

@end
