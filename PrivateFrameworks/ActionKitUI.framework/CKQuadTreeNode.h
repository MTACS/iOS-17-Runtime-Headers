
@interface CKQuadTreeNode : NSObject {
    CKQuadTreeNode * _bottomLeft;
    CKQuadTreeNode * _bottomRight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    NSValue * _point;
    CKQuadTreeNode * _topLeft;
    CKQuadTreeNode * _topRight;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (getter=isLeaf, nonatomic, readonly) bool leaf;
@property (nonatomic, readonly, copy) NSArray *nodes;
@property (nonatomic, retain) NSValue *point;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)debugDescription;
- (id)debugDescriptionWithLevel:(long long)arg1;
- (id)description;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isLeaf;
- (id)nodeForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)nodes;
- (id)objectForKey:(id)arg1;
- (id)point;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPoint:(id)arg1;
- (void)visit:(id /* block */)arg1;

@end
