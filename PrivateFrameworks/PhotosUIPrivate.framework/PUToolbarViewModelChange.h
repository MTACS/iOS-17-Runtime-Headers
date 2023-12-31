
@interface PUToolbarViewModelChange : PUViewModelChange {
    bool  _accessoryViewChanged;
    bool  _accessoryViewMaximumHeightChanged;
    bool  _accessoryViewTopOutsetChanged;
    bool  _maximumHeightChanged;
    bool  _toolbarItemsChanged;
}

@property (setter=_setAccessoryViewChanged:, nonatomic) bool accessoryViewChanged;
@property (setter=_setAccessoryViewMaximumHeightChanged:, nonatomic) bool accessoryViewMaximumHeightChanged;
@property (setter=_setAccessoryViewTopOutsetChanged:, nonatomic) bool accessoryViewTopOutsetChanged;
@property (setter=_setMaximumHeightChanged:, nonatomic) bool maximumHeightChanged;
@property (setter=_setToolbarItemsChanged:, nonatomic) bool toolbarItemsChanged;

- (void)_setAccessoryViewChanged:(bool)arg1;
- (void)_setAccessoryViewMaximumHeightChanged:(bool)arg1;
- (void)_setAccessoryViewTopOutsetChanged:(bool)arg1;
- (void)_setMaximumHeightChanged:(bool)arg1;
- (void)_setToolbarItemsChanged:(bool)arg1;
- (bool)accessoryViewChanged;
- (bool)accessoryViewMaximumHeightChanged;
- (bool)accessoryViewTopOutsetChanged;
- (bool)hasChanges;
- (bool)maximumHeightChanged;
- (bool)toolbarItemsChanged;

@end
