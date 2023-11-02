
@interface TTSPhonemeMarker : NSObject <TTSMarker> {
    long long  _alphabet;
    long long  _byteOffset;
    NSString * _phoneme;
}

@property (nonatomic) long long alphabet;
@property (nonatomic, readonly) AVSpeechSynthesisMarker *avMark;
@property (nonatomic) long long byteOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long markType;
@property (nonatomic, retain) NSString *phoneme;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)alphabet;
- (id)avMark;
- (long long)byteOffset;
- (long long)markType;
- (id)phoneme;
- (void)setAlphabet:(long long)arg1;
- (void)setByteOffset:(long long)arg1;
- (void)setPhoneme:(id)arg1;
- (id)toAVMarkAtOffset:(long long)arg1;

@end
