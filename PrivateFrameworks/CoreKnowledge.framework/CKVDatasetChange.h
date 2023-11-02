
@interface CKVDatasetChange : NSObject {
    NSArray * _addedDevices;
    NSArray * _addedLocalInstances;
    NSArray * _allDevices;
    NSArray * _allLocalInstances;
    NSArray * _removedDevices;
    NSArray * _removedLocalInstances;
    CKVSharedItem * _sharedItem;
    unsigned short  _sharedItemChangeType;
}

@property (nonatomic, readonly) NSArray *addedDevices;
@property (nonatomic, readonly) NSArray *addedLocalInstances;
@property (nonatomic, readonly) NSArray *allDevices;
@property (nonatomic, readonly) NSArray *allLocalInstances;
@property (nonatomic, readonly) NSArray *removedDevices;
@property (nonatomic, readonly) NSArray *removedLocalInstances;
@property (nonatomic, readonly) CKVSharedItem *sharedItem;
@property (nonatomic, readonly) unsigned short sharedItemChangeType;

- (void).cxx_destruct;
- (id)addedDevices;
- (id)addedLocalInstances;
- (id)allDevices;
- (id)allLocalInstances;
- (id)description;
- (id)initWithSharedItem:(id)arg1 sharedItemChangeType:(unsigned short)arg2 allDevices:(id)arg3 addedDevices:(id)arg4 removedDevices:(id)arg5 allLocalInstances:(id)arg6 addedLocalInstances:(id)arg7 removedLocalInstances:(id)arg8;
- (id)removedDevices;
- (id)removedLocalInstances;
- (id)sharedItem;
- (unsigned short)sharedItemChangeType;

@end
