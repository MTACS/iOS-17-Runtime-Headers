
@interface VKCImageSubjectContextInstance : NSObject {
    UIBezierPath * _baseNormalizedSubjectPath;
    UIBezierPath * _baseTopLevelNormalizedSubjectPath;
    UIBezierPath * _cachedNormalizedPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedNormalizedPathContentsRect;
    UIBezierPath * _cachedTopLevelNormalizedPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedTopLevelNormalizedPathContentsRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    unsigned long long  _madIndex;
    struct CGImage { } * _maskImage;
    struct CGImage { } * _orientedMaskImage;
}

@property (nonatomic, copy) UIBezierPath *baseNormalizedSubjectPath;
@property (nonatomic, copy) UIBezierPath *baseTopLevelNormalizedSubjectPath;
@property (nonatomic, retain) UIBezierPath *cachedNormalizedPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedNormalizedPathContentsRect;
@property (nonatomic, retain) UIBezierPath *cachedTopLevelNormalizedPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedTopLevelNormalizedPathContentsRect;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) unsigned long long madIndex;
@property (nonatomic) struct CGImage { }*maskImage;
@property (nonatomic) struct CGImage { }*orientedMaskImage;

- (void).cxx_destruct;
- (id)baseNormalizedSubjectPath;
- (id)baseTopLevelNormalizedSubjectPath;
- (id)cachedNormalizedPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedNormalizedPathContentsRect;
- (id)cachedTopLevelNormalizedPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedTopLevelNormalizedPathContentsRect;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (unsigned long long)madIndex;
- (struct CGImage { }*)maskImage;
- (id)normalizedSubjectPathWithContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 topLevelOnly:(bool)arg2;
- (struct CGImage { }*)orientedMaskImage;
- (void)setBaseNormalizedSubjectPath:(id)arg1;
- (void)setBaseTopLevelNormalizedSubjectPath:(id)arg1;
- (void)setCachedNormalizedPath:(id)arg1;
- (void)setCachedNormalizedPathContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCachedTopLevelNormalizedPath:(id)arg1;
- (void)setCachedTopLevelNormalizedPathContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMadIndex:(unsigned long long)arg1;
- (void)setMaskImage:(struct CGImage { }*)arg1;
- (void)setOrientedMaskImage:(struct CGImage { }*)arg1;

@end
