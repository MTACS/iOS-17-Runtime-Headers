
@interface TTSWordMarker : NSObject <TTSMarker> {
    long long  _byteOffset;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _wordRange;
}

@property (nonatomic, readonly) AVSpeechSynthesisMarker *avMark;
@property (nonatomic) long long byteOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long markType;
@property (readonly) Class superclass;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } wordRange;

- (id)avMark;
- (long long)byteOffset;
- (long long)markType;
- (void)setByteOffset:(long long)arg1;
- (void)setWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })wordRange;

@end
