
@interface PFParallaxLayer : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSString * _identifier;
    double  _zPosition;
}

@property (nonatomic, readonly) NSString *fileExtension;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isBackfill;
@property (nonatomic, readonly) bool isBackground;
@property (nonatomic, readonly) bool isDebug;
@property (nonatomic, readonly) bool isForeground;
@property (nonatomic, readonly) bool isInactive;
@property (nonatomic, readonly) bool isSettlingEffect;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) double zPosition;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)fileExtension;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zPosition:(double)arg2 identifier:(id)arg3;
- (bool)isBackfill;
- (bool)isBackground;
- (bool)isBackgroundLandscape;
- (bool)isDebug;
- (bool)isForeground;
- (bool)isForegroundLandscape;
- (bool)isInactive;
- (bool)isSettlingEffect;
- (id)layerByUpdatingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)makeUniqueFileNameWithFileNames:(id)arg1 orientation:(long long)arg2;
- (struct CGSize { double x1; double x2; })pixelSize;
- (bool)saveToURL:(id)arg1 error:(id*)arg2;
- (double)zPosition;

@end
