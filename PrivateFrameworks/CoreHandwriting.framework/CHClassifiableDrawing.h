
@interface CHClassifiableDrawing : NSObject {
    NSCharacterSet * _characterSet;
    CHDrawing * _drawing;
    bool  _expandCodePoints;
    unsigned long long  _maxCandidateCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizationContext;
}

@property (nonatomic, readonly) NSCharacterSet *characterSet;
@property (nonatomic, readonly) CHDrawing *drawing;
@property (nonatomic, readonly) bool expandCodePoints;
@property (nonatomic, readonly) unsigned long long maxCandidateCount;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizationContext;

- (void).cxx_destruct;
- (id)characterSet;
- (id)drawing;
- (bool)expandCodePoints;
- (id)initWithDrawing:(id)arg1 characterSet:(id)arg2 expandCodePoints:(bool)arg3 normalizationContext:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 maxCandidateCount:(unsigned long long)arg5;
- (unsigned long long)maxCandidateCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizationContext;

@end
