
@interface AXKonaMarker : NSObject {
    unsigned int  _framePosition;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _originalStringRange;
    NSString * _text;
}

@property (nonatomic) unsigned int framePosition;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } originalStringRange;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (unsigned int)framePosition;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })originalStringRange;
- (void)setFramePosition:(unsigned int)arg1;
- (void)setOriginalStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
