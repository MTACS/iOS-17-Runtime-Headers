
@interface TISCTextRunResponse : NSObject {
    struct __CFArray { } * _ctLines;
    struct __CTFont { } * _font;
    NSMutableArray * _widths;
}

+ (id)textRunResponseByMergingResponses:(id)arg1;
+ (id)textRunResponseWithFont:(struct __CTFont { }*)arg1;

- (void).cxx_destruct;
- (struct __CFArray { }*)ctLines;
- (void)dealloc;
- (struct __CTFont { }*)font;
- (id)widths;

@end
