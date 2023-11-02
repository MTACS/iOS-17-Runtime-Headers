
@interface FTMTAlternativeDescription_MTMeaningDescription : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct MTMeaningDescription { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *definition;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::MTAlternativeDescription_::MTMeaningDescription> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)definition;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MTMeaningDescription { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MTMeaningDescription { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
