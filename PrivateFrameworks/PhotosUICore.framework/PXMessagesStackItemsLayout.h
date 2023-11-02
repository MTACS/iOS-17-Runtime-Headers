
@interface PXMessagesStackItemsLayout : PXGItemsLayout <PXGItemsGeometry> {
    unsigned char  _accessoryMediaKind;
    unsigned char  _accessoryPresentationType;
    unsigned short  _accessorySpriteMediaVersion;
    unsigned long long  _archSide;
    struct { double x1; } * _decorationInfoBySpriteIndex;
    unsigned long long  _decorationInfoBySpriteIndexSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _desiredLayoutRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _desiredVisibleRect;
    long long  _firstTrailingHiddenItemWithTapback;
    bool  _higherPageDirectionTolerance;
    bool  _isSettling;
    PXMessagesStackItemsLayoutHelper * _layoutHelper;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _leadingItemsRange;
    double  _leftEdgeInternalHorizontalAlignment;
    unsigned char  _mediaKind;
    double  _normalizedContentInsets;
    double  _normalizedPageWidth;
    NSArray * _normalizedStackHorizontalOffsets;
    double  _normalizedStackSizeTransform;
    double  _normalizedStackVerticalOffset;
    double  _pageFocus;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _preItemLoadingFlags;
    unsigned char  _presentationType;
    <PXMessagesStackItemsLayoutPrimaryItemDelegate> * _primaryItemDelegate;
    unsigned long long  _primaryItemIndex;
    double  _rightEdgeInternalHorizontalAlignment;
    double  _rotationAngle;
    bool  _scrollToBeginning;
    long long  _secondTrailingHiddenItemWithTapback;
    bool  _signalDelegateForPrimaryItemChange;
    unsigned long long  _stackedItemsCount;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _trailingHiddenItemsRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _trailingItemsRange;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic) unsigned char accessoryMediaKind;
@property (nonatomic) unsigned char accessoryPresentationType;
@property (nonatomic) <PXMessagesStackItemsLayoutDelegate> *delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } desiredLayoutRect;
@property (nonatomic, readonly) double horizontalContentMargin;
@property (nonatomic) bool isSettling;
@property (nonatomic) double leftEdgeInternalHorizontalAlignment;
@property (nonatomic) unsigned char mediaKind;
@property (nonatomic) double normalizedContentInsets;
@property (nonatomic) double normalizedPageWidth;
@property (nonatomic, copy) NSArray *normalizedStackHorizontalOffsets;
@property (nonatomic) double normalizedStackSizeTransform;
@property (nonatomic) double normalizedStackVerticalOffset;
@property (nonatomic, readonly) long long numberOfPages;
@property (nonatomic) unsigned char presentationType;
@property (nonatomic) <PXMessagesStackItemsLayoutPrimaryItemDelegate> *primaryItemDelegate;
@property (nonatomic, readonly) double primaryItemFocus;
@property (nonatomic, readonly) long long primaryItemIndex;
@property (nonatomic) double rightEdgeInternalHorizontalAlignment;
@property (nonatomic) double rotationAngle;
@property (nonatomic) unsigned long long stackedItemsCount;

+ (id)_sharedTemplateLayoutHelper;

- (void).cxx_destruct;
- (void)_clearLayoutProperties;
- (void)_getItemsForXOffset:(double)arg1 leadingItems:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 primaryItemIndex:(unsigned long long*)arg3 trailingItems:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 trailingHiddenItems:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5 pageFocus:(double*)arg6;
- (void)_invalidateContentSize;
- (void)_invalidateLayoutHelper;
- (void)_invalidateSprites;
- (void)_invalidateVisibleRect;
- (void)_signalDelegatePostUpdate;
- (void)_syncPropertiesToLayoutHelper:(id)arg1;
- (void)_updateContentSize;
- (void)_updateLayoutHelper;
- (void)_updateLayoutProperties;
- (void)_updateSprites;
- (void)_updateVisibleRect;
- (void)accessoryItemsDidChange;
- (unsigned char)accessoryMediaKind;
- (unsigned char)accessoryPresentationType;
- (double)closestPageOffsetForHorizontalOffset:(double)arg1;
- (void)contentSizeDidChange;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })desiredLayoutRect;
- (void)didUpdate;
- (void)displayScaleDidChange;
- (bool)getHorizontalOffsetForObjectReference:(id)arg1 outOffset:(double*)arg2;
- (double)horizontalContentMargin;
- (double)horizontalContentMarginForSize:(struct CGSize { double x1; double x2; })arg1 normalizedVerticalContentInsets:(double)arg2;
- (id)init;
- (bool)isSettling;
- (long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2;
- (id)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2;
- (id)itemsGeometry;
- (id)itemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inLayout:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemsToLoad;
- (double)leftEdgeInternalHorizontalAlignment;
- (void)loadedItemsDidChange;
- (unsigned char)mediaKind;
- (double)normalizedContentInsets;
- (double)normalizedPageWidth;
- (id)normalizedStackHorizontalOffsets;
- (double)normalizedStackSizeTransform;
- (double)normalizedStackVerticalOffset;
- (void)numberOfAccessoryItemsDidChange;
- (long long)numberOfPages;
- (double)overlayAlphaForSpriteIndex:(unsigned int)arg1;
- (double)pageOffsetGreaterThanOffset:(double)arg1;
- (double)pageOffsetLessThanOffset:(double)arg1;
- (unsigned char)presentationType;
- (id)primaryItemDelegate;
- (double)primaryItemFocus;
- (long long)primaryItemIndex;
- (void)referenceSizeDidChange;
- (void)reloadAccessoryItems;
- (double)rightEdgeInternalHorizontalAlignment;
- (double)rotationAngle;
- (void)scrollToBeginning;
- (long long)scrollableAxis;
- (double)selectionOverlayAlphaForSpriteIndex:(unsigned int)arg1;
- (void)setAccessoryMediaKind:(unsigned char)arg1;
- (void)setAccessoryPresentationType:(unsigned char)arg1;
- (void)setDesiredLayoutRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsSettling:(bool)arg1;
- (void)setLeftEdgeInternalHorizontalAlignment:(double)arg1;
- (void)setMediaKind:(unsigned char)arg1;
- (void)setNormalizedContentInsets:(double)arg1;
- (void)setNormalizedPageWidth:(double)arg1;
- (void)setNormalizedStackHorizontalOffsets:(id)arg1;
- (void)setNormalizedStackSizeTransform:(double)arg1;
- (void)setNormalizedStackVerticalOffset:(double)arg1;
- (void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(id /* block */)arg3;
- (void)setPresentationType:(unsigned char)arg1;
- (void)setPrimaryItemDelegate:(id)arg1;
- (void)setRightEdgeInternalHorizontalAlignment:(double)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setStackedItemsCount:(unsigned long long)arg1;
- (bool)shouldDecorateUndefinedMediaKind;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (unsigned long long)stackedItemsCount;
- (struct { double x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })tapbackConfigurationForProposedConfiguration:(struct { double x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })arg1 spriteIndex:(unsigned int)arg2;
- (void)update;
- (void)userInterfaceDirectionDidChange;
- (void)visibleRectDidChange;
- (void)willUpdate;

@end
