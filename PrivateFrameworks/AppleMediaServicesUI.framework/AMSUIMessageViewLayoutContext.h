
@interface AMSUIMessageViewLayoutContext : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _accessorySecondaryViewFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _accessoryViewFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSMutableArray * _footerButtonFrames;
    NSMutableArray * _footerButtonFramesPreFlatten;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _footerContainerViewFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageViewFrame;
    bool  _isDirty;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastFittingSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastMessageViewFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _mainContentFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _maskViewFrame;
    AMSUIMessageView * _messageView;
    NSMutableArray * _separatorViewFrames;
    struct CGSize { 
        double width; 
        double height; 
    }  _textViewContentHuggingSize;
    UIBezierPath * _textViewExclusionPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textViewFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessorySecondaryViewFrame;
@property (nonatomic, readonly) double accessorySpacing;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessoryViewFrame;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentLayoutMargins;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) NSMutableArray *footerButtonFrames;
@property (nonatomic, retain) NSMutableArray *footerButtonFramesPreFlatten;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } footerContainerViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageViewFrame;
@property (nonatomic) bool isDirty;
@property (nonatomic) struct CGSize { double x1; double x2; } lastFittingSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastMessageViewFrame;
@property (nonatomic) struct CGSize { double x1; double x2; } lastSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } mainContentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskViewFrame;
@property (nonatomic) AMSUIMessageView *messageView;
@property (nonatomic, retain) NSMutableArray *separatorViewFrames;
@property (nonatomic, readonly) bool shouldUseStackedLayout;
@property (nonatomic) struct CGSize { double x1; double x2; } textViewContentHuggingSize;
@property (nonatomic, retain) UIBezierPath *textViewExclusionPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textViewFrame;

- (void).cxx_destruct;
- (double)_bannerMaxTextWidth;
- (double)_bottomFooterSpacing;
- (void)_calculateFooterButtonFrames;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_effectiveTextViewFrame;
- (double)_footerButtonInterSpacing;
- (double)_footerButtonSpacing;
- (double)_footerMinimumHeight;
- (double)_imageLength;
- (double)_imageToLabelSpacing;
- (double)_interitemSpacing;
- (bool)_isAccessoryViewLeading;
- (bool)_isFooterButtonPartOfContentFrame;
- (bool)_isIconImageTopAligned;
- (bool)_isSymbolImage;
- (bool)_isTextOnlyBanner;
- (struct CGSize { double x1; double x2; })_makeImageViewSize;
- (double)_scaledUIValueForValue:(double)arg1;
- (bool)_shouldOffsetFooterButtonFromMainContentView;
- (bool)_shouldTextViewTextFillUnderCloseButton;
- (void)_updateWithRootFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessorySecondaryViewFrame;
- (double)accessorySpacing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessoryViewFrame;
- (void)calculateAccessorySecondaryViewFrame;
- (void)calculateAccessorySecondaryViewSize;
- (void)calculateAccessoryViewFrame;
- (void)calculateAccessoryViewSize;
- (void)calculateMainContentFrameRootFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)calculateTextViewExclusionFrame;
- (void)calculateTextViewSizeInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 dirty:(bool)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentLayoutMargins;
- (struct CGSize { double x1; double x2; })contentSize;
- (unsigned long long)effectiveImageStyle;
- (id)footerButtonFrames;
- (id)footerButtonFramesPreFlatten;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })footerContainerViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageViewFrame;
- (id)initWithMessageView:(id)arg1;
- (void)invalidate;
- (bool)isDirty;
- (bool)isImageViewHidden;
- (struct CGSize { double x1; double x2; })lastFittingSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastMessageViewFrame;
- (struct CGSize { double x1; double x2; })lastSize;
- (void)layoutSubviewFrames;
- (double)leadingContentTextBaseline;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mainContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskViewFrame;
- (id)messageView;
- (double)separatorThickness;
- (id)separatorViewFrames;
- (void)setAccessorySecondaryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFooterButtonFrames:(id)arg1;
- (void)setFooterButtonFramesPreFlatten:(id)arg1;
- (void)setFooterContainerViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsDirty:(bool)arg1;
- (void)setLastFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLastMessageViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLastSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMainContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaskViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMessageView:(id)arg1;
- (void)setSeparatorViewFrames:(id)arg1;
- (void)setTextViewContentHuggingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextViewExclusionPath:(id)arg1;
- (void)setTextViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldUseStackedLayout;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })textViewContentHuggingSize;
- (id)textViewExclusionPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textViewFrame;
- (double)totalFooterButtonHeight;

@end
