
@interface _UIBarCustomizationItem : NSObject {
    _UIBarCustomizationChiclet * __chiclet;
    bool  _collapsed;
    bool  _collapsible;
    bool  _enabled;
    UIImage * _icon;
    NSString * _identifier;
    NSString * _name;
    bool  _removable;
    bool  _reverseItemsForRTL;
    id /* block */  _sourceViewProvider;
    NSArray * _subitems;
    UIColor * _tintColor;
    UIView * _view;
}

@property (nonatomic, retain) _UIBarCustomizationChiclet *_chiclet;
@property (nonatomic) bool collapsed;
@property (nonatomic) bool collapsible;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool removable;
@property (nonatomic) bool reverseItemsForRTL;
@property (nonatomic, copy) id /* block */ sourceViewProvider;
@property (nonatomic, readonly) NSArray *subitems;
@property (nonatomic, copy) UIColor *tintColor;
@property (nonatomic, retain) UIView *view;

+ (id)groupWithWithIdentifier:(id)arg1 icon:(id)arg2 name:(id)arg3 items:(id)arg4;
+ (id)itemWithIdentifier:(id)arg1 icon:(id)arg2 name:(id)arg3 view:(id)arg4;

- (void).cxx_destruct;
- (id)_chiclet;
- (void)_enumerateSubitemsWithBlock:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceFrameInContainer:(id)arg1;
- (bool)collapsed;
- (bool)collapsible;
- (id)description;
- (bool)enabled;
- (id)icon;
- (id)identifier;
- (id)init;
- (id)name;
- (bool)removable;
- (bool)reverseItemsForRTL;
- (void)setCollapsed:(bool)arg1;
- (void)setCollapsible:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRemovable:(bool)arg1;
- (void)setReverseItemsForRTL:(bool)arg1;
- (void)setSourceViewProvider:(id /* block */)arg1;
- (void)setTintColor:(id)arg1;
- (void)setView:(id)arg1;
- (void)set_chiclet:(id)arg1;
- (id /* block */)sourceViewProvider;
- (id)subitems;
- (id)tintColor;
- (id)view;

@end
