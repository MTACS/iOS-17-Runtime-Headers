
@interface HUQuickControlCollectionViewGridLayoutRowInfo : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSArray * _itemLayouts;
    unsigned long long  _numberOfItems;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rowOrigin;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, copy) NSArray *itemLayouts;
@property (nonatomic) unsigned long long numberOfItems;
@property (nonatomic) struct CGPoint { double x1; double x2; } rowOrigin;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)itemLayouts;
- (unsigned long long)numberOfItems;
- (struct CGPoint { double x1; double x2; })rowOrigin;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemLayouts:(id)arg1;
- (void)setNumberOfItems:(unsigned long long)arg1;
- (void)setRowOrigin:(struct CGPoint { double x1; double x2; })arg1;

@end
