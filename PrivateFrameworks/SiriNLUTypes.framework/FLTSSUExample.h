
@interface FLTSSUExample : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SSUExample { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSObject<FLTBFBufferAccessor><NSCopying> *data;
@property (nonatomic, readonly) FLTSSUExampleEncodedVector *dataAsFLTSSUExampleEncodedVector;
@property (nonatomic, readonly) FLTSSUExampleUtterance *dataAsFLTSSUExampleUtterance;
@property (nonatomic, readonly) long long data_type;

+ (Class)data_immutableClassForType:(long long)arg1;
+ (long long)data_typeForImmutableObject:(id)arg1;

- (void).cxx_destruct;
- (struct Offset<SSUExample> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dataAsFLTSSUExampleEncodedVector;
- (id)dataAsFLTSSUExampleUtterance;
- (long long)data_type;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUExample { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUExample { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
