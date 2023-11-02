
@interface SBFloatyFolderController : SBFolderController

@property (nonatomic) unsigned long long backgroundEffect;

+ (Class)_contentViewClass;
+ (Class)configurationClass;
+ (id)iconLocation;

- (unsigned long long)backgroundEffect;
- (id)floatyFolderView;
- (void)folderView:(id)arg1 didBeginEditingTitle:(id)arg2;
- (void)folderView:(id)arg1 didEndEditingTitle:(id)arg2;
- (bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (bool)isPresentingIconLocation:(id)arg1;
- (id)presentedIconLocations;
- (void)setBackgroundEffect:(unsigned long long)arg1;

@end
