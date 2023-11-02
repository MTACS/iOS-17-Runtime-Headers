
@interface MRContentItemMetadataAudioRoute : NSObject <NSCopying> {
    bool  _hasSpatializationEnabled;
    bool  _hasSupportsSpatialization;
    bool  _hasType;
    NSString * _name;
    bool  _spatializationEnabled;
    bool  _supportsSpatialization;
    long long  _type;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool hasSpatializationEnabled;
@property (nonatomic) bool hasSupportsSpatialization;
@property (nonatomic) bool hasType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) _MRAudioRouteProtobuf *protobuf;
@property (getter=isSpatializationEnabled, nonatomic) bool spatializationEnabled;
@property (nonatomic) bool supportsSpatialization;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasSpatializationEnabled;
- (bool)hasSupportsSpatialization;
- (bool)hasType;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSpatializationEnabled;
- (id)name;
- (id)protobuf;
- (void)setHasSpatializationEnabled:(bool)arg1;
- (void)setHasSupportsSpatialization:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSpatializationEnabled:(bool)arg1;
- (void)setSupportsSpatialization:(bool)arg1;
- (void)setType:(long long)arg1;
- (bool)supportsSpatialization;
- (long long)type;

@end
