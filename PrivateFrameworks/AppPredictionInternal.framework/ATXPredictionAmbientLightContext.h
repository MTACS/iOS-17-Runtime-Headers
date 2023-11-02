
@interface ATXPredictionAmbientLightContext : ATXPredictionContextDomain {
    int  _ambientLightType;
}

@property (nonatomic, readonly) int ambientLightType;

- (int)ambientLightType;
- (id)description;
- (id)encodeAsProto;
- (id)initWithAmbientLightType:(int)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPredictionAmbientLightContext:(id)arg1;
- (id)jsonDict;
- (id)proto;

@end
