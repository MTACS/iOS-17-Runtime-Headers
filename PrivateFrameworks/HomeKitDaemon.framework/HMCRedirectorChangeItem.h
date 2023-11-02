
@interface HMCRedirectorChangeItem : HMFObject {
    NSSet * _changedProperties;
    MKFObjectDatabaseID * _databaseID;
    NSUUID * _modelID;
    Protocol * _modelType;
}

@property (readonly) NSSet *changedProperties;
@property (readonly) MKFObjectDatabaseID *databaseID;
@property (readonly) NSUUID *modelID;
@property (readonly) Protocol *modelType;

- (void).cxx_destruct;
- (id)changedProperties;
- (id)databaseID;
- (id)description;
- (bool)isObjectType:(id)arg1;
- (id)modelID;
- (id)modelType;

@end
