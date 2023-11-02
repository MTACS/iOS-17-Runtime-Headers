
@interface ICTodoButton : UIButton <ICAccessibilityRotorSearchElement, ICSupplementalView> {
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultImageSize;
    bool  _done;
    UIColor * _highlightColor;
    ICTrackedParagraph * _trackedParagraph;
    bool  _trackedParagraphIsRTL;
    bool  _useConstraintBasedRendering;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double x1; double x2; } defaultImageSize;
@property (readonly, copy) NSString *description;
@property (getter=isDone, nonatomic) bool done;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIColor *highlightColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedRotorTypes;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRangeInNote;
@property (nonatomic) ICTrackedParagraph *trackedParagraph;
@property (nonatomic) bool trackedParagraphIsRTL;
@property (nonatomic) bool useConstraintBasedRendering;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (struct CGSize { double x1; double x2; })defaultImageSize;
+ (struct CGSize { double x1; double x2; })defaultSize;

- (void).cxx_destruct;
- (id)_icaxParentUITextView;
- (id)debugDescription;
- (struct CGSize { double x1; double x2; })defaultImageSize;
- (id)highlightColor;
- (id)icaxCorrespondingParagraphText;
- (id)imageForChecked:(bool)arg1 withHighlight:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithDragDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDone;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setDefaultImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDone:(bool)arg1;
- (void)setDone:(bool)arg1 animated:(bool)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 leftToRight:(bool)arg2;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setTrackedParagraph:(id)arg1;
- (void)setTrackedParagraphIsRTL:(bool)arg1;
- (void)setUseConstraintBasedRendering:(bool)arg1;
- (id)trackedParagraph;
- (void)trackedParagraphDidChange;
- (bool)trackedParagraphIsRTL;
- (void)updateImagesAnimated:(bool)arg1;
- (void)updateTintColor;
- (bool)useConstraintBasedRendering;
- (void)wasPressed;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (bool)_accessibilityShouldUseViewHierarchyForFindingScrollParent;
- (bool)_accessibilitySupportsActivateAction;
- (bool)_icaxBeginEditingAtEndOfCorrespondingParagraph;
- (id)_icaxNote;
- (id)_icaxParentTextView;
- (bool)accessibilityActivate;
- (id)accessibilityContainer;
- (id)accessibilityCustomActions;
- (id)accessibilityCustomRotors;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityLabel;
- (id)accessibilityUserInputLabels;
- (id)icaxBaseAccessibilityLabel;
- (id)icaxDragSourceName;
- (bool)isAccessibilityElement;
- (id)supportedRotorTypes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeInNote;
- (id)viewIdentifier;

@end
