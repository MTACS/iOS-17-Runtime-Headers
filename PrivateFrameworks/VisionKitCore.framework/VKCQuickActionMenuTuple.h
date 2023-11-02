
@interface VKCQuickActionMenuTuple : NSObject {
    VKCActionInfoButton * _button;
    DDUIAction * _defaultAction;
    VKCBaseDataDetectorElement * _element;
    UIMenu * _menu;
}

@property (nonatomic, retain) VKCActionInfoButton *button;
@property (nonatomic, retain) DDUIAction *defaultAction;
@property (nonatomic, retain) VKCBaseDataDetectorElement *element;
@property (nonatomic, retain) UIMenu *menu;

- (void).cxx_destruct;
- (id)button;
- (id)defaultAction;
- (id)element;
- (id)menu;
- (void)setButton:(id)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setElement:(id)arg1;
- (void)setMenu:(id)arg1;

@end
