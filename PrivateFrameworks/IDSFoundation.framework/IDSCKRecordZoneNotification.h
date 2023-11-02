
@interface IDSCKRecordZoneNotification : IDSCKNotification {
    IDSCKRecordZoneID * _recordZoneID;
}

@property (nonatomic, readonly, copy) IDSCKRecordZoneID *recordZoneID;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id)recordZoneID;

@end
