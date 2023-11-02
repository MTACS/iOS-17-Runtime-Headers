
@interface PKChangeHistoryEvent : NSObject {
    NSString * _identifier;
    long long  _recordType;
    NSString * _recordUniqueID;
    NSDate * _timestamp;
    long long  _type;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long recordType;
@property (nonatomic, retain) NSString *recordUniqueID;
@property (nonatomic, readonly) bool representsCatalogUpdate;
@property (nonatomic, readonly) bool representsPassAddition;
@property (nonatomic, readonly) bool representsPassRemoval;
@property (nonatomic, readonly) bool representsPassUpdate;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithType:(long long)arg1 recordType:(long long)arg2 recordUniqueID:(id)arg3 timestamp:(id)arg4;
- (bool)isEqual:(id)arg1;
- (long long)recordType;
- (id)recordUniqueID;
- (bool)representsCatalogUpdate;
- (bool)representsPassAddition;
- (bool)representsPassRemoval;
- (bool)representsPassUpdate;
- (void)setIdentifier:(id)arg1;
- (void)setRecordType:(long long)arg1;
- (void)setRecordUniqueID:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setType:(long long)arg1;
- (id)timestamp;
- (long long)type;

@end
