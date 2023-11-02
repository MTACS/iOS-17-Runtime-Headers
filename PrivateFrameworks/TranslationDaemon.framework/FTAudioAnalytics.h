
@interface FTAudioAnalytics : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct AudioAnalytics { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *acoustic_features;
@property (nonatomic, readonly) NSArray *speech_recognition_features;

- (void).cxx_destruct;
- (id)acoustic_features;
- (unsigned long long)acoustic_features_count;
- (void)acoustic_features_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)acoustic_features_objectAtIndex:(unsigned long long)arg1;
- (struct Offset<siri::speech::schema_fb::AudioAnalytics> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioAnalytics { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioAnalytics { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)speech_recognition_features;
- (unsigned long long)speech_recognition_features_count;
- (void)speech_recognition_features_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)speech_recognition_features_objectAtIndex:(unsigned long long)arg1;

@end
