
@interface FTSetRequestOrigin : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SetRequestOrigin { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) bool enable_geo_location_features;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SetRequestOrigin> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enable_geo_location_features;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetRequestOrigin { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetRequestOrigin { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (double)latitude;
- (double)longitude;

@end
