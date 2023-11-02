
@interface HUQuickControlCollectionViewLayoutInfo : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _availableContentFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _collectionViewContentSize;
    NSMutableArray * _layoutDetailsArray;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } availableContentFrame;
@property (nonatomic) struct CGSize { double x1; double x2; } collectionViewContentSize;
@property (nonatomic, retain) NSMutableArray *layoutDetailsArray;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })availableContentFrame;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)layoutDetailsArray;
- (void)setAvailableContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCollectionViewContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayoutDetailsArray:(id)arg1;

@end
