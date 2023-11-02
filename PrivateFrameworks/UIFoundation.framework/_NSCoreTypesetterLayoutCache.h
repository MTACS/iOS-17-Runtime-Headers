
@interface _NSCoreTypesetterLayoutCache : NSObject {
    struct CGSize { double x1; double x2; } * _advances;
    unsigned long long  _count;
    double  _elasticAdvances;
    unsigned short * _glyphs;
    struct __CTLine { } * _line;
    bool  _lineValidForDrawing;
    struct __CTFont { } * _resolvedFont;
    long long  _textAlignment;
    _NSTextAttachmentLayoutContext * _textAttachmentLayoutContext;
}

- (void)dealloc;

@end
