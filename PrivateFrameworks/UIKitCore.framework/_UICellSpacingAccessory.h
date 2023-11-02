
@interface _UICellSpacingAccessory : _UICellAccessory {
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)accessoryWithIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)view;

@end
