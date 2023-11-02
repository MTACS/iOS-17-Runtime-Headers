
@interface AMSMetricsIdentifierInfo : NSObject {
    bool  _crossDeviceSync;
    bool  _deleted;
    NSDate * _expires;
    NSString * _idKey;
    NSDate * _lastSync;
    NSDate * _modified;
    NSString * _name;
    NSString * _storeUUID;
    NSString * _value;
}

@property (nonatomic) bool crossDeviceSync;
@property (nonatomic) bool deleted;
@property (nonatomic, retain) NSDate *expires;
@property (nonatomic, retain) NSString *idKey;
@property (nonatomic, retain) NSDate *lastSync;
@property (nonatomic, retain) NSDate *modified;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *storeUUID;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (bool)crossDeviceSync;
- (bool)deleted;
- (id)expires;
- (id)idKey;
- (id)lastSync;
- (id)modified;
- (id)name;
- (void)populateDictionary:(id)arg1;
- (void)setCrossDeviceSync:(bool)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setExpires:(id)arg1;
- (void)setIdKey:(id)arg1;
- (void)setLastSync:(id)arg1;
- (void)setModified:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStoreUUID:(id)arg1;
- (void)setValue:(id)arg1;
- (id)storeUUID;
- (id)syncStateFieldName;
- (id)value;

@end
