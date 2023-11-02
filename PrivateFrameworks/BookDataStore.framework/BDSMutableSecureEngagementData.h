
@interface BDSMutableSecureEngagementData : BCMutableCloudData <BDSSecureEngagementData, NSSecureCoding> {
    double  _durationInterval;
    NSString * _startTimestampString;
    NSData * _value;
}

@property (nonatomic, readonly, copy) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic) double durationInterval;
@property (nonatomic, readonly) long long editGeneration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic) <BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic, copy) NSString *startTimestampString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long syncGeneration;
@property (nonatomic, readonly, copy) CKRecord *systemFields;
@property (nonatomic, retain) NSData *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuredRecordFromAttributes;
- (id)description;
- (double)durationInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCloudData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)initWithStartTimestampString:(id)arg1 durationInterval:(double)arg2;
- (id)recordType;
- (void)setDurationInterval:(double)arg1;
- (void)setStartTimestampString:(id)arg1;
- (void)setValue:(id)arg1;
- (id)startTimestampString;
- (id)value;
- (id)zoneName;

@end
