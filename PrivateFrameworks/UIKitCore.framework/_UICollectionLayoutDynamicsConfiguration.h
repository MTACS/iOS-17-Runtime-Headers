
@interface _UICollectionLayoutDynamicsConfiguration : NSObject {
    NSMutableDictionary * _behaviorDict;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentVisibleBounds;
    NSMutableArray * _dirtyItems;
    NSArray * _items;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousVisibleBounds;
}

@property (nonatomic, retain) NSMutableDictionary *behaviorDict;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentVisibleBounds;
@property (nonatomic, retain) NSArray *dynamicItems;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousVisibleBounds;

- (void).cxx_destruct;
- (id)_dirtyItems;
- (void)_reset;
- (void)_setBehaviors:(id)arg1 forItem:(id)arg2;
- (id)behaviorDict;
- (id)behaviorsForItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentVisibleBounds;
- (id)dynamicItems;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousVisibleBounds;
- (void)setBehaviorDict:(id)arg1;
- (void)setBehaviors:(id)arg1 forItem:(id)arg2;
- (void)setCurrentVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDynamicItems:(id)arg1;
- (void)setPreviousVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
