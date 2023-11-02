
@interface ICSearchQuerySegment : NSObject {
    bool  _isExpandable;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _segmentRange;
    NSString * _segmentString;
    unsigned long long  _type;
}

@property (nonatomic) bool isExpandable;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } segmentRange;
@property (nonatomic, retain) NSString *segmentString;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSegmentString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 type:(unsigned long long)arg3 isExpandable:(bool)arg4;
- (bool)isExpandable;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })segmentRange;
- (id)segmentString;
- (void)setIsExpandable:(bool)arg1;
- (void)setSegmentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSegmentString:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
