
@interface FBSApplicationUninstallOptions : NSObject {
    bool  _showsArchiveOption;
    bool  _userInitiated;
}

@property (nonatomic) bool showsArchiveOption;
@property (getter=isUserInitiated, nonatomic) bool userInitiated;

+ (id)userInitiated;

- (bool)isUserInitiated;
- (void)setShowsArchiveOption:(bool)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)showsArchiveOption;

@end
