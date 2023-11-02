
@interface PTGlobalVideoMetadata : NSObject {
    NSObject<PTSerializable> * _atoms;
}

+ (id)deserializeMetadataWithType:(unsigned int)arg1 fromGlobalMetadata:(id)arg2 error:(id*)arg3;
+ (void)initialize;

- (void).cxx_destruct;
- (unsigned int)_sizeOfAtomOfType:(unsigned int)arg1 withOptions:(id)arg2;
- (void)setMetadata:(id)arg1 ofType:(unsigned int)arg2;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)arg1;
- (bool)writeToData:(id)arg1 withOptions:(id)arg2;

@end
