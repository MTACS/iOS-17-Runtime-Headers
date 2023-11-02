
@interface _PFObjectCKRecordZoneLink : NSObject <NSCopying> {
    NSManagedObjectID * _objectID;
    NSString * _recordName;
}

@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) NSString *recordName;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithObjectID:(id)arg1 recordName:(id)arg2;
- (id)objectID;
- (id)recordName;

@end
