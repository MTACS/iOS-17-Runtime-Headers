
@interface LPLinkSnapshotConfiguration : NSObject <NSSecureCoding> {
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    unsigned long long  _preferredSizeClass;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    LPLinkRendererSizeClassParameters * _sizeClassParameters;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic, readonly) unsigned long long preferredSizeClass;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) LPLinkRendererSizeClassParameters *sizeClassParameters;
@property (nonatomic, readonly, retain) UITraitCollection *traitCollection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTraitCollection:(id)arg1 preferredSizeClass:(unsigned long long)arg2 maximumSize:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
- (id)initWithTraitCollection:(id)arg1 preferredSizeClass:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
- (struct CGSize { double x1; double x2; })maximumSize;
- (unsigned long long)preferredSizeClass;
- (double)scale;
- (void)setSizeClassParameters:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)sizeClassParameters;
- (id)traitCollection;

@end
