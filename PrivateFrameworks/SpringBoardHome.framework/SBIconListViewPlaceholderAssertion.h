
@interface SBIconListViewPlaceholderAssertion : NSObject <BSDescriptionProviding, SBIconListViewPlaceholderPositioning> {
    unsigned long long  _gridCellIndex;
    unsigned long long  _gridSizeClass;
    bool  _invalidated;
    SBIconListView * _listView;
    unsigned long long  _options;
    SBPlaceholderIcon * _placeholderIcon;
    SBIcon * _positioningRelativeIcon;
    long long  _positioningType;
    NSString * _reason;
    SBIcon * _representedIcon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long effectiveGridCellIndex;
@property (nonatomic, readonly) unsigned long long folderMutationOptions;
@property (nonatomic) unsigned long long gridCellIndex;
@property (nonatomic, readonly) unsigned long long gridSizeClass;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly) unsigned long long listMutationOptions;
@property (nonatomic, readonly) SBIconListView *listView;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) SBPlaceholderIcon *placeholderIcon;
@property (nonatomic, retain) SBIcon *positioningRelativeIcon;
@property (nonatomic) long long positioningType;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly) SBIcon *representedIcon;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didChangePlaceholderPosition;
- (unsigned long long)effectiveGridCellIndex;
- (unsigned long long)folderMutationOptions;
- (unsigned long long)gridCellIndex;
- (unsigned long long)gridSizeClass;
- (id)initWithGridCellIndex:(unsigned long long)arg1 gridSizeClass:(unsigned long long)arg2 reason:(id)arg3 options:(unsigned long long)arg4 listView:(id)arg5;
- (id)initWithGridCellIndex:(unsigned long long)arg1 representedIcon:(id)arg2 reason:(id)arg3 options:(unsigned long long)arg4 listView:(id)arg5;
- (void)invalidate;
- (bool)isInvalidated;
- (unsigned long long)listMutationOptions;
- (id)listView;
- (unsigned long long)options;
- (void)placeAboveIcon:(id)arg1;
- (void)placeAfterIcon:(id)arg1;
- (void)placeBeforeIcon:(id)arg1;
- (void)placeBelowIcon:(id)arg1;
- (id)placeholderIcon;
- (id)positioningRelativeIcon;
- (long long)positioningType;
- (id)reason;
- (id)representedIcon;
- (void)setGridCellIndex:(unsigned long long)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPositioningRelativeIcon:(id)arg1;
- (void)setPositioningType:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)swapWithIcon:(id)arg1;

@end
