
@interface FTMTAlternativeDescription : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct MTAlternativeDescription { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) long long alternative_type;
@property (nonatomic, readonly) FTMTAlternativeDescription_MTGenderDescription *gender_description;
@property (nonatomic, readonly) FTMTAlternativeDescription_MTMeaningDescription *meaning_description;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::MTAlternativeDescription> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (long long)alternative_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)gender_description;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MTAlternativeDescription { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MTAlternativeDescription { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)meaning_description;

@end
