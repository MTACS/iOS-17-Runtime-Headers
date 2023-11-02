
@interface WKSnapshotConfiguration : NSObject <NSCopying> {
    bool  _afterScreenUpdates;
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
    NSNumber * _snapshotWidth;
}

@property (nonatomic) bool afterScreenUpdates;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic, copy) NSNumber *snapshotWidth;

- (bool)afterScreenUpdates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setAfterScreenUpdates:(bool)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSnapshotWidth:(id)arg1;
- (id)snapshotWidth;

@end
