
@interface WFIconComposeViewController : UIViewController <UINavigationControllerDelegate, WFColorPickerDelegate, WFGlyphPickerDelegate> {
    UIView * _bottomSeparator;
    WFColorPicker * _colorPicker;
    WFGlyphPicker * _glyphPicker;
    WFIconComposePreviewView * _iconView;
    UIView * _topSeperator;
    WFWorkflow * _workflow;
}

@property (nonatomic) UIView *bottomSeparator;
@property (nonatomic) WFColorPicker *colorPicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) WFGlyphPicker *glyphPicker;
@property (readonly) unsigned long long hash;
@property (nonatomic) WFIconComposePreviewView *iconView;
@property (readonly) Class superclass;
@property (nonatomic) UIView *topSeperator;
@property (nonatomic, retain) WFWorkflow *workflow;

- (void).cxx_destruct;
- (id)bottomSeparator;
- (id)colorPicker;
- (void)colorPicker:(id)arg1 didSelectColor:(id)arg2;
- (id)glyphPicker;
- (void)glyphPicker:(id)arg1 didSelectGlyphWithCharacter:(unsigned short)arg2;
- (id)iconView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)pickedSegment:(id)arg1;
- (void)saveIcon:(id)arg1;
- (void)setBottomSeparator:(id)arg1;
- (void)setColorPicker:(id)arg1;
- (void)setGlyphPicker:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTopSeperator:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (id)topSeperator;
- (void)updateAccessibilityValue;
- (id)workflow;

@end
