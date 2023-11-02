
@interface PKDetectionItem : NSObject {
    UIBezierPath * _baselinePath;
    UIBezierPath * _boundsPath;
    NSUUID * _cachedUUID;
    PKDrawing * _drawing;
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
    UIColor * _inkColor;
    PKDetectionQueryItem * _queryItem;
    PKRecognitionSessionManager * _sessionManager;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _strokeBounds;
    double  _strokeWidth;
    bool  _validCachedUUID;
}

@property (nonatomic, retain) UIBezierPath *baselinePath;
@property (nonatomic, retain) UIBezierPath *boundsPath;
@property (nonatomic, retain) NSUUID *cachedUUID;
@property (nonatomic) PKDrawing *drawing;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, retain) UIColor *inkColor;
@property (nonatomic, retain) PKDetectionQueryItem *queryItem;
@property (nonatomic) PKRecognitionSessionManager *sessionManager;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } strokeBounds;
@property (nonatomic, readonly) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (nonatomic) bool validCachedUUID;

- (void).cxx_destruct;
- (id)UUID;
- (id)_actionNameForActivation:(bool)arg1;
- (id)_baselinePath;
- (void)_generatePaths;
- (id)_strokes;
- (id)baselinePath;
- (id)boundsPath;
- (id)cachedUUID;
- (id)drawing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)image;
- (id)initWithSessionManager:(id)arg1;
- (id)inkColor;
- (id)queryItem;
- (id)sessionManager;
- (void)setBaselinePath:(id)arg1;
- (void)setBoundsPath:(id)arg1;
- (void)setCachedUUID:(id)arg1;
- (void)setDrawing:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInkColor:(id)arg1;
- (void)setQueryItem:(id)arg1;
- (void)setSessionManager:(id)arg1;
- (void)setStrokeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStrokeWidth:(double)arg1;
- (id)setUUID:(id)arg1;
- (void)setValidCachedUUID:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })strokeBounds;
- (id)strokeColor;
- (double)strokeWidth;
- (bool)validCachedUUID;

@end
