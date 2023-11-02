
@interface SBDodgingTesterView : UIView <SBDodgingItemDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIColor * _color;
    SBDodgingResolverViewController * _controller;
    unsigned long long  _corner;
    NSMutableSet * _ignoringItems;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialMoveCenter;
    SBDodgingItem * _item;
    UIPanGestureRecognizer * _moveGesture;
    NSString * _name;
    NSArray * _otherIdentifiers;
    UITableView * _otherItemsTable;
    struct CGPoint { 
        double x; 
        double y; 
    }  _preferredCenter;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    UIPanGestureRecognizer * _resizeGesture;
    UIView * _resizeView;
    UILabel * _resolvedValuesLabel;
    bool  _stashed;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) SBDodgingResolverViewController *controller;
@property (nonatomic) unsigned long long corner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *ignoringItems;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialMoveCenter;
@property (nonatomic, retain) SBDodgingItem *item;
@property (nonatomic, retain) UIPanGestureRecognizer *moveGesture;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *otherIdentifiers;
@property (nonatomic, retain) UITableView *otherItemsTable;
@property (nonatomic) struct CGPoint { double x1; double x2; } preferredCenter;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, retain) UIPanGestureRecognizer *resizeGesture;
@property (nonatomic, retain) UIView *resizeView;
@property (nonatomic, retain) UILabel *resolvedValuesLabel;
@property (nonatomic) bool stashed;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_handleChangeAnchorGesture:(id)arg1;
- (void)_handleDeleteGesture:(id)arg1;
- (void)_handleMoveGesture:(id)arg1;
- (void)_handleResizeGesture:(id)arg1;
- (void)_updateResolvedValuesLabel;
- (id)color;
- (id)controller;
- (unsigned long long)corner;
- (void)dodgingResolver:(id)arg1 dodgingItemDidChange:(id)arg2;
- (void)dodgingResolver:(id)arg1 dodgingItemDidSettle:(id)arg2;
- (id)dodgingResolver:(id)arg1 preferenceForDodgingItem:(id)arg2;
- (id)ignoringItems;
- (id)initWithName:(id)arg1 color:(id)arg2 controller:(id)arg3;
- (struct CGPoint { double x1; double x2; })initialMoveCenter;
- (id)item;
- (void)layoutSubviews;
- (id)moveGesture;
- (id)name;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)otherIdentifiers;
- (id)otherItemsTable;
- (struct CGPoint { double x1; double x2; })preferredCenter;
- (struct CGSize { double x1; double x2; })preferredSize;
- (id)resizeGesture;
- (id)resizeView;
- (id)resolvedValuesLabel;
- (void)setColor:(id)arg1;
- (void)setController:(id)arg1;
- (void)setCorner:(unsigned long long)arg1;
- (void)setIgnoringItems:(id)arg1;
- (void)setInitialMoveCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setItem:(id)arg1;
- (void)setMoveGesture:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOtherIdentifiers:(id)arg1;
- (void)setOtherItemsTable:(id)arg1;
- (void)setPreferredCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setResizeGesture:(id)arg1;
- (void)setResizeView:(id)arg1;
- (void)setResolvedValuesLabel:(id)arg1;
- (void)setStashed:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)stashed;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titleLabel;

@end
