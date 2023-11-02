
@interface VKCMockTextLine : NSObject {
    VKQuad * _quad;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _text;
    NSArray * _words;
}

@property (nonatomic, retain) VKQuad *quad;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSArray *words;

- (void).cxx_destruct;
- (id)initWithWordsArray:(id)arg1 startingIndex:(unsigned long long)arg2;
- (void)loadWordsArrayFromWords:(id)arg1 startingIndex:(unsigned long long)arg2;
- (id)quad;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setQuad:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setText:(id)arg1;
- (void)setWords:(id)arg1;
- (id)text;
- (id)words;

@end
