
@interface _SUICStreamingWord : NSObject {
    UIImage * _beginImage;
    NSArray * _emojiRangesInText;
    UIImage * _endImage;
    double  _glyphLocationInWordX;
    long long  _insertType;
    _SUICStreamingWord * _previous;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textRange;
    CALayer * _wordLayer;
}

@property (nonatomic, retain) UIImage *beginImage;
@property (nonatomic, retain) NSArray *emojiRangesInText;
@property (nonatomic, retain) UIImage *endImage;
@property (nonatomic) double glyphLocationInWordX;
@property (nonatomic) long long insertType;
@property (nonatomic, retain) _SUICStreamingWord *previous;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;
@property (nonatomic, retain) CALayer *wordLayer;

- (void).cxx_destruct;
- (id)beginImage;
- (id)emojiRangesInText;
- (id)endImage;
- (double)glyphLocationInWordX;
- (id)init;
- (long long)insertType;
- (id)previous;
- (void)setBeginImage:(id)arg1;
- (void)setEmojiRangesInText:(id)arg1;
- (void)setEndImage:(id)arg1;
- (void)setGlyphLocationInWordX:(double)arg1;
- (void)setInsertType:(long long)arg1;
- (void)setPrevious:(id)arg1;
- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setWordLayer:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;
- (id)wordLayer;

@end
