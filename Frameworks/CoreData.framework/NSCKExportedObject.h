
@interface NSCKExportedObject : NSManagedObject

@property (nonatomic) long long changeType;
@property (nonatomic, retain) NSNumber *changeTypeNum;
@property (nonatomic, retain) NSString *ckRecordName;
@property (nonatomic, retain) NSCKExportOperation *operation;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSNumber *typeNum;
@property (nonatomic, retain) NSString *zoneName;

+ (id)entityPath;

- (long long)changeType;
- (void)setChangeType:(long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
