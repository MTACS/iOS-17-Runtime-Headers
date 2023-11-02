
@interface CHTopDownStrokeSplit : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _groupBounds1;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _groupBounds2;
    NSArray * _orderedStrokes;
    NSArray * _orderedStrokesGroup1;
    NSArray * _orderedStrokesGroup2;
    NSArray * _strokeGroup1;
    NSArray * _strokeGroup2;
    long long  _substrokeCount1;
    long long  _substrokeCount2;
    double  _transitionTime;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } groupBounds1;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } groupBounds2;
@property (nonatomic, readonly) NSArray *orderedStrokes;
@property (nonatomic, readonly) NSArray *orderedStrokesGroup1;
@property (nonatomic, readonly) NSArray *orderedStrokesGroup2;
@property (nonatomic, readonly) NSArray *strokeGroup1;
@property (nonatomic, readonly) NSArray *strokeGroup2;
@property (nonatomic, readonly) long long substrokeCount1;
@property (nonatomic, readonly) long long substrokeCount2;
@property (nonatomic, readonly) double transitionTime;

+ (id)writingDirectionOrderedStrokes:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 writingOrientation:(long long)arg3;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })groupBounds1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })groupBounds2;
- (id)initWithStrokes:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 splitIndex:(long long)arg3 writingOrientation:(long long)arg4;
- (id)orderedStrokes;
- (id)orderedStrokesGroup1;
- (id)orderedStrokesGroup2;
- (id)strokeGroup1;
- (id)strokeGroup2;
- (long long)substrokeCount1;
- (long long)substrokeCount2;
- (double)transitionTime;

@end
