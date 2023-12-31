
@interface PSSpinnerRecord : NSObject {
    bool  _hidesBackButton;
    NSArray * _leftItems;
    UINavigationItem * _navigationItem;
    NSArray * _rightItems;
}

@property (nonatomic) bool hidesBackButton;
@property (nonatomic, copy) NSArray *leftItems;
@property (nonatomic, retain) UINavigationItem *navigationItem;
@property (nonatomic, copy) NSArray *rightItems;

- (void).cxx_destruct;
- (bool)hidesBackButton;
- (id)leftItems;
- (id)navigationItem;
- (id)rightItems;
- (void)setHidesBackButton:(bool)arg1;
- (void)setLeftItems:(id)arg1;
- (void)setNavigationItem:(id)arg1;
- (void)setRightItems:(id)arg1;

@end
