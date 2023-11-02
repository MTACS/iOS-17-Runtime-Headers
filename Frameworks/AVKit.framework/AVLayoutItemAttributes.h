
@interface AVLayoutItemAttributes : NSObject <NSCopying> {
    NSString * _accessibilityIdentifier;
    bool  _canOnlyAppearInControlOverflowMenu;
    bool  _canOverflowToAuxiliaryMenu;
    bool  _canSubstituteOtherAttributes;
    bool  _collapsed;
    AVLayoutItemAttributes * _displayPartnerAttributes;
    unsigned long long  _displayPriority;
    bool  _hasFlexibleContentSize;
    bool  _included;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    AVLayoutItemAttributes * _nextAttributesInLayoutOrder;
    AVLayoutItemAttributes * _nextAttributesInPriorityOrder;
    bool  _prefersSecondaryMaterialOverlay;
    double  _trailingInterItemSpace;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic) bool canOnlyAppearInControlOverflowMenu;
@property (nonatomic) bool canOverflowToAuxiliaryMenu;
@property (nonatomic) bool canSubstituteOtherAttributes;
@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedOrExcluded, nonatomic, readonly) bool collapsedOrExcluded;
@property AVLayoutItemAttributes *displayPartnerAttributes;
@property (nonatomic) unsigned long long displayPriority;
@property (nonatomic) bool hasFlexibleContentSize;
@property (getter=isIncluded, nonatomic) bool included;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumSize;
@property (nonatomic, retain) AVLayoutItemAttributes *nextAttributesInLayoutOrder;
@property (nonatomic) AVLayoutItemAttributes *nextAttributesInPriorityOrder;
@property (nonatomic) bool prefersSecondaryMaterialOverlay;
@property (nonatomic) double trailingInterItemSpace;
@property (nonatomic, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (bool)canOnlyAppearInControlOverflowMenu;
- (bool)canOverflowToAuxiliaryMenu;
- (bool)canSubstituteOtherAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)displayPartnerAttributes;
- (unsigned long long)displayPriority;
- (bool)hasFlexibleContentSize;
- (unsigned long long)hash;
- (id)init;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isEqual:(id)arg1;
- (bool)isIncluded;
- (struct CGSize { double x1; double x2; })minimumSize;
- (id)nextAttributesInLayoutOrder;
- (id)nextAttributesInPriorityOrder;
- (bool)prefersSecondaryMaterialOverlay;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setCanOnlyAppearInControlOverflowMenu:(bool)arg1;
- (void)setCanOverflowToAuxiliaryMenu:(bool)arg1;
- (void)setCanSubstituteOtherAttributes:(bool)arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setDisplayPartnerAttributes:(id)arg1;
- (void)setDisplayPriority:(unsigned long long)arg1;
- (void)setHasFlexibleContentSize:(bool)arg1;
- (void)setIncluded:(bool)arg1;
- (void)setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNextAttributesInLayoutOrder:(id)arg1;
- (void)setNextAttributesInPriorityOrder:(id)arg1;
- (void)setPrefersSecondaryMaterialOverlay:(bool)arg1;
- (void)setTrailingInterItemSpace:(double)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (double)trailingInterItemSpace;
- (id)uniqueIdentifier;

@end
