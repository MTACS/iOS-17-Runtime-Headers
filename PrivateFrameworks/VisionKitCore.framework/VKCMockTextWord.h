
@interface VKCMockTextWord : NSObject {
    VKQuad * _quad;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _text;
}

@property (nonatomic, retain) VKQuad *quad;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (id)initWithWordsDictionary:(id)arg1;
- (id)quad;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setQuad:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
