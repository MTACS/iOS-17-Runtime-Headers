
@interface FTMTAlternativeDescription_MTGenderDescription : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct MTGenderDescription { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) long long default_gender;
@property (nonatomic, readonly) long long gender;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::MTAlternativeDescription_::MTGenderDescription> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)default_gender;
- (id)flatbuffData;
- (long long)gender;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MTGenderDescription { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MTGenderDescription { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
