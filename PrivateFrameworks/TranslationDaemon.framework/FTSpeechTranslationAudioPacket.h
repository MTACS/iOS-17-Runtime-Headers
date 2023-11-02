
@interface FTSpeechTranslationAudioPacket : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SpeechTranslationAudioPacket { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *audio_frames;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationAudioPacket> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)audio_frames;
- (unsigned long long)audio_frames_count;
- (void)audio_frames_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)audio_frames_objectAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationAudioPacket { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationAudioPacket { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
