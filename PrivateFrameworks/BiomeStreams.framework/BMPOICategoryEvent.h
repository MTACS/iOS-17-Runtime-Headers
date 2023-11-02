
@interface BMPOICategoryEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _poiCategory;
    unsigned long long  _rank;
    double  _timeIntervalSince1970;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *poiCategory;
@property (nonatomic) unsigned long long rank;
@property (readonly) Class superclass;
@property (nonatomic) double timeIntervalSince1970;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)init;
- (id)initWithPOICategory:(id)arg1 rank:(unsigned long long)arg2 timeIntervalSince1970:(double)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)poiCategory;
- (id)proto;
- (unsigned long long)rank;
- (id)serialize;
- (void)setRank:(unsigned long long)arg1;
- (void)setTimeIntervalSince1970:(double)arg1;
- (double)timeIntervalSince1970;

@end
