
@interface SFUnifiedTabBarAnimatedResizingInfo : NSObject {
    NSSet * _itemsToKeepVisible;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetContentOffset;
}

@property (nonatomic, readonly) NSSet *itemsToKeepVisible;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } targetContentOffset;

- (void).cxx_destruct;
- (id)initWithItemsToKeepVisible:(id)arg1 targetContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)itemsToKeepVisible;
- (struct CGPoint { double x1; double x2; })targetContentOffset;

@end
