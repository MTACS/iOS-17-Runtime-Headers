
@interface _FBSSnapshotContext : NSObject <NSCopying> {
    bool  _allowsProtectedContent;
    FBSDisplayConfiguration * _displayConfiguration;
    NSOrderedSet * _layers;
    bool  _opaque;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _snapshotSize;
}

@property (nonatomic) bool allowsProtectedContent;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly) NSOrderedSet *layers;
@property (getter=isOpaque, nonatomic) bool opaque;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x1; double x2; } snapshotSize;

- (void).cxx_destruct;
- (bool)allowsProtectedContent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayConfiguration;
- (id)initWithDisplayConfiguration:(id)arg1 layer:(id)arg2;
- (id)initWithDisplayConfiguration:(id)arg1 layers:(id)arg2;
- (bool)isOpaque;
- (id)layers;
- (double)scale;
- (void)setAllowsProtectedContent:(bool)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setScale:(double)arg1;
- (void)setSnapshotSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })snapshotSize;

@end
