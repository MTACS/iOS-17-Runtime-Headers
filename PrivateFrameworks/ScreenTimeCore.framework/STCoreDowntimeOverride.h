
@interface STCoreDowntimeOverride : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>

@property (copy) NSString *calendarIdentifier;
@property (copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) STBlueprint *downtime;
@property (copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTombstoned;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (readonly) <STSerializableManagedObject> *syncableRootObject;
@property (nonatomic) long long type;

- (id)dictionaryRepresentation;
- (void)setState:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)state;
- (id)syncableRootObject;
- (long long)type;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
