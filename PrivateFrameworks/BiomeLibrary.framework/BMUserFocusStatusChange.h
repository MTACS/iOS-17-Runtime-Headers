
@interface BMUserFocusStatusChange : BMEventBase <BMStoreData> {
    NSString * _idsHandle;
    NSArray * _idsHandles;
    NSString * _statusChangeType;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *idsHandle;
@property (nonatomic, readonly) NSArray *idsHandles;
@property (nonatomic, readonly) NSString *statusChangeType;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_idsHandlesJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)idsHandle;
- (id)idsHandles;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdsHandle:(id)arg1 statusChangeType:(id)arg2 idsHandles:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)statusChangeType;
- (void)writeTo:(id)arg1;

@end
