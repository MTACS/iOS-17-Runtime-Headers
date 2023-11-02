
@interface CCUIToggleModule : NSObject <CCUIContentModule> {
    CCUIContentModuleContext * _contentModuleContext;
    CCUIToggleViewController * _contentViewController;
    CCUICAPackageDescription * _glyphPackageDescription;
}

@property (nonatomic, readonly) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (nonatomic, retain) CCUIContentModuleContext *contentModuleContext;
@property (nonatomic, readonly) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIImageView *glyphImageView;
@property (nonatomic, readonly, copy) CCUICAPackageDescription *glyphPackageDescription;
@property (nonatomic, readonly) double glyphScale;
@property (nonatomic, readonly, copy) NSString *glyphState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) UIImage *iconGlyph;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly, copy) UIColor *selectedColor;
@property (nonatomic, readonly, copy) UIImage *selectedIconGlyph;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentModuleContext;
- (id)contentViewControllerForContext:(id)arg1;
- (id)glyphImageView;
- (id)glyphPackage;
- (id)glyphPackageDescription;
- (double)glyphScale;
- (id)glyphState;
- (id)iconGlyph;
- (bool)isSelected;
- (void)reconfigureView;
- (void)refreshState;
- (void)refreshStateAnimated:(bool)arg1;
- (id)selectedColor;
- (id)selectedIconGlyph;
- (void)setContentModuleContext:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
