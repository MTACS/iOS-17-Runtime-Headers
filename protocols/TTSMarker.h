
@protocol TTSMarker <NSObject>

@required

- (AVSpeechSynthesisMarker *)avMark;
- (long long)byteOffset;
- (long long)markType;
- (void)setByteOffset:(long long)arg1;

@end
