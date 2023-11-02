
@interface CNContactContentNavigationItemUpdaterResult : NSObject {
    bool  _enableCancelShortcut;
    bool  _enableEditShortcut;
    bool  _enableSaveShortcut;
}

@property (nonatomic) bool enableCancelShortcut;
@property (nonatomic) bool enableEditShortcut;
@property (nonatomic) bool enableSaveShortcut;

- (bool)enableCancelShortcut;
- (bool)enableEditShortcut;
- (bool)enableSaveShortcut;
- (void)setEnableCancelShortcut:(bool)arg1;
- (void)setEnableEditShortcut:(bool)arg1;
- (void)setEnableSaveShortcut:(bool)arg1;

@end
