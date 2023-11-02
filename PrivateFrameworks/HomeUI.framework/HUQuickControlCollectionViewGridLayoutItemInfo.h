
@interface HUQuickControlCollectionViewGridLayoutItemInfo : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned long long  _titlePosition;
}

@property (nonatomic) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) unsigned long long titlePosition;

- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTitlePosition:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)titlePosition;

@end
