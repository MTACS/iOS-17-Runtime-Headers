
@interface SRCSCommandSegmentInfo : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _text;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSString *text;

+ (id)segmentInfoWith:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 text:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
