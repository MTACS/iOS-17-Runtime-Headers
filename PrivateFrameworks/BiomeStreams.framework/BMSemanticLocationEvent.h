
@interface BMSemanticLocationEvent : BMEventBase <BMEventBinaryStepping, BMProtoBufWrapper, BMStoreData> {
    NSString * _loiIdentifier;
    unsigned long long  _placeType;
    bool  _starting;
    unsigned long long  _userSpecificPlaceType;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *loiIdentifier;
@property (nonatomic, readonly) unsigned long long placeType;
@property (getter=isStarting, nonatomic) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long userSpecificPlaceType;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUserSpecificPlaceType:(unsigned long long)arg1 placeType:(unsigned long long)arg2 loiIdentifier:(id)arg3 starting:(bool)arg4;
- (id)initWithUserSpecificPlaceType:(unsigned long long)arg1 placeType:(unsigned long long)arg2 starting:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isStarting;
- (id)loiIdentifier;
- (unsigned long long)placeType;
- (id)proto;
- (id)serialize;
- (void)setStarting:(bool)arg1;
- (unsigned long long)userSpecificPlaceType;

@end
