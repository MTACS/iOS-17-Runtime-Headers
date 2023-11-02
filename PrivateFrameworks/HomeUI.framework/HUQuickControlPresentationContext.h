
@interface HUQuickControlPresentationContext : NSObject <NSCopying> {
    unsigned long long  _colorStyle;
    NSSet * _controlItems;
    UIViewController<HUDetailsPresentationDelegateHost> * _detailsViewController;
    bool  _didAuthenticate;
    HMHome * _home;
    bool  _isConfiguredForNonHomeUser;
    HFItem<NSCopying> * _item;
    HUQuickControlPresentationItemManager * _itemManager;
    <HFHomeKitObject><HMApplicationData> * _parentViewHomeKitObject;
    bool  _prefersSystemTransitions;
    bool  _shouldIncludeRoomNameInHeaderTitle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIViewController * _sourceViewController;
    NSString * _tappedArea;
}

@property (nonatomic) unsigned long long colorStyle;
@property (nonatomic, copy) NSSet *controlItems;
@property (nonatomic, retain) UIViewController<HUDetailsPresentationDelegateHost> *detailsViewController;
@property (nonatomic) bool didAuthenticate;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isConfiguredForNonHomeUser;
@property (nonatomic, retain) HFItem<NSCopying> *item;
@property (nonatomic, retain) HUQuickControlPresentationItemManager *itemManager;
@property (nonatomic, retain) <HFHomeKitObject><HMApplicationData> *parentViewHomeKitObject;
@property (nonatomic) bool prefersSystemTransitions;
@property (nonatomic) bool shouldIncludeRoomNameInHeaderTitle;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic) UIViewController *sourceViewController;
@property (nonatomic, retain) NSString *tappedArea;

- (void).cxx_destruct;
- (unsigned long long)colorStyle;
- (id)controlItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailsViewController;
- (bool)didAuthenticate;
- (id)home;
- (bool)isConfiguredForNonHomeUser;
- (id)item;
- (id)itemManager;
- (id)parentViewHomeKitObject;
- (bool)prefersSystemTransitions;
- (void)setColorStyle:(unsigned long long)arg1;
- (void)setControlItems:(id)arg1;
- (void)setDetailsViewController:(id)arg1;
- (void)setDidAuthenticate:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setIsConfiguredForNonHomeUser:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setItemManager:(id)arg1;
- (void)setParentViewHomeKitObject:(id)arg1;
- (void)setPrefersSystemTransitions:(bool)arg1;
- (void)setShouldIncludeRoomNameInHeaderTitle:(bool)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceViewController:(id)arg1;
- (void)setTappedArea:(id)arg1;
- (bool)shouldIncludeRoomNameInHeaderTitle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceViewController;
- (id)tappedArea;

@end
