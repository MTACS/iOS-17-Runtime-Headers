
@interface BMFindMyLocationChangeEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _idsHandle;
    NSNumber * _latitude;
    unsigned long long  _locationChangeType;
    NSNumber * _longitude;
    long long  _motionActivityState;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *idsHandle;
@property (nonatomic, copy) NSNumber *latitude;
@property (nonatomic) unsigned long long locationChangeType;
@property (nonatomic, copy) NSNumber *longitude;
@property long long motionActivityState;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)idsHandle;
- (id)initWithIDSHandle:(id)arg1 locationChangeType:(unsigned long long)arg2;
- (id)initWithIDSHandle:(id)arg1 locationChangeType:(unsigned long long)arg2 motionActivityState:(long long)arg3 latitude:(id)arg4 longitude:(id)arg5 name:(id)arg6;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)latitude;
- (unsigned long long)locationChangeType;
- (id)longitude;
- (long long)motionActivityState;
- (id)name;
- (id)proto;
- (id)serialize;
- (void)setIdsHandle:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLocationChangeType:(unsigned long long)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMotionActivityState:(long long)arg1;
- (void)setName:(id)arg1;

@end
