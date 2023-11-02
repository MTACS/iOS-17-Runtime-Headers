
@interface SBHWidgetStackDescriptor : NSObject <SBHAddWidgetSheetGalleryItem> {
    NSArray * _extraLargeStackDescriptors;
    NSArray * _largeStackDescriptors;
    NSArray * _mediumStackDescriptors;
    NSString * _sbh_galleryItemIdentifier;
    NSArray * _smallStackDescriptors;
}

@property (nonatomic, readonly, copy) UIColor *accentColor;
@property (nonatomic, readonly, copy) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *extraLargeStackDescriptors;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *largeStackDescriptors;
@property (nonatomic, retain) NSArray *mediumStackDescriptors;
@property (nonatomic, readonly, copy) UIColor *mostInterestingColor;
@property (nonatomic, readonly, copy) NSString *sbh_appName;
@property (nonatomic, readonly) bool sbh_canBeAddedToStack;
@property (nonatomic, readonly, copy) NSString *sbh_galleryItemIdentifier;
@property (nonatomic, readonly) unsigned long long sbh_supportedSizeClasses;
@property (nonatomic, readonly) bool sbh_supportsRemovableBackground;
@property (nonatomic, readonly) bool sbh_supportsRemovableBackgroundOrAccessoryFamilies;
@property (nonatomic, readonly, copy) NSString *sbh_widgetDescription;
@property (nonatomic, readonly, copy) NSString *sbh_widgetName;
@property (nonatomic, retain) NSArray *smallStackDescriptors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accentColor;
- (id)backgroundColor;
- (id)descriptorsForSizeClass:(long long)arg1;
- (id)extraLargeStackDescriptors;
- (id)initWithSmallStackDescriptors:(id)arg1 mediumStackDescriptors:(id)arg2 largeStackDescriptors:(id)arg3 extraLargeStackDescriptors:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)largeStackDescriptors;
- (id)mediumStackDescriptors;
- (id)mostInterestingColor;
- (id)sbh_appName;
- (bool)sbh_canBeAddedToStack;
- (unsigned long long)sbh_disfavoredSizeClassesForAddWidgetSheetLocation:(unsigned long long)arg1;
- (unsigned long long)sbh_favoredSizeClassesForAddWidgetSheetLocation:(unsigned long long)arg1;
- (id)sbh_galleryItemIdentifier;
- (bool)sbh_isLinkedOnOrAfter:(unsigned long long)arg1;
- (unsigned long long)sbh_supportedSizeClasses;
- (bool)sbh_supportsRemovableBackground;
- (bool)sbh_supportsRemovableBackgroundOrAccessoryFamilies;
- (id)sbh_widgetDescription;
- (id)sbh_widgetName;
- (void)setExtraLargeStackDescriptors:(id)arg1;
- (void)setLargeStackDescriptors:(id)arg1;
- (void)setMediumStackDescriptors:(id)arg1;
- (void)setSmallStackDescriptors:(id)arg1;
- (id)smallStackDescriptors;

@end
