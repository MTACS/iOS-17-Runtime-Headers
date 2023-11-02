
@interface CRLatticeRun : NSObject {
    NSArray * _graphEdges;
    NSMutableArray * _mutablePaths;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
}

@property (nonatomic, readonly) NSArray *graphEdges;
@property (nonatomic, retain) NSMutableArray *mutablePaths;
@property (nonatomic, readonly) NSArray *paths;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;

- (void).cxx_destruct;
- (void)appendPath:(id)arg1;
- (id)graphEdges;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)mutablePaths;
- (id)paths;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setGraph:(id)arg1;
- (void)setMutablePaths:(id)arg1;

@end
