
@interface CMNatalieData : CMLogItem {
    long long  fActivityType;
    double  fBasalNatalies;
    double  fMets;
    double  fNatalies;
    long long  fRecordId;
    NSUUID * fSourceId;
    double  fStartDate;
}

@property (nonatomic, readonly) long long activityType;
@property (nonatomic, readonly) NSNumber *basalNatalies;
@property (nonatomic, readonly) NSNumber *mets;
@property (nonatomic, readonly) NSNumber *natalies;
@property (nonatomic, readonly) long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)maxNatalieEntries;
+ (bool)supportsSecureCoding;

- (long long)activityType;
- (id)basalNatalies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 recordId:(long long)arg2 activityType:(long long)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 sourceId:(id)arg7;
- (id)mets;
- (id)natalies;
- (long long)recordId;
- (id)sourceId;
- (id)startDate;

@end
