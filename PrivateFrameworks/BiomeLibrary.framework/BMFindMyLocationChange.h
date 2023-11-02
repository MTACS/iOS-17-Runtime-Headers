
@interface BMFindMyLocationChange : BMEventBase <BMStoreData> {
    int  _activityState;
    bool  _hasLatitude;
    bool  _hasLongitude;
    NSString * _idsHandle;
    double  _latitude;
    double  _longitude;
    NSString * _name;
    int  _stateChange;
}

@property (nonatomic, readonly) int activityState;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *idsHandle;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int stateChange;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)activityState;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (id)idsHandle;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdsHandle:(id)arg1 stateChange:(int)arg2 activityState:(int)arg3 latitude:(id)arg4 longitude:(id)arg5 name:(id)arg6;
- (id)initWithIdsHandle:(id)arg1 stateChange:(int)arg2 activityState:(int)arg3 name:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (double)latitude;
- (double)longitude;
- (id)name;
- (id)serialize;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (int)stateChange;
- (void)writeTo:(id)arg1;

@end
