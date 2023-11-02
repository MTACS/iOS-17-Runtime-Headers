
@interface AVSpeechSynthesisMarker : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bookmarkName;
    unsigned long long  _byteSampleOffset;
    long long  _mark;
    NSString * _phoneme;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textRange;
}

@property (nonatomic, copy) NSString *bookmarkName;
@property (nonatomic) unsigned long long byteSampleOffset;
@property (nonatomic) long long mark;
@property (nonatomic, copy) NSString *phoneme;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bookmarkName;
- (unsigned long long)byteSampleOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBookmarkName:(id)arg1 atByteSampleOffset:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithMarkerType:(long long)arg1 forTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 atByteSampleOffset:(unsigned long long)arg3;
- (id)initWithMarkerType:(long long)arg1 name:(id)arg2 forTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 atByteSampleOffset:(unsigned long long)arg4;
- (id)initWithParagraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atByteSampleOffset:(long long)arg2;
- (id)initWithPhonemeString:(id)arg1 atByteSampleOffset:(long long)arg2;
- (id)initWithSentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atByteSampleOffset:(long long)arg2;
- (id)initWithWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atByteSampleOffset:(long long)arg2;
- (long long)mark;
- (id)phoneme;
- (void)setBookmarkName:(id)arg1;
- (void)setByteSampleOffset:(unsigned long long)arg1;
- (void)setMark:(long long)arg1;
- (void)setPhoneme:(id)arg1;
- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

- (void)encodeWithCoder:(id)arg1;
- (id)initWithBookmarkName:(id)arg1 atByteSampleOffset:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithMarkerType:(long long)arg1 forTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 atByteSampleOffset:(unsigned long long)arg3;
- (id)initWithParagraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atByteSampleOffset:(long long)arg2;
- (id)initWithPhonemeString:(id)arg1 atByteSampleOffset:(long long)arg2;
- (id)initWithSentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atByteSampleOffset:(long long)arg2;
- (id)initWithWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atByteSampleOffset:(long long)arg2;

@end
