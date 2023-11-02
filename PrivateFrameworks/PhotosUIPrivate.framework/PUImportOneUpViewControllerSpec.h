
@interface PUImportOneUpViewControllerSpec : PXFeatureSpec {
    bool  _allowsInterfaceRotation;
    double  _interItemSpacing;
    unsigned long long  _selectionBadgeCorner;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _selectionBadgeOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _selectionBadgeSize;
    unsigned long long  _style;
}

@property (nonatomic, readonly) bool allowsInterfaceRotation;
@property (nonatomic, readonly) double interItemSpacing;
@property (nonatomic, readonly) unsigned long long selectionBadgeCorner;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } selectionBadgeOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } selectionBadgeSize;
@property (nonatomic, readonly) unsigned long long style;

- (bool)allowsInterfaceRotation;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3;
- (double)interItemSpacing;
- (unsigned long long)selectionBadgeCorner;
- (struct UIOffset { double x1; double x2; })selectionBadgeOffset;
- (struct CGSize { double x1; double x2; })selectionBadgeSize;
- (unsigned long long)style;

@end
