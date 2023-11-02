
@interface BMContextSyncLOI : BMEventBase <BMStoreData> {
    NSString * _ID;
    NSString * _deviceUUID;
    bool  _hasStarting;
    int  _placeType;
    bool  _starting;
    int  _userSpecificPlaceType;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceUUID;
@property (nonatomic) bool hasStarting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int placeType;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int userSpecificPlaceType;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)ID;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceUUID;
- (bool)hasStarting;
- (id)initByReadFrom:(id)arg1;
- (id)initWithID:(id)arg1 deviceUUID:(id)arg2 starting:(id)arg3 userSpecificPlaceType:(int)arg4 placeType:(int)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)placeType;
- (id)serialize;
- (void)setHasStarting:(bool)arg1;
- (bool)starting;
- (int)userSpecificPlaceType;
- (void)writeTo:(id)arg1;

@end
