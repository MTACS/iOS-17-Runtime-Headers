
@interface AAUINavigationItemSpinnerController : NSObject <AAUISpinnerController> {
    bool  _hidesBackButton;
    NSArray * _leftBarItems;
    UINavigationItem * _navigationItem;
    NSArray * _rightBarItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationItem *navigationItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithNavigationItem:(id)arg1;
- (id)navigationItem;
- (void)setNavigationItem:(id)arg1;
- (void)startSpinning;
- (void)stopSpinning;

@end
