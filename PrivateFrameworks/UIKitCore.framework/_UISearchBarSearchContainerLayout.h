
@interface _UISearchBarSearchContainerLayout : _UISearchBarLayoutBase {
    double  _additionalPaddingForCancelButtonAtLeadingEdge;
    double  _additionalPaddingForSearchFieldAtLeadingEdge;
    UIView * _cancelButton;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cancelButtonLayoutFrame;
    <_UISearchBarContainerSublayoutDelegate> * _delegate;
    id /* block */  _delegateSearchFieldFrameForProposedFrame;
    UIView * _deleteButton;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _deleteButtonLayoutFrame;
    double  _floatingSearchIconAlpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _floatingSearchIconLayoutFrame;
    UIImageView * _floatingSearchIconView;
    id /* block */  _layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback;
    UIView * _leftButton;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _leftButtonLayoutFrame;
    double  _mainContentAlpha;
    double  _overrideActiveWidth;
    double  _overrideInactiveWidth;
    long long  _representedLayoutState;
    double  _searchBarFieldHeight;
    double  _searchBarReadableWidth;
    struct { 
        unsigned int hasCancelButton : 1; 
        unsigned int hasDeleteButton : 1; 
        unsigned int hasLeftButton : 1; 
        unsigned int isHostedInlineByNavigationBar : 1; 
        unsigned int isTextFieldManagedInNSToolbar : 1; 
        unsigned int drawsSearchIconOnly : 1; 
        unsigned int allowSearchFieldShrinkage : 1; 
        unsigned int searchFieldUsesCustomBackgroundImage : 1; 
        unsigned int searchFieldEffectivelySupportsDynamicType : 1; 
        unsigned int searchFieldRespectsReadableWidth : 1; 
        unsigned int searchFieldWidthIsReduced : 1; 
    }  _searchContainerLayoutFlags;
    UISearchBarTextField * _searchField;
    double  _searchFieldBackgroundFadeAlpha;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _searchFieldBackgroundPositionAdjustment;
    double  _searchFieldForegroundFadeAlpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _searchFieldLayoutFrame;
    UIBarButtonItem * _searchIconBarButtonItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleCancelButtonSearchFieldLayoutFrame;
}

@property (nonatomic) double additionalPaddingForCancelButtonAtLeadingEdge;
@property (nonatomic) double additionalPaddingForSearchFieldAtLeadingEdge;
@property (nonatomic) bool allowSearchFieldShrinkage;
@property (nonatomic, retain) UIView *cancelButton;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cancelButtonLayoutFrame;
@property (nonatomic) <_UISearchBarContainerSublayoutDelegate> *delegate;
@property (nonatomic, copy) id /* block */ delegateSearchFieldFrameForProposedFrame;
@property (nonatomic, retain) UIView *deleteButton;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } deleteButtonLayoutFrame;
@property (nonatomic) bool drawsSearchIconOnly;
@property (nonatomic, readonly) double floatingSearchIconAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } floatingSearchIconLayoutFrame;
@property (nonatomic, retain) UIImageView *floatingSearchIconView;
@property (nonatomic) bool hasCancelButton;
@property (nonatomic) bool hasDeleteButton;
@property (nonatomic) bool hasLeftButton;
@property (getter=isHostedInlineByNavigationBar, nonatomic) bool hostedInlineByNavigationBar;
@property (nonatomic, copy) id /* block */ layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback;
@property (nonatomic, retain) UIView *leftButton;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } leftButtonLayoutFrame;
@property (nonatomic, readonly) double mainContentAlpha;
@property (nonatomic, readonly) double naturalContainerHeight;
@property (nonatomic, readonly) double naturalSearchFieldHeight;
@property (nonatomic) double overrideActiveWidth;
@property (nonatomic) double overrideInactiveWidth;
@property (nonatomic, readonly) double prescribedWidth;
@property (nonatomic) long long representedLayoutState;
@property (nonatomic) double searchBarFieldHeight;
@property (nonatomic) double searchBarReadableWidth;
@property (nonatomic, retain) UISearchBarTextField *searchField;
@property (nonatomic) struct UIOffset { double x1; double x2; } searchFieldBackgroundPositionAdjustment;
@property (nonatomic) bool searchFieldEffectivelySupportsDynamicType;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } searchFieldLayoutFrame;
@property (nonatomic) bool searchFieldRespectsReadableWidth;
@property (nonatomic) bool searchFieldUsesCustomBackgroundImage;
@property (nonatomic, readonly) bool searchFieldWidthIsReduced;
@property (nonatomic, retain) UIBarButtonItem *searchIconBarButtonItem;
@property (getter=isTextFieldManagedInNSToolbar, nonatomic) bool textFieldManagedInNSToolbar;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleCancelButtonSearchFieldLayoutFrame;

- (void).cxx_destruct;
- (double)_effectiveActiveWidth;
- (double)_effectiveInactiveWidth;
- (double)additionalPaddingForCancelButtonAtLeadingEdge;
- (double)additionalPaddingForSearchFieldAtLeadingEdge;
- (bool)allowSearchFieldShrinkage;
- (void)applyLayout;
- (id)cancelButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cancelButtonLayoutFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id /* block */)delegateSearchFieldFrameForProposedFrame;
- (id)deleteButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })deleteButtonLayoutFrame;
- (id)description;
- (bool)drawsSearchIconOnly;
- (double)floatingSearchIconAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })floatingSearchIconLayoutFrame;
- (id)floatingSearchIconView;
- (bool)hasCancelButton;
- (bool)hasDeleteButton;
- (bool)hasLeftButton;
- (bool)isHostedInlineByNavigationBar;
- (bool)isTextFieldManagedInNSToolbar;
- (id /* block */)layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback;
- (id)leftButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftButtonLayoutFrame;
- (double)mainContentAlpha;
- (double)naturalContainerHeight;
- (double)naturalSearchFieldHeight;
- (double)overrideActiveWidth;
- (double)overrideInactiveWidth;
- (double)prescribedWidth;
- (long long)representedLayoutState;
- (double)searchBarFieldHeight;
- (double)searchBarReadableWidth;
- (id)searchField;
- (struct UIOffset { double x1; double x2; })searchFieldBackgroundPositionAdjustment;
- (bool)searchFieldEffectivelySupportsDynamicType;
- (double)searchFieldHeightUpdatingShrinkageAndFadeAlphas;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })searchFieldLayoutFrame;
- (bool)searchFieldRespectsReadableWidth;
- (bool)searchFieldUsesCustomBackgroundImage;
- (bool)searchFieldWidthIsReduced;
- (id)searchIconBarButtonItem;
- (void)sendWillLayoutSubviewsForSearchFieldContainerView:(id)arg1;
- (void)setAdditionalPaddingForCancelButtonAtLeadingEdge:(double)arg1;
- (void)setAdditionalPaddingForSearchFieldAtLeadingEdge:(double)arg1;
- (void)setAllowSearchFieldShrinkage:(bool)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateSearchFieldFrameForProposedFrame:(id /* block */)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setDrawsSearchIconOnly:(bool)arg1;
- (void)setFloatingSearchIconView:(id)arg1;
- (void)setHasCancelButton:(bool)arg1;
- (void)setHasDeleteButton:(bool)arg1;
- (void)setHasLeftButton:(bool)arg1;
- (void)setHostedInlineByNavigationBar:(bool)arg1;
- (void)setLayoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback:(id /* block */)arg1;
- (void)setLeftButton:(id)arg1;
- (void)setOverrideActiveWidth:(double)arg1;
- (void)setOverrideInactiveWidth:(double)arg1;
- (void)setRepresentedLayoutState:(long long)arg1;
- (void)setSearchBarFieldHeight:(double)arg1;
- (void)setSearchBarReadableWidth:(double)arg1;
- (void)setSearchField:(id)arg1;
- (void)setSearchFieldBackgroundPositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setSearchFieldEffectivelySupportsDynamicType:(bool)arg1;
- (void)setSearchFieldRespectsReadableWidth:(bool)arg1;
- (void)setSearchFieldUsesCustomBackgroundImage:(bool)arg1;
- (void)setSearchIconBarButtonItem:(id)arg1;
- (void)setTextFieldManagedInNSToolbar:(bool)arg1;
- (void)updateLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleCancelButtonSearchFieldLayoutFrame;

@end
