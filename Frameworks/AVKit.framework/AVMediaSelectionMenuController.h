
@interface AVMediaSelectionMenuController : NSObject {
    NSArray * _audibleOptions;
    UIMenu * _audibleOptionsMenu;
    unsigned long long  _currentAudibleOptionIndex;
    unsigned long long  _currentLegibleOptionIndex;
    <AVMediaSelectionMenuDelegate> * _delegate;
    NSArray * _legibleOptions;
    UIMenu * _legibleOptionsMenu;
}

@property (nonatomic, copy) NSArray *audibleOptions;
@property (nonatomic, readonly) UIMenu *audibleOptionsMenu;
@property (nonatomic) unsigned long long currentAudibleOptionIndex;
@property (nonatomic) unsigned long long currentLegibleOptionIndex;
@property (nonatomic) <AVMediaSelectionMenuDelegate> *delegate;
@property (nonatomic, copy) NSArray *legibleOptions;
@property (nonatomic, readonly) UIMenu *legibleOptionsMenu;

- (void).cxx_destruct;
- (id)_displayNameForMediaSelectionOption:(id)arg1;
- (id)_menuForOptions:(id)arg1 withIdentifier:(id)arg2;
- (void)_updateSelectionStateForMenu:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (id)audibleOptions;
- (id)audibleOptionsMenu;
- (unsigned long long)currentAudibleOptionIndex;
- (unsigned long long)currentLegibleOptionIndex;
- (id)delegate;
- (id)initWithAudibleOptions:(id)arg1 legibleOptions:(id)arg2;
- (id)legibleOptions;
- (id)legibleOptionsMenu;
- (void)setAudibleOptions:(id)arg1;
- (void)setCurrentAudibleOptionIndex:(unsigned long long)arg1;
- (void)setCurrentLegibleOptionIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLegibleOptions:(id)arg1;

@end
