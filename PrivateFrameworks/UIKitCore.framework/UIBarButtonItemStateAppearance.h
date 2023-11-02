
@interface UIBarButtonItemStateAppearance : NSObject {
    _UIBarButtonItemData * _data;
    NSArray * _itemEffects;
    UIBarButtonItemAppearance * _owner;
    long long  _state;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic) struct UIOffset { double x1; double x2; } backgroundImagePositionAdjustment;
@property (nonatomic, retain) _UIBarButtonItemData *data;
@property (nonatomic, copy) NSArray *itemEffects;
@property (nonatomic) struct UIOffset { double x1; double x2; } titlePositionAdjustment;
@property (nonatomic, copy) NSDictionary *titleTextAttributes;

- (void).cxx_destruct;
- (void)_clearOwner;
- (id)_initWithOwner:(id)arg1 data:(id)arg2 state:(long long)arg3;
- (void)_writeToStorage:(id /* block */)arg1;
- (id)backgroundImage;
- (struct UIOffset { double x1; double x2; })backgroundImagePositionAdjustment;
- (id)data;
- (id)init;
- (id)itemEffects;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImagePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setData:(id)arg1;
- (void)setItemEffects:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustment;
- (id)titleTextAttributes;

@end
