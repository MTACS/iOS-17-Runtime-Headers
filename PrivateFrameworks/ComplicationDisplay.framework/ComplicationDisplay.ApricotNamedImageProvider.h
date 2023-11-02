
@interface ComplicationDisplay.ApricotNamedImageProvider : CLKImageProvider <CDSwiftUIImageProvider> {
    void _maxSize;
    void finalized;
    void font;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  named;
    void scale;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic) long long scale;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)font;
- (id)init;
- (id)initPrivate;
- (id)initWithCoder:(id)arg1;
- (id)initWithForegroundAccentImage:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })maxSize;
- (long long)scale;
- (void)setFont:(id)arg1;
- (void)setScale:(long long)arg1;

@end
