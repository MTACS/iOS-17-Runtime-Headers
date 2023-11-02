
@interface ATXMinimalAction : NSObject <ATXProtoBufWrapper, BMStoreData> {
    NSString * _actionType;
    NSString * _bundleId;
    long long  _paramHash;
}

@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long paramHash;
@property (readonly) Class superclass;

+ (id)datastore;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)actionFromDatastoreLookup;
- (id)actionFromDatastoreLookupForDatastore:(id)arg1;
- (id)actionType;
- (id)bundleId;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)init;
- (id)initWithBundleId:(id)arg1 actionType:(id)arg2 paramHash:(long long)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXMinimalAction:(id)arg1;
- (id)json;
- (id)jsonDict;
- (long long)paramHash;
- (id)proto;
- (id)serialize;

@end
