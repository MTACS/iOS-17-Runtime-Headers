
@interface SFUnifiedBarItem : NSObject {
    long long  _activeAnimationCount;
    bool  _enabled;
    bool  _hidden;
    bool  _isPlaceholder;
    bool  _pinned;
    SFUnifiedBarItemView * _reusablePreviewView;
    SFUnifiedBarItemView * _reusableView;
    unsigned long long  _spacingOptions;
    NSString * _viewReuseIdentifier;
}

@property (nonatomic) long long activeAnimationCount;
@property (getter=isDragging, nonatomic, readonly) bool dragging;
@property (getter=isDropping, nonatomic, readonly) bool dropping;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) bool isPlaceholder;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic, retain) SFUnifiedBarItemView *reusablePreviewView;
@property (nonatomic, retain) SFUnifiedBarItemView *reusableView;
@property (nonatomic, readonly) SFUnifiedBarItem *secondaryItem;
@property (nonatomic) unsigned long long spacingOptions;
@property (nonatomic, readonly) SFUnifiedBarItemView *view;
@property (nonatomic, copy) NSString *viewReuseIdentifier;

- (void).cxx_destruct;
- (long long)activeAnimationCount;
- (void)configureItemView:(id)arg1 isPreview:(bool)arg2;
- (bool)isDragging;
- (bool)isDropping;
- (bool)isEnabled;
- (bool)isHidden;
- (bool)isPinned;
- (bool)isPlaceholder;
- (id)menuElementRepresentationWithSelectionHandler:(id /* block */)arg1;
- (id)reusablePreviewView;
- (id)reusableView;
- (id)secondaryItem;
- (void)setActiveAnimationCount:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setPinned:(bool)arg1;
- (void)setReusablePreviewView:(id)arg1;
- (void)setReusableView:(id)arg1;
- (void)setSpacingOptions:(unsigned long long)arg1;
- (void)setViewReuseIdentifier:(id)arg1;
- (unsigned long long)spacingOptions;
- (id)view;
- (id)viewReuseIdentifier;

@end
