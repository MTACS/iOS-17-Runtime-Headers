
@interface NSObject <ATXScoreLogSerializable, BNPresentableUniquelyIdentifying, CAAnimatableValue, CARenderValue, CKLParsedObject, CRComputeDeviceTypeProviding, INCodableAttributeRelationComparing, INEnumerable, KGPropertyTypeProtocol, MusicKit_SoftLinking_MPAVRoute, MusicKit_SoftLinking_MPArtworkCatalog, MusicKit_SoftLinking_MPArtworkColorAnalysis, MusicKit_SoftLinking_MPCPlayerActionAtQueueEndCommand, MusicKit_SoftLinking_MPCPlayerChangeItemCommand, MusicKit_SoftLinking_MPCPlayerCommandRequest, MusicKit_SoftLinking_MPCPlayerInsertItemsCommand, MusicKit_SoftLinking_MPCPlayerReorderItemsCommand, MusicKit_SoftLinking_MPCPlayerRepeatCommand, MusicKit_SoftLinking_MPCPlayerResetTracklistCommand, MusicKit_SoftLinking_MPCPlayerResponse, MusicKit_SoftLinking_MPCPlayerResponseItem, MusicKit_SoftLinking_MPCPlayerResponseTracklist, MusicKit_SoftLinking_MPCPlayerSeekCommand, MusicKit_SoftLinking_MPCPlayerShuffleCommand, MusicKit_SoftLinking_MPIdentifierSet, MusicKit_SoftLinking_MPModelInnerObjectProviding, MusicKit_SoftLinking_MPNowPlayingInfoAudioFormat, NSObject, NSObjectInitJSExports, PQLResultSetInitializer, PRPosterRoleAttributeJSONEncodable, REDonatedActionIdentifierProviding, SAElementUniquelyIdentifying, SBUISystemApertureElementContextProviding, SwiftUI.PlatformAccessibilityElement, VNComputeDevicePerformanceScoreProviding, VNComputeDeviceTypeProviding, WFNaming, WFTyping, WatchQuickActionHost, _DKProtobufConverting> {
    Class  isa;
}

@property (setter=_setAccessibilityAutomationType:, nonatomic) unsigned long long _accessibilityAutomationType;
@property (nonatomic, readonly) NSString *_atvaccessibilityITMLAccessibilityContent;
@property (setter=_axSetIsWrappedPointer:, nonatomic) bool _axIsWrappedPointer;
@property (setter=_px_setReuseIdentifier:, nonatomic) long long _px_reuseIdentifier;
@property (nonatomic, readonly) UIDescriptionBuilder *_ui_descriptionBuilder;
@property (nonatomic, copy) id /* block */ accessibilityActivateBlock;
@property (nonatomic) struct CGPoint { double x1; double x2; } accessibilityActivationPoint;
@property (nonatomic, copy) id /* block */ accessibilityActivationPointBlock;
@property (nonatomic, copy) NSAttributedString *accessibilityAttributedHint;
@property (nonatomic, copy) id /* block */ accessibilityAttributedHintBlock;
@property (nonatomic, copy) NSAttributedString *accessibilityAttributedLabel;
@property (nonatomic, copy) id /* block */ accessibilityAttributedLabelBlock;
@property (nonatomic, copy) NSArray *accessibilityAttributedUserInputLabels;
@property (nonatomic, copy) id /* block */ accessibilityAttributedUserInputLabelsBlock;
@property (nonatomic, copy) NSAttributedString *accessibilityAttributedValue;
@property (nonatomic, copy) id /* block */ accessibilityAttributedValueBlock;
@property (nonatomic) long long accessibilityContainerType;
@property (nonatomic, copy) id /* block */ accessibilityContainerTypeBlock;
@property (nonatomic, retain) NSArray *accessibilityCustomActions;
@property (nonatomic, copy) id /* block */ accessibilityCustomActionsBlock;
@property (nonatomic, retain) NSArray *accessibilityCustomRotors;
@property (nonatomic, copy) id /* block */ accessibilityCustomRotorsBlock;
@property (nonatomic, copy) id /* block */ accessibilityDecrementBlock;
@property (nonatomic) unsigned long long accessibilityDirectTouchOptions;
@property (nonatomic, retain) NSArray *accessibilityElements;
@property (nonatomic, copy) id /* block */ accessibilityElementsBlock;
@property (nonatomic) bool accessibilityElementsHidden;
@property (nonatomic, copy) id /* block */ accessibilityElementsHiddenBlock;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrame;
@property (nonatomic, copy) id /* block */ accessibilityFrameBlock;
@property (nonatomic, copy) NSArray *accessibilityHeaderElements;
@property (nonatomic, copy) id /* block */ accessibilityHeaderElementsBlock;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) id /* block */ accessibilityHintBlock;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) id /* block */ accessibilityIdentifierBlock;
@property (nonatomic, copy) id /* block */ accessibilityIncrementBlock;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) id /* block */ accessibilityLabelBlock;
@property (nonatomic, retain) NSString *accessibilityLanguage;
@property (nonatomic, copy) id /* block */ accessibilityLanguageBlock;
@property (nonatomic, readonly) NSString *accessibilityLocalizedStringKey;
@property (nonatomic, copy) id /* block */ accessibilityMagicTapBlock;
@property (nonatomic) long long accessibilityNavigationStyle;
@property (nonatomic, copy) id /* block */ accessibilityNavigationStyleBlock;
@property (nonatomic, retain) _TtC7SwiftUI17AccessibilityNode *accessibilityNodeForPlatformElement;
@property (nonatomic, copy) UIBezierPath *accessibilityPath;
@property (nonatomic, copy) id /* block */ accessibilityPathBlock;
@property (nonatomic, copy) id /* block */ accessibilityPerformEscapeBlock;
@property (nonatomic) bool accessibilityRespondsToUserInteraction;
@property (nonatomic, copy) id /* block */ accessibilityRespondsToUserInteractionBlock;
@property (nonatomic, copy) id /* block */ accessibilityShouldGroupAccessibilityChildrenBlock;
@property (nonatomic, copy) id /* block */ accessibilitySwiftUIDefaultActionStoredBlock;
@property (nonatomic, retain) id accessibilitySwiftUIStoredLinkRotor;
@property (nonatomic, retain) NSString *accessibilityTextualContext;
@property (nonatomic, copy) id /* block */ accessibilityTextualContextBlock;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) id /* block */ accessibilityTraitsBlock;
@property (nonatomic, retain) NSArray *accessibilityUserInputLabels;
@property (nonatomic, copy) id /* block */ accessibilityUserInputLabelsBlock;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, copy) id /* block */ accessibilityValueBlock;
@property (nonatomic) bool accessibilityViewIsModal;
@property (nonatomic, copy) id /* block */ accessibilityViewIsModalBlock;
@property (readonly) unsigned long long akToolbarButtonItemType;
@property (readonly, retain) id autoContentAccessingProxy;
@property (nonatomic, retain) NSDictionary *automationCustomProperties;
@property (nonatomic, retain) NSArray *automationElements;
@property (nonatomic, copy) id /* block */ automationElementsBlock;
@property (nonatomic, retain) NSDictionary *automationSystemProperties;
@property (setter=avkit_setWebKitDelegate:, nonatomic) <AVPlayerControllerWebKitDelegate> *avkit_webkitDelegate;
@property (setter=avkit_setWebKitIsScrubbing:, nonatomic) bool avkit_webkitIsScrubbing;
@property (setter=avkit_setWebKitSeekToTime:, nonatomic) double avkit_webkitSeekToTime;
@property (setter=ax_setBuddyDynamicHeightConstraints:, nonatomic, retain) NSMutableArray *ax_buddyDynamicHeightConstraints;
@property (setter=ax_setBuddyObservedTableViews:, nonatomic, retain) NSMutableArray *ax_buddyObservedTableViews;
@property (readonly) Class classForKeyedArchiver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSString *fm_logID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *hf_prettyDescription;
@property (nonatomic, readonly, copy) NSString *hf_prettyExpensiveDescription;
@property (nonatomic, readonly, copy) NSString *hf_prettyFullDescription;
@property (nonatomic) bool isAccessibilityElement;
@property (nonatomic, copy) id /* block */ isAccessibilityElementBlock;
@property (readonly) long long kgPropertyType;
@property (nonatomic, readonly, retain) NSString *logID;
@property (nonatomic, readonly) NSString *mr_formattedDebugDescription;
@property (getter=musicKit_actionAtQueueEndCommand_isAutoPlaySupported, nonatomic, readonly) bool musicKit_actionAtQueueEndCommand_autoPlaySupported;
@property (nonatomic, readonly, copy) NSString *musicKit_artworkDataSourceIdentifier;
@property (nonatomic, readonly, copy) NSString *musicKit_artworkDataSourceShortDescription;
@property (nonatomic, readonly, copy) NSDictionary *musicKit_artworkDictionary;
@property (nonatomic, readonly, copy) NSDictionary *musicKit_artworkTokenParameters;
@property (nonatomic, readonly) NSString *musicKit_avRoute_routeName;
@property (nonatomic, readonly) NSString *musicKit_avRoute_routeUID;
@property (nonatomic, readonly) struct CGColor { }*musicKit_backgroundColor;
@property (nonatomic, readonly, copy) MusicKit_SoftLinking_CatalogID *musicKit_catalogID;
@property (nonatomic, readonly, copy) NSString *musicKit_cloudID;
@property (nonatomic, readonly, copy) MusicKit_SoftLinking_DeviceLocalID *musicKit_deviceLocalID;
@property (nonatomic, readonly) <MusicKit_SoftLinking_MPArtworkColorAnalysis> *musicKit_existingColorAnalysis;
@property (setter=musicKit_setFittingSize:, nonatomic) struct CGSize { double x1; double x2; } musicKit_fittingSize;
@property (nonatomic, readonly) bool musicKit_hasValidIdentifier;
@property (nonatomic, readonly, copy) NSArray *musicKit_identifierSetSources;
@property (nonatomic, readonly) id musicKit_innerModelObject;
@property (nonatomic, readonly, copy) NSString *musicKit_libraryID;
@property (nonatomic, readonly) NSDictionary *musicKit_modelObjectStorageDictionary;
@property (nonatomic, readonly) long long musicKit_nowPlayingInfoAudioFormat_badging;
@property (nonatomic, readonly, copy) NSString *musicKit_playbackID;
@property (nonatomic, readonly) <MusicKit_SoftLinking_MPCPlayerPath> *musicKit_playerPath;
@property (nonatomic, readonly, copy) NSString *musicKit_playerResponseItem_contentItemIdentifier;
@property (nonatomic, readonly) float musicKit_playerResponseItem_defaultRate;
@property (nonatomic, readonly) double musicKit_playerResponseItem_duration;
@property (nonatomic, readonly) double musicKit_playerResponseItem_elapsedTime;
@property (nonatomic, readonly) double musicKit_playerResponseItem_endTime;
@property (nonatomic, readonly) bool musicKit_playerResponseItem_isLiveContent;
@property (nonatomic, readonly) bool musicKit_playerResponseItem_isLoading;
@property (nonatomic, readonly) bool musicKit_playerResponseItem_isPlaceholder;
@property (nonatomic, readonly) <MusicKit_SoftLinking_MPNowPlayingInfoAudioFormat> *musicKit_playerResponseItem_nowPlayingAudioFormat;
@property (nonatomic, readonly) float musicKit_playerResponseItem_rate;
@property (nonatomic, readonly) double musicKit_playerResponseItem_startTime;
@property (nonatomic, readonly) id musicKit_playerResponseItem_underlyingModelObject;
@property (nonatomic, readonly) long long musicKit_playerResponse_state;
@property (nonatomic, readonly) <MusicKit_SoftLinking_MPCPlayerResponseTracklist> *musicKit_playerResponse_tracklist;
@property (nonatomic, readonly) struct CGColor { }*musicKit_primaryTextColor;
@property (nonatomic, readonly, copy) NSString *musicKit_purchasedAdamID;
@property (nonatomic, readonly) long long musicKit_responseTracklist_actionAtQueueEnd;
@property (nonatomic, readonly) <MusicKit_SoftLinking_MPCPlayerResponseItem> *musicKit_responseTracklist_playingItem;
@property (nonatomic, readonly) long long musicKit_responseTracklist_repeatType;
@property (nonatomic, readonly) MusicKit_SoftLinking_MPSectionedCollection *musicKit_responseTracklist_sectionedCollection;
@property (nonatomic, readonly) long long musicKit_responseTracklist_shuffleType;
@property (nonatomic, readonly) id /* block */ musicKit_responseTracklist_underlyingSectionObjectAtIndexPathBlock;
@property (nonatomic, readonly) id musicKit_sanitizedLegacyModelObject;
@property (nonatomic, readonly) struct CGColor { }*musicKit_secondaryTextColor;
@property (nonatomic, readonly, copy) NSNumber *musicKit_seekCommand_preferredBackwardJumpInterval;
@property (nonatomic, readonly, copy) NSNumber *musicKit_seekCommand_preferredForwardJumpInterval;
@property (nonatomic, readonly) struct CGColor { }*musicKit_tertiaryTextColor;
@property (nonatomic, readonly, copy) NSString *musicKit_visualIdenticalityIdentifier;
@property void*observationInfo;
@property (readonly) NSString *px_descriptionForAssertionMessage;
@property (nonatomic, readonly) bool safari_isNSBoolean;
@property (nonatomic) bool shouldGroupAccessibilityChildren;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SBUISystemApertureElementContext> *systemApertureElementContext;
@property (nonatomic, readonly) <SBUISystemApertureElementContextPrivate> *systemApertureElementContextPrivate;
@property (nonatomic, readonly) <SBUISystemApertureHostedElementContext> *systemApertureHostedElementContext;
@property (nonatomic, readonly) <SAUILayoutSpecifyingOverriding> *systemApertureLayoutSpecifyingOverrider;
@property (nonatomic, readonly) NSArray *tmlChildren;
@property (nonatomic, copy) NSString *tmlIdentifier;
@property (nonatomic) id tmlParent;
@property (nonatomic, copy) NSString *tmlState;
@property (nonatomic, readonly) Class tmlSuperClass;
@property (getter=_traitStorageList, setter=_setTraitStorageList:, retain) _UITraitStorageList *traitStorageList;
@property (nonatomic, copy) NSString *ts_accessibilityElementHelp;
@property (nonatomic, readonly) NSArray *ts_accessibilityLeafDescendants;
@property (setter=tv_setGeneratorType:, nonatomic) unsigned long long tv_generatorType;
@property (nonatomic, readonly, copy) NSUUID *uniqueElementIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uniquePresentableIdentifier;
@property (nonatomic, readonly, copy) NSString *wfName;
@property (nonatomic, readonly) WFType *wfType;

// Image: /usr/lib/libobjc.A.dylib

+ (bool)_isDeallocating;
+ (bool)_tryRetain;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)allowsWeakReference;
+ (id)autorelease;
+ (Class)class;
+ (bool)conformsToProtocol:(id)arg1;
+ (id)copy;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;
+ (void)dealloc;
+ (id)debugDescription;
+ (id)description;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (unsigned long long)hash;
+ (id)init;
+ (void)initialize;
+ (int (*)instanceMethodForSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (bool)isAncestorOfObject:(id)arg1;
+ (bool)isEqual:(id)arg1;
+ (bool)isFault;
+ (bool)isKindOfClass:(Class)arg1;
+ (bool)isMemberOfClass:(Class)arg1;
+ (bool)isProxy;
+ (bool)isSubclassOfClass:(Class)arg1;
+ (int (*)methodForSelector:(SEL)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (id)mutableCopy;
+ (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
+ (id)new;
+ (id)performSelector:(SEL)arg1;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (oneway void)release;
+ (bool)resolveClassMethod:(SEL)arg1;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)respondsToSelector:(SEL)arg1;
+ (id)retain;
+ (unsigned long long)retainCount;
+ (bool)retainWeakReference;
+ (id)self;
+ (Class)superclass;
+ (struct _NSZone { }*)zone;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (bool)allowsWeakReference;
- (id)autorelease;
- (Class)class;
- (bool)conformsToProtocol:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isFault;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (bool)isProxy;
- (int (*)methodForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)mutableCopy;
- (id)performSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (oneway void)release;
- (bool)respondsToSelector:(SEL)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;
- (id)self;
- (Class)superclass;
- (struct _NSZone { }*)zone;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (id)_avkit_playerControllerWebKitData;
- (bool)avkit_isAVPlayerControllerOrSubclass;
- (void)avkit_setWebKitDelegate:(id)arg1;
- (void)avkit_setWebKitIsScrubbing:(bool)arg1;
- (void)avkit_setWebKitSeekToTime:(double)arg1;
- (id)avkit_webkitDelegate;
- (bool)avkit_webkitIsScrubbing;
- (double)avkit_webkitSeekToTime;

// Image: /System/Library/Frameworks/Accessibility.framework/Accessibility

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityBrailleMapRenderRegion;
- (id /* block */)accessibilityBrailleMapRenderer;
- (void)setAccessibilityBrailleMapRenderRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityBrailleMapRenderer:(id /* block */)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)CKSQLiteClassName;
+ (bool)_cksql_isTableEntry;

- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKDescription;
- (id)CKDescriptionClassName;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKDescriptionRedact:(bool)arg1 avoidShortDescription:(bool)arg2;
- (bool)CKDescriptionShouldPrintPointer;
- (id)CKExpandedDescription;
- (id)CKObjectDescriptionRedact:(bool)arg1;
- (id)CKObjectDescriptionRedact:(bool)arg1 avoidShortDescription:(bool)arg2;
- (id)CKPropertiesDescription;
- (id)CKRedactedDescription;
- (id)CKUnredactedDescription;
- (id)_CKDescriptionWithExpansion:(bool)arg1;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;
- (id)cksqlcs_archivedObjectBindingValue:(id*)arg1;
- (id)cksqlcs_bindArchivedObject:(struct sqlite3_stmt { }*)arg1 index:(int)arg2 db:(id)arg3;
- (id)cksqlcs_bindBlob:(struct sqlite3_stmt { }*)arg1 index:(int)arg2 db:(id)arg3;
- (id)cksqlcs_bindDouble:(struct sqlite3_stmt { }*)arg1 index:(int)arg2 db:(id)arg3;
- (id)cksqlcs_bindInt64:(struct sqlite3_stmt { }*)arg1 index:(int)arg2 db:(id)arg3;
- (id)cksqlcs_bindText:(struct sqlite3_stmt { }*)arg1 index:(int)arg2 db:(id)arg3;
- (const void*)cksqlcs_blobBindingValue:(unsigned long long*)arg1 destructor:(int (**)arg2 error:(id*)arg3;
- (double)cksqlcs_doubleBindingValue:(id*)arg1;
- (long long)cksqlcs_int64BindingValue:(id*)arg1;
- (void*)cksqlcs_textBindingValue:(int*)arg1 destructor:(int (**)arg2 error:(id*)arg3;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)cn_updateDictionaryForKey:(id)arg1 withChanges:(id)arg2;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)__allocWithZone_OA:(struct _NSZone { }*)arg1;
+ (id)_copyDescription;
+ (void)dealloc;
+ (id)description;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (id)init;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)load;
+ (id)methodSignatureForSelector:(SEL)arg1;

- (bool)___tryRetain_OA;
- (id)__autorelease_OA;
- (void)__dealloc_zombie;
- (oneway void)__release_OA;
- (id)__retain_OA;
- (unsigned long long)_cfTypeID;
- (id)_copyDescription;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (bool)isNSArray__;
- (bool)isNSCFConstantString__;
- (bool)isNSData__;
- (bool)isNSDate__;
- (bool)isNSDictionary__;
- (bool)isNSNumber__;
- (bool)isNSObject__;
- (bool)isNSOrderedSet__;
- (bool)isNSSet__;
- (bool)isNSString__;
- (bool)isNSTimeZone__;
- (bool)isNSValue__;
- (id)methodSignatureForSelector:(SEL)arg1;

// Image: /System/Library/Frameworks/CoreTelephony.framework/Support/libCommCenterBase.dylib

+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })jsonStringWithObject:(id)arg1;
+ (id)objectWithJSONString:(const void*)arg1;
+ (id)typecast:(id)arg1;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

+ (void)_accessibilityCalDetailStringForEvent:(id)arg1 inLine1:(id*)arg2 inLine2:(id*)arg3 inLine3:(id*)arg4 inLine4:(id*)arg5;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)__old_unswizzled_automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__old_unswizzled_keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createMutableSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_keysForValuesAffectingValueForKey:(id)arg1;
+ (bool)_shouldAddObservationForwardersForKey:(id)arg1;
+ (bool)accessInstanceVariablesDirectly;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;
+ (bool)implementsSelector:(SEL)arg1;
+ (bool)instancesImplementSelector:(SEL)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)load;
+ (id)replacementObjectForPortCoder:(id)arg1;
+ (void)setKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2;
+ (void)setVersion:(long long)arg1;
+ (long long)version;

- (bool)__NS_swiftOverlay_automaticallyNotifiesObserversForKey:(id)arg1 foundationImplementation:(id /* block */)arg2;
- (id)__NS_swiftOverlay_keyPathsForValuesAffectingValueForKey:(id)arg1 foundationImplementation:(id /* block */)arg2;
- (void)_addObserver:(id)arg1 forProperty:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (bool)_allowsDirectEncoding;
- (void)_changeValueForKey:(id)arg1 key:(id)arg2 key:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)_changeValueForKey:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_changeValueForKeys:(id*)arg1 count:(unsigned long long)arg2 maybeOldValuesDict:(id)arg3 maybeNewValuesDict:(id)arg4 usingBlock:(id /* block */)arg5;
- (void)_destroyObserverList;
- (void)_didChangeValuesForKeys:(id)arg1;
- (void)_didEndKeyValueObserving;
- (id)_implicitObservationInfo;
- (bool)_isKVOA;
- (bool)_isToManyChangeInformation;
- (void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (id*)_observerStorage;
- (void*)_observerStorageOfSize:(unsigned long long)arg1;
- (bool)_overrideUseFastBlockObservers;
- (id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(bool)arg2;
- (void)_receiveBox:(id)arg1;
- (void)_removeObserver:(id)arg1 forProperty:(id)arg2;
- (void)_willBeginKeyValueObserving;
- (void)_willChangeValuesForKeys:(id)arg1;
- (id)addChainedObservers:(id)arg1;
- (id)addObservationTransformer:(id /* block */)arg1;
- (id)addObserver:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)addObserver:(id)arg1 forObservableKeyPath:(id)arg2;
- (id)addObserverBlock:(id /* block */)arg1;
- (id)autoContentAccessingProxy;
- (id)awakeAfterUsingCoder:(id)arg1;
- (Class)classForArchiver;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (Class)classForPortCoder;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;
- (void)finishObserving;
- (bool)implementsSelector:(SEL)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)mutableArrayValueForKeyPath:(id)arg1;
- (id)mutableOrderedSetValueForKey:(id)arg1;
- (id)mutableOrderedSetValueForKeyPath:(id)arg1;
- (id)mutableSetValueForKey:(id)arg1;
- (id)mutableSetValueForKeyPath:(id)arg1;
- (id)newTaggedNSStringWithASCIIBytes_:(const char *)arg1 length_:(long long)arg2;
- (void*)observationInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(bool)arg4;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(bool)arg4 modes:(id)arg5;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)performSelectorInBackground:(SEL)arg1 withObject:(id)arg2;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(bool)arg3;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(bool)arg3 modes:(id)arg4;
- (void)receiveObservedError:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)removeObservation:(id)arg1;
- (void)removeObservation:(id)arg1 forObservableKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (id)replacementObjectForArchiver:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObservation:(id)arg1 forObservingKeyPath:(id)arg2;
- (void)setObservationInfo:(void*)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (bool)validateValue:(inout id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (bool)validateValue:(inout id*)arg1 forKeyPath:(id)arg2 error:(out id*)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)_hk_valueForSafeValueForKeyPath:(id)arg1;
- (id)hk_classNameWithTag:(id)arg1;
- (bool)hk_expectMissingKeyPath:(id)arg1 error:(id*)arg2;
- (bool)hk_hasValueForKeyPath:(id)arg1;
- (id)hk_safeArrayForKeyPath:(id)arg1 error:(id*)arg2;
- (id)hk_safeArrayIfExistsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)hk_safeDictionaryForKeyPath:(id)arg1 error:(id*)arg2;
- (id)hk_safeDictionaryIfExistsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)hk_safeNumberForKeyPath:(id)arg1 error:(id*)arg2;
- (id)hk_safeNumberIfExistsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)hk_safeStringForKeyPath:(id)arg1 error:(id*)arg2;
- (id)hk_safeStringIfExistsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)hk_safeValueForKeyPath:(id)arg1 class:(Class)arg2 error:(id*)arg3;
- (id)hk_safeValueIfExistsForKeyPath:(id)arg1 class:(Class)arg2 error:(id*)arg3;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)intents_arrayOfWidgetPlistRepresentableInDict:(id)arg1 key:(id)arg2 error:(id*)arg3 resultTransformer:(id /* block */)arg4;
+ (id)intents_widgetPlistRepresentableInDict:(id)arg1 key:(id)arg2 error:(id*)arg3;

- (bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (id)_intents_displayImageForLanguage:(id)arg1;
- (id)_intents_displayImageWithLocalizer:(id)arg1;
- (bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(id /* block */)arg2;
- (id)_intents_indexingRepresentation;
- (bool)_intents_isValidKey:(id)arg1;
- (id)_intents_localizedCopyForLanguage:(id)arg1;
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)_intents_readableDescriptionWithLocalizer:(id)arg1;
- (id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)_intents_readableSubtitleForLanguage:(id)arg1;
- (id)_intents_readableSubtitleForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)_intents_readableSubtitleWithLocalizer:(id)arg1;
- (id)_intents_readableSubtitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)_intents_readableTitleForLanguage:(id)arg1;
- (id)_intents_readableTitleForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (SEL)_intents_setterForPropertyWithName:(id)arg1;
- (id)_setterForProperty:(id)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (bool)_mapkit_instanceImplementationOfSelector:(SEL)arg1 isFromSubclassOfClass:(Class)arg2;

- (bool)_isMKClusterAnnotation;
- (bool)_mapkit_implementationOfSelector:(SEL)arg1 isFromSubclassOfClass:(Class)arg2;
- (bool)_mapkit_isInternalAnnotation;
- (bool)_mapkit_isInternalAnnotationView;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)MPMediaLibraryDataProviderSystemML3CoercedString;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)mf_objectWithHighest:(id /* block */)arg1;

// Image: /System/Library/Frameworks/MusicKit.framework/MusicKit

+ (id)_musicKit_modelObjectStorageDictionaryForGenericModelObject:(id)arg1;
+ (id)_musicKit_modelObjectStorageDictionaryForPlaylistEntry:(id)arg1;
+ (id)_musicKit_modelObjectStorageDictionaryForStoreBrowseContentItem:(id)arg1;

- (id)_musicKit_innerModelObject;
- (id)_musicKit_modelObjectRawStorageDictionary;
- (id)_musicKit_self_artworkCatalog;
- (id)_musicKit_self_artworkColorAnalysis;
- (id)_musicKit_self_identifierSet;
- (id)_musicKit_self_nowPlayingInfoAudioFormat;
- (bool)intersectsSet:(id)arg1;
- (id)musicKit_artworkCatalogForProperty:(id)arg1;
- (id)musicKit_artworkDataSourceIdentifier;
- (id)musicKit_artworkDataSourceShortDescription;
- (id)musicKit_artworkDictionary;
- (id)musicKit_artworkTokenParameters;
- (struct CGColor { }*)musicKit_backgroundColor;
- (id)musicKit_catalogID;
- (id)musicKit_cloudID;
- (id)musicKit_deviceLocalID;
- (id)musicKit_existingColorAnalysis;
- (struct CGSize { double x1; double x2; })musicKit_fittingSize;
- (bool)musicKit_hasValidIdentifier;
- (id)musicKit_identifierSetSources;
- (id)musicKit_innerModelObject;
- (id)musicKit_libraryID;
- (id)musicKit_modelObjectStorageDictionary;
- (long long)musicKit_nowPlayingInfoAudioFormat_badging;
- (id)musicKit_playbackID;
- (struct CGColor { }*)musicKit_primaryTextColor;
- (id)musicKit_purchasedAdamID;
- (void)musicKit_requestColorAnalysisWithCompletionHandler:(id /* block */)arg1;
- (void)musicKit_requestImageDataWithCompletion:(id /* block */)arg1;
- (id)musicKit_sanitizedLegacyModelObject;
- (struct CGColor { }*)musicKit_secondaryTextColor;
- (void)musicKit_setFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGColor { }*)musicKit_tertiaryTextColor;
- (id)musicKit_visualIdenticalityIdentifier;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

- (bool)pkaxRespondsToSelector:(SEL)arg1 fromExtrasProtocol:(id)arg2;
- (id)pkaxValueForKey:(id)arg1;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)CA_CAMLPropertyForKey:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)CA_encodesPropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (int (*)CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; unsigned int x2 : 16; unsigned int x3 : 16; SEL x4[2]; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; unsigned int x2 : 16; unsigned int x3 : 16; SEL x4[2]; char *x5; struct __CFString {} *x6; }*)arg1;

- (id)CAMLType;
- (id)CAMLTypeForKey:(id)arg1;
- (bool)CAMLTypeSupportedForKey:(id)arg1;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)CA_archivingValueForKey:(id)arg1;
- (unsigned long long)CA_copyNumericValue:(double*)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3 : 8; unsigned int x4 : 24; }*)CA_copyRenderValue;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3 : 8; unsigned int x4 : 24; }*)CA_copyRenderValueWithColorspace:(struct CGColorSpace { }*)arg1;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; bool x15; }*)arg4;
- (unsigned long long)CA_numericValueCount;
- (void)CA_prepareRenderValue;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (bool)CA_validateValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

- (id)SCN_setupDisplayLinkWithQueue:(id)arg1 screen:(id)arg2 policy:(unsigned long long)arg3;

// Image: /System/Library/Frameworks/Security.framework/Security

+ (id)SFSQLiteClassName;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

+ (bool)_isFromSwiftUI;

- (void)_performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)accessibilityNodeForPlatformElement;
- (id /* block */)accessibilitySwiftUIDefaultActionStoredBlock;
- (id)accessibilitySwiftUIStoredLinkRotor;
- (void)setAccessibilityNodeForPlatformElement:(id)arg1;
- (void)setAccessibilitySwiftUIDefaultActionStoredBlock:(id /* block */)arg1;
- (void)setAccessibilitySwiftUIStoredLinkRotor:(id)arg1;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (bool)un_safeBoolValue;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (void)vs_bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)vs_binderCreatingIfNeeded:(bool)arg1;
- (void)vs_setValue:(id)arg1 forBinding:(id)arg2;
- (void)vs_unbind:(id)arg1;
- (id)vs_unbinderCreatingIfNeeded:(bool)arg1;
- (id)vs_valueForBinding:(id)arg1;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (long long)VNComputeDevicePerformanceScore;
- (unsigned long long)VNComputeDeviceType;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

- (id)_accessibilityAttributedLocalizedString;
- (id)_axDictionaryKeyReplacementRepresentation;
- (id)_axReconstitutedRepresentationForDictionaryKeyReplacement;
- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1;
- (void)_setAccessibilityAttributedLocalizedString:(id)arg1;
- (bool)isAXAttributedString;

// Image: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities

- (id)_accessibilityBadgeTextForTextElement:(id)arg1;
- (id)_accessibilityUIFindAXDescendants:(id /* block */)arg1 byAddingElements:(id /* block */)arg2;
- (id)_accessibilityUIFindAnyAXDescendant:(id /* block */)arg1 byAddingElements:(id /* block */)arg2;
- (id)_accessibilityUIFindSubviewDescendant:(id /* block */)arg1;
- (id)_atvAccessibilityITMLAccessibilityContentWithElement:(id)arg1;
- (id)_atvaccessibilityAncestorHasAXID:(id)arg1;
- (id)_atvaccessibilityClosestElementAbove:(id)arg1;
- (id)_atvaccessibilityGeometricNearestHeader;
- (id)_atvaccessibilityITMLAccessibilityContent;
- (id)_atvaccessibilityITMLClass;
- (id)ax_buddyDynamicHeightConstraints;
- (id)ax_buddyObservedTableViews;
- (void)ax_setBuddyDynamicHeightConstraints:(id)arg1;
- (void)ax_setBuddyObservedTableViews:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (void)_accessibilityPerformValidations:(id)arg1;

- (id)__axValueForKey:(id)arg1;
- (bool)_accessibilityBoolValueForKey:(id)arg1;
- (long long)_accessibilityIntegerValueForKey:(id)arg1;
- (bool)_accessibilityInterposesAsOnboardingApp;
- (bool)_accessibilityInterposesAsSystemApplication;
- (bool)_accessibilityIsSpeakThisTemporarilyDisabled;
- (void)_accessibilityPerformSafeValueKeyBlock:(id /* block */)arg1 withKey:(id)arg2 onClass:(Class)arg3;
- (void)_accessibilityRemoveValueForKey:(id)arg1;
- (void)_accessibilitySetAssignedValue:(id)arg1 forKey:(id)arg2;
- (void)_accessibilitySetBoolValue:(bool)arg1 forKey:(id)arg2;
- (void)_accessibilitySetIntegerValue:(long long)arg1 forKey:(id)arg2;
- (void)_accessibilitySetRetainedValue:(id)arg1 forKey:(id)arg2;
- (void)_accessibilitySetSpeakThisTemporarilyDisabled:(bool)arg1;
- (void)_accessibilitySetUnsignedIntegerValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_accessibilitySetValue:(id)arg1 forKey:(id)arg2 storageMode:(long long)arg3;
- (unsigned long long)_accessibilityUnsignedIntegerValueForKey:(id)arg1;
- (id)_accessibilityValueForKey:(id)arg1;
- (id)_axDictionaryQueue;
- (bool)_axIsWrappedPointer;
- (void)_axSetIsWrappedPointer:(bool)arg1;
- (void)_ax_appendPrettyDescriptionToString:(id)arg1 indentationString:(id)arg2 visitedCollections:(id)arg3;
- (id)_safeValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 expectedTypeEncoding:(const char *)arg3;
- (id)_safeValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 possibleExpectedTypeEncodings:(const char *)arg3;
- (id)axSuperTrampoline;
- (id)axTrampolineForClass:(Class)arg1;
- (id)ax_prettyDescription;
- (void)handleFailoversForClassNamed:(id)arg1;
- (id)safeArrayForKey:(id)arg1;
- (bool)safeBoolForKey:(id)arg1;
- (double)safeCGFloatForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })safeCGPointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeCGRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })safeCGSizeForKey:(id)arg1;
- (id)safeDictionaryForKey:(id)arg1;
- (double)safeDoubleForKey:(id)arg1;
- (float)safeFloatForKey:(id)arg1;
- (int)safeIntForKey:(id)arg1;
- (long long)safeIntegerForIvarKey:(id)arg1 onClass:(Class)arg2;
- (long long)safeIntegerForKey:(id)arg1;
- (void*)safeIvarForKey:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })safeRangeForKey:(id)arg1;
- (id)safeSetForKey:(id)arg1;
- (id)safeStringForKey:(id)arg1;
- (double)safeTimeIntervalForKey:(id)arg1;
- (id)safeUIViewForKey:(id)arg1;
- (unsigned int)safeUnsignedIntForKey:(id)arg1;
- (unsigned long long)safeUnsignedIntegerForKey:(id)arg1;
- (id)safeValueForKey:(id)arg1;
- (id)safeValueForKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice

- (id)deepMutableObject;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (unsigned long long)akToolbarButtonItemType;

// Image: /System/Library/PrivateFrameworks/AppPredictionFoundation.framework/AppPredictionFoundation

- (bool)atx_isFuzzyMatch:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)atx_writeToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

+ (bool)apui_isSupportedForCardRequests;

- (id)apui_intent;

// Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport

- (id)pep_afterDelay:(double)arg1;
- (id)pep_getInvocation:(id*)arg1;
- (id)pep_onMainThread;
- (id)pep_onMainThreadIfNecessary;
- (id)pep_onOperationQueue:(id)arg1;
- (id)pep_onOperationQueue:(id)arg1 priority:(long long)arg2;
- (id)pep_onThread:(id)arg1;
- (id)pep_onThread:(id)arg1 immediateForMatchingThread:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (id)ams_generateDescriptionWithSubObjects:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

- (id)_sanitizedServerObject:(id)arg1;
- (id)ams_sanitizeServerObject;

// Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission

- (id)ap_generateDescriptionWithSubObjects:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit

- (void)_uniquelyIdentifyPresentable;
- (void)ensurePresentableIsUniquelyIdentifiable;
- (id)uniquePresentableIdentifier;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (bool)bs_isPlistableType;
+ (bool)bs_isXPCObject;
+ (id)bs_secureDataFromObject:(id)arg1;
+ (id)bs_secureDecodedFromData:(id)arg1;
+ (id)bs_secureDecodedFromData:(id)arg1 withAdditionalClasses:(id)arg2;
+ (id)bs_secureObjectFromData:(id)arg1 ofClass:(Class)arg2;
+ (id)bs_secureObjectFromData:(id)arg1 ofClasses:(id)arg2;
+ (bool)supportsBSXPCSecureCoding;

- (bool)bs_isPlistableType;
- (id)bs_secureEncoded;
- (bool)supportsBSXPCSecureCoding;

// Image: /System/Library/PrivateFrameworks/BrailleSymbology.framework/BrailleSymbology

- (void)accessibilityInvalidateBrailleStyleConfiguration;

// Image: /System/Library/PrivateFrameworks/BrookServices.framework/BrookServices

- (void)brk_debounce:(SEL)arg1 withObject:(id)arg2 delay:(double)arg3;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

+ (id)bb_objectCache;

- (id)bb_objectCache;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (unsigned long long)blt_sizeof;
- (id)objectSentinelNull;
- (id)objectWithNSNulls:(id)arg1;
- (id)objectWithNoNSNulls:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess

- (void)da_addNullRunLoopSourceAndPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)da_performSelectorThatDoesntAffectRetainCount:(SEL)arg1 withObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (bool)isNull;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (id)CalClassName;
- (bool)isNull;
- (void)performBlockOnMainThreadSynchronously:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

+ (void)_accessibilityCalGetHourDesignatorsForAM:(id*)arg1 andPM:(id*)arg2;
+ (bool)_accessibilityCalShow24Hours;
+ (bool)_accessibilityCalSpaceBetweenDesignatorsAndHour;
+ (id)_accessibilityStringForDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
+ (id)_accessibilityStringForDayOfWeek:(int)arg1;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

- (id)mutableDeepCopy;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (int)_crk_leadingCardSectionSeparatorStyle;
- (int)_crk_trailingCardSectionSeparatorStyle;
- (id)crk_backingPunchout;

// Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI

+ (void)NPHRequestIdleTimeNotification;
+ (void)_NPHIdleTimeNotification:(id)arg1;
+ (void)performBlockAtIdle:(id /* block */)arg1;

- (void)nph_debounce:(SEL)arg1 delay:(double)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (bool)__ck_isKindOfClass:(Class)arg1;

- (struct CGSize { double x1; double x2; })ck_constrainedSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithNavigationController:(id)arg1;
- (void)smsComposeControllerAppeared:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerDataInserted:(id)arg1;
- (void)smsComposeControllerEntryViewContentInserted:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (bool)brc_swizzleClassMethod:(SEL)arg1 with:(SEL)arg2;
+ (bool)brc_swizzleClassMethod:(SEL)arg1 with:(Class)arg2 newSel:(SEL)arg3;
+ (void)brc_swizzleClassMethod:(SEL)arg1 with:(Class)arg2 newSel:(SEL)arg3 usingBlock:(id /* block */)arg4;
+ (bool)brc_swizzleInstanceMethod:(SEL)arg1 with:(SEL)arg2;
+ (bool)brc_swizzleInstanceMethod:(SEL)arg1 with:(Class)arg2 newSel:(SEL)arg3;
+ (void)brc_swizzleInstanceMethod:(SEL)arg1 with:(Class)arg2 newSel:(SEL)arg3 usingBlock:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)CKLogToFileHandle:(id)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

+ (void)_addPropertyAttributeMapToPropertyMapLocked:(id)arg1;
+ (id)_cplPropertyAttributeMap;
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (id)cplAllPropertyNames;
+ (void)cplDumpProperties;
+ (bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (bool)cplShouldIgnorePropertyForEquality:(id)arg1;

- (void)_cplCopyProperties:(id)arg1 fromOtherObject:(id)arg2 withCopyBlock:(id /* block */)arg3;
- (void)cplClearProperties:(id)arg1;
- (void)cplCopyProperties:(id)arg1 fromObject:(id)arg2 withCopyBlock:(id /* block */)arg3;
- (void)cplCopyPropertiesFromObject:(id)arg1 withCopyBlock:(id /* block */)arg2;
- (void)cplDecodePropertiesFromCoder:(id)arg1;
- (id)cplDeepCopy;
- (void)cplEncodePropertiesWithCoder:(id)arg1;
- (id)cplFullDescription;
- (unsigned long long)cplHash;
- (bool)cplIsEqual:(id)arg1;
- (bool)cplIsEqual:(id)arg1 withEqualityBlock:(id /* block */)arg2;
- (bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 diffTracker:(id)arg3 withEqualityBlock:(id /* block */)arg4;
- (bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 withEqualityBlock:(id /* block */)arg3;
- (unsigned long long)cplSpecialHash;
- (bool)cplSpecialIsEqual:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)storedClassNameForCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI

+ (void)_accessibilityConvertDecimalDegreeToDMS:(double)arg1 degreesPtr:(long long*)arg2 minutesPtr:(long long*)arg3 secondsPtr:(double*)arg4;

// Image: /System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon

- (id)redactedDescription;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (void)wf_enumerateClassMethodsWithPrefix:(id)arg1 usingBlock:(id /* block */)arg2;

- (id)wfName;
- (id)wfType;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

- (id)_ccui_punchOutRenderingViews;
- (bool)ccui_configureForGroupRenderingMode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

+ (id)fromPBCodable:(id)arg1;

- (id)toPBCodable;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

- (bool)boolValueSafe;
- (bool)boolValueSafe:(int*)arg1;
- (double)doubleValueSafe;
- (double)doubleValueSafe:(int*)arg1;
- (long long)int64ValueSafe;
- (long long)int64ValueSafe:(int*)arg1;
- (id)stringValueSafe;
- (id)stringValueSafe:(int*)arg1;
- (const char *)utf8ValueSafe;
- (const char *)utf8ValueSafe:(int*)arg1;

// Image: /System/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

+ (bool)xr_object:(id)arg1 isEqual:(id)arg2;

- (int)agentStopDiagnosticsTypeCode;
- (void)enumerateKeyValuePairs:(id /* block */)arg1;
- (void)enumerateTextBacktraceFrames:(id /* block */)arg1;
- (bool)getPID:(int*)arg1 sessionUUID:(id*)arg2;
- (bool)getTID:(unsigned long long*)arg1 process:(id*)arg2;
- (bool)getURLSessionName:(id*)arg1 internalSessionID:(id*)arg2 backgroundIdentifier:(id*)arg3 isShared:(bool*)arg4 isEphemeral:(bool*)arg5;
- (id)uuidFromEngineeringValue;
- (id)xr_clipsStringRepresentation;
- (bool)xr_isCLIPSSymbol;
- (id)xr_stringArrayFromNSStringOrNSArray;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (void)da_addNullRunLoopSourceAndPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)da_performSelectorThatDoesntAffectRetainCount:(SEL)arg1 withObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DebugHierarchyFoundation.framework/DebugHierarchyFoundation

- (id)debugHierarchyAdditionalGroupingIDs;
- (id)debugHierarchyObjectsInGroupWithID:(id)arg1 outOptions:(id*)arg2;
- (id)debugHierarchyPropertyDescriptions;
- (id)debugHierarchyValueForPropertyWithName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit

- (id)dropNonSerializableDataWithError:(id*)arg1;
- (bool)isJSONSerializable;
- (bool)isSecureCodable;

// Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation

- (id)_fides_objectByReplacingValue:(id)arg1 withValue:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

- (bool)dcaxRespondsToSelector:(SEL)arg1 fromExtrasProtocol:(id)arg2;
- (id)dcaxValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

+ (void)_doc_swapMethodWithSelector:(SEL)arg1 withMethodWithSelector:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (id)ef_observeKeyPath:(id)arg1 options:(unsigned long long)arg2 autoCancelToken:(bool)arg3 usingBlock:(id /* block */)arg4;
- (id)ef_observeKeyPath:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)ef_onScheduler:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore

- (id)addKVOBlockForKeyPath:(id)arg1 options:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)addOneShotKVOBlockForKeyPath:(id)arg1 options:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)allKVOObservers;
- (void)removeKVOBlockForToken:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

- (void)_fm_addNotificationObserverProxy:(id)arg1;
- (void)_fm_removeNotificationObserverProxy:(id)arg1;
- (id)fm_addNotificationBlockObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)fm_addNotificationBlockObserverForObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)fm_associatedObjectForDescriptor:(const struct { char *x1; unsigned long long x2; }*)arg1;
- (id)fm_logID;
- (id)fm_nullToNil;
- (void)fm_removeNotificationBlockObserver:(id)arg1;
- (void)fm_setAssociatedObject:(id)arg1 assocatedObjectDescriptor:(const struct { char *x1; unsigned long long x2; }*)arg2;
- (id)logID;
- (id)nullToNil;

// Image: /System/Library/PrivateFrameworks/GPUTools.framework/GPUTools

+ (id)_dy_mutableCollectionPropertyInfo;
+ (void)dy_synthesizeMutableArrayProperty:(id)arg1 withInstanceVariable:(id)arg2;
+ (void)dy_synthesizeMutableSetProperty:(id)arg1 withInstanceVariable:(id)arg2;

- (id)_dy_mutableCollectionPropertyInfo;
- (unsigned long long)dy_mutableArrayPrimitiveCountForProperty:(id)arg1;
- (id)dy_mutableArrayPrimitiveGetMutableValueForProperty:(id)arg1;
- (void)dy_mutableArrayPrimitiveGetObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forProperty:(id)arg3;
- (id)dy_mutableArrayPrimitiveGetValueForProperty:(id)arg1;
- (void)dy_mutableArrayPrimitiveInsertObject:(id)arg1 atIndex:(unsigned long long)arg2 forProperty:(id)arg3;
- (void)dy_mutableArrayPrimitiveInsertObjects:(id)arg1 atIndexes:(id)arg2 forProperty:(id)arg3;
- (id)dy_mutableArrayPrimitiveObjectAtIndex:(unsigned long long)arg1 forProperty:(id)arg2;
- (id)dy_mutableArrayPrimitiveObjectsAtIndexes:(id)arg1 forProperty:(id)arg2;
- (void)dy_mutableArrayPrimitiveRemoveObjectAtIndex:(unsigned long long)arg1 forProperty:(id)arg2;
- (void)dy_mutableArrayPrimitiveRemoveObjectsAtIndexes:(id)arg1 forProperty:(id)arg2;
- (void)dy_mutableArrayPrimitiveReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 forProperty:(id)arg3;
- (void)dy_mutableArrayPrimitiveReplaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 forProperty:(id)arg3;
- (void)dy_mutableArrayPrimitiveSetValue:(id)arg1 forProperty:(id)arg2;
- (void)dy_mutableSetPrimitiveAddObject:(id)arg1 forProperty:(id)arg2;
- (void)dy_mutableSetPrimitiveAddObjects:(id)arg1 forProperty:(id)arg2;
- (unsigned long long)dy_mutableSetPrimitiveCountForProperty:(id)arg1;
- (id)dy_mutableSetPrimitiveGetMutableValueForProperty:(id)arg1;
- (id)dy_mutableSetPrimitiveGetValueForProperty:(id)arg1;
- (void)dy_mutableSetPrimitiveIntersectObjects:(id)arg1 forProperty:(id)arg2;
- (id)dy_mutableSetPrimitiveMember:(id)arg1 forProperty:(id)arg2;
- (id)dy_mutableSetPrimitiveObjectEnumeratorForProperty:(id)arg1;
- (void)dy_mutableSetPrimitiveRemoveObject:(id)arg1 forProperty:(id)arg2;
- (void)dy_mutableSetPrimitiveRemoveObjects:(id)arg1 forProperty:(id)arg2;
- (void)dy_mutableSetPrimitiveSetValue:(id)arg1 forProperty:(id)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkAddObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (id)_gkDescription;
- (id)_gkDescriptionWithChildren:(long long)arg1;
- (id)_gkInvokeSelector:(SEL)arg1;
- (id)_gkInvokeSelector:(SEL)arg1 withNullableObject:(id)arg2;
- (id)_gkInvokeSelector:(SEL)arg1 withObject:(id)arg2;
- (void)_gkPerformSelector:(SEL)arg1;
- (void)_gkPerformSelector:(SEL)arg1 withNullableObject:(id)arg2;
- (void)_gkPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)_gkPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)_gkPerformSelector:(SEL)arg1 withObjects:(id)arg2;
- (id)_gkRecursiveDescription;
- (void)_gkRemoveObserverWithBlockToken:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)_gkNib;
+ (id)_gkNibWithBaseName:(id)arg1;
+ (id)_gkNibWithPlatformName:(id)arg1;
+ (id)_gkPlatformNibName;
+ (id)_gkPlatformNibNameForBaseName:(id)arg1;

- (id)_gkAuthenticatedPlayerID;
- (void)_gkSetupAccountWithParamaters:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (id)hmf_registerObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 handler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/HealthMobility.framework/HealthMobility

- (void)hkmobility_safeRemoveObserver:(id)arg1 forKeyPath:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordsExtraction.framework/HealthRecordsExtraction

- (id)hd_handleExtensionComponent:(id)arg1 error:(id*)arg2;
- (id)hd_stringArrayValue;
- (id)hd_stringValue;
- (id)hd_valueForKeyPath:(id)arg1 rootResource:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)fetchDetailedReportWithHealthStore:(id)arg1 reportDataBlock:(id /* block */)arg2;
- (bool)hasAssociatedReport;
- (bool)hk_animatable;
- (id)hk_defaultDistanceQuantityType;
- (id)hk_localizedStringForAssociatedDistanceQuantity:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescription;
- (id)hf_prettyDescriptionWithDetailLevel:(unsigned long long)arg1;
- (id)hf_prettyExpensiveDescription;
- (id)hf_prettyFullDescription;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)__im_afterDelay:(double)arg1;
- (id)__im_afterDelay:(double)arg1 modes:(id)arg2;
- (id)__im_getInvocation:(id*)arg1;
- (id)__im_onDetachedThread;
- (id)__im_onMainThread;
- (id)__im_onMainThreadIfNecessary;
- (id)__im_onThread:(id)arg1;
- (id)__im_onThread:(id)arg1 immediateForMatchingThread:(bool)arg2;
- (bool)isNull;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ignoreMenuTracking:(bool)arg4;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)_createSingleton__im;
+ (bool)isSingleton;
+ (bool)isSingletonOverridden;
+ (id)overriddenSingleton;
+ (void)overrideSingletonWithObject:(id)arg1;
+ (void)removeSingletonOverride;
+ (void)replaceSingletonWithObject:(id)arg1;
+ (bool)replaceSingletonWithSubclass:(id)arg1;
+ (id)singletonOverride;

- (void)__im_performAsynchronousTest:(id /* block */)arg1 name:(id)arg2 timeout:(double)arg3 finalizer:(id /* block */)arg4;
- (bool)__isSingletonProxy__im;
- (bool)isArchivable_im;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)ik_invocationForSelectorCandidates:(id)arg1;
+ (id)ik_invocationforSelectorString:(id)arg1 argumentsPointerValue:(id)arg2;

- (bool)ik_initInvocation:(id)arg1;
- (id)ik_initWithInitializers:(id)arg1;
- (id)ik_initWithSelectorString:(id)arg1 arguments:(void*)arg2;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (void)if_setValueIfNonNil:(id)arg1 forKey:(id)arg2;
- (void)if_setValueIfYES:(bool)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport

+ (id)inuickp_interactiveBehaviorPrecedenceOrder;

- (unsigned long long)inuickp_intrinsicInteractiveBehavior;

// Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit

- (long long)kgPropertyType;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (void)mf_clearLocks;

- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)arg1;
- (void)_mf_checkToAllowLock:(id)arg1;
- (void)_mf_checkToAllowOrderingWithLock:(id)arg1;
- (void)_mf_checkToAllowStrictProgressionWithLock:(id)arg1;
- (void)_mf_dumpLockCallStacks:(unsigned long long)arg1 ordering:(id)arg2;
- (id)_mf_lockOrderingForType:(int)arg1;
- (void)_mf_ntsCheckToAllowLock:(id)arg1;
- (bool)_mf_ntsIsLocked;
- (id)mf_exclusiveLocks;
- (void)mf_lock;
- (id)mf_lockOrdering;
- (void)mf_lockWithPriority;
- (id)mf_strictLockOrdering;
- (bool)mf_tryLock;
- (bool)mf_tryLockWithPriority;
- (void)mf_unlock;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (bool)_maps_needsUpdateWithSelector:(SEL)arg1;
- (void)_maps_setNeedsUpdate:(bool)arg1 withSelector:(SEL)arg2;
- (void)_maps_setNeedsUpdateWithSelector:(SEL)arg1;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (id)mr_formattedDebugDescription;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

- (id)__msv_inspect;
- (id)__msv_inspectWithOptions:(unsigned long long)arg1;
- (id)__msv_ivars;
- (id)__msv_methods;
- (id)__msv_objectDescription;
- (id)__msv_properties;

// Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy

- (void)mf_performOnewaySelectorInMainThread:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit

- (id)mt_nullableValueForKey:(id)arg1;
- (id)mt_nullableValueForKeyPath:(id)arg1;
- (id)mt_nullableValueForKeyPathArray:(id)arg1 index:(long long)arg2;
- (id)mt_nullableValueForKeyPathExt:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI

- (bool)__isSUUIDynamicGridSizeCacheKey;

// Image: /System/Library/PrivateFrameworks/MusicKitInternal.framework/MusicKitInternal

- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })_durationSnapshot;
- (id)_musicKit_self_actionAtQueueEndCommand;
- (id)_musicKit_self_avRoute;
- (id)_musicKit_self_changeItemCommand;
- (id)_musicKit_self_commandRequest;
- (id)_musicKit_self_insertItemsCommand;
- (id)_musicKit_self_playerPath;
- (id)_musicKit_self_playerResponse;
- (id)_musicKit_self_reorderItemsCommand;
- (id)_musicKit_self_repeatCommand;
- (id)_musicKit_self_resetTracklistCommand;
- (id)_musicKit_self_responseItem;
- (id)_musicKit_self_responseTracklist;
- (id)_musicKit_self_seekCommand;
- (id)_musicKit_self_shuffleCommand;
- (void)_musicKit_setCommandOptionValue:(id)arg1 forKey:(id)arg2;
- (bool)musicKit_actionAtQueueEndCommand_isAutoPlaySupported;
- (id)musicKit_actionAtQueueEndCommand_setQueueEndActionCommandRequest:(long long)arg1;
- (id)musicKit_avRoute_routeName;
- (id)musicKit_avRoute_routeUID;
- (id)musicKit_changeItemCommand_changeToItem:(id)arg1;
- (id)musicKit_changeItemCommand_nextChapterCommandRequest;
- (id)musicKit_changeItemCommand_nextItemCommandRequest;
- (id)musicKit_changeItemCommand_nextSectionCommandRequest;
- (id)musicKit_changeItemCommand_previousChapterCommandRequest;
- (id)musicKit_changeItemCommand_previousItemCommandRequest;
- (id)musicKit_changeItemCommand_previousItemDeferringToPlaybackQueuePositionCommandRequest;
- (id)musicKit_changeItemCommand_previousSectionCommandRequest;
- (id)musicKit_insertItemsCommand_insertAfterPlayingItemCommandRequestWithPlaybackIntent:(id)arg1;
- (id)musicKit_insertItemsCommand_insertAtEndOfTracklistCommandRequestWithPlaybackIntent:(id)arg1;
- (id)musicKit_playerPath;
- (id)musicKit_playerPath_bundleID;
- (bool)musicKit_playerPath_isCompanion;
- (bool)musicKit_playerPath_isInProcess;
- (bool)musicKit_playerPath_isLocal;
- (id)musicKit_playerPath_playerID;
- (id)musicKit_playerPath_route;
- (id)musicKit_playerResponseItem_contentItemIdentifier;
- (float)musicKit_playerResponseItem_defaultRate;
- (double)musicKit_playerResponseItem_duration;
- (double)musicKit_playerResponseItem_elapsedTime;
- (double)musicKit_playerResponseItem_endTime;
- (bool)musicKit_playerResponseItem_isLiveContent;
- (bool)musicKit_playerResponseItem_isLoading;
- (bool)musicKit_playerResponseItem_isPlaceholder;
- (id)musicKit_playerResponseItem_nowPlayingAudioFormat;
- (float)musicKit_playerResponseItem_rate;
- (id)musicKit_playerResponseItem_removeCommandRequest;
- (id)musicKit_playerResponseItem_seekCommand;
- (double)musicKit_playerResponseItem_startTime;
- (id)musicKit_playerResponseItem_underlyingModelObject;
- (id)musicKit_playerResponse_pauseCommandRequest;
- (id)musicKit_playerResponse_playCommandRequest;
- (long long)musicKit_playerResponse_state;
- (id)musicKit_playerResponse_stopCommandRequest;
- (id)musicKit_playerResponse_tracklist;
- (id)musicKit_reorderItemsCommand_moveItem:(id)arg1 afterItem:(id)arg2;
- (id)musicKit_reorderItemsCommand_moveItem:(id)arg1 beforeItem:(id)arg2;
- (id)musicKit_repeatCommand_setRepeatType:(long long)arg1;
- (id)musicKit_resetTracklistCommand_clearCommandRequest;
- (id)musicKit_resetTracklistCommand_clearUpNextItemsCommandRequest;
- (id)musicKit_resetTracklistCommand_replaceCommandRequestWithPlaybackIntent:(id)arg1 replaceIntent:(long long)arg2;
- (long long)musicKit_responseTracklist_actionAtQueueEnd;
- (id)musicKit_responseTracklist_actionAtQueueEndCommand;
- (id)musicKit_responseTracklist_changeItemCommand;
- (id)musicKit_responseTracklist_insertCommand;
- (id)musicKit_responseTracklist_playingItem;
- (id)musicKit_responseTracklist_reorderCommand;
- (id)musicKit_responseTracklist_repeatCommand;
- (long long)musicKit_responseTracklist_repeatType;
- (id)musicKit_responseTracklist_resetCommand;
- (id)musicKit_responseTracklist_sectionedCollection;
- (id)musicKit_responseTracklist_shuffleCommand;
- (long long)musicKit_responseTracklist_shuffleType;
- (id /* block */)musicKit_responseTracklist_underlyingSectionObjectAtIndexPathBlock;
- (id)musicKit_seekCommand_beginSeekCommandRequestWithDirection:(long long)arg1;
- (id)musicKit_seekCommand_changePositionCommandRequestToElapsedInterval:(double)arg1;
- (id)musicKit_seekCommand_endSeekCommandRequest;
- (id)musicKit_seekCommand_jumpCommandRequestByInterval:(double)arg1;
- (id)musicKit_seekCommand_preferredBackwardJumpInterval;
- (id)musicKit_seekCommand_preferredForwardJumpInterval;
- (void)musicKit_setSessionID:(id)arg1;
- (id)musicKit_shuffleCommand_setShuffleType:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (bool)ml_matchesValue:(id)arg1 usingComparison:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (void)npkFakeArcRetain;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

- (id)ntk_listOfDynamicProperties;
- (id)ntk_listOfProperties;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (void)_na_addNotificationObserverProxy:(id)arg1;
- (void)_na_removeNotificationObserverProxy:(id)arg1;
- (id)na_addNotificationBlockObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)na_addNotificationBlockObserverForObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)na_associatedObjectForDescriptor:(const struct { char *x1; unsigned long long x2; }*)arg1;
- (void)na_removeNotificationBlockObserver:(id)arg1;
- (void)na_setAssociatedObject:(id)arg1 associatedObjectDescriptor:(const struct { char *x1; unsigned long long x2; }*)arg2;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

+ (bool)nu_implementsProtocol:(id)arg1;

- (id)nu_digest;
- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id*)arg2;
- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (void)replaceClassSelector:(SEL)arg1 withSelector:(SEL)arg2;
+ (void)replaceInstanceSelector:(SEL)arg1 withSelector:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation

+ (long long)nf_compareObject:(id)arg1 toObject:(id)arg2;
+ (bool)nf_object:(id)arg1 isEqualToObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (id)ic_loggingDescriptionFromLoggable:(id)arg1 isPretty:(bool)arg2;

- (void)ic_addObserver:(id)arg1 forKeyPath:(id)arg2 context:(struct { char *x1; char *x2; }*)arg3;
- (void)ic_addObserver:(id)arg1 forKeyPath:(id)arg2 context:(struct { char *x1; char *x2; }*)arg3 explicitOptions:(unsigned long long)arg4;
- (bool)ic_didAddObserverForContext:(void*)arg1 inScope:(char *)arg2;
- (id)ic_loggingDescription;
- (id)ic_loggingIdentifier;
- (id)ic_prettyLoggingDescription;
- (void)ic_removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (bool)ic_shouldIgnoreObserveValue:(id)arg1 ofObject:(id)arg2 forKeyPath:(id)arg3;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (bool)icaxRespondsToSelector:(SEL)arg1 fromExtrasProtocol:(id)arg2;
- (id)icaxValueForKey:(id)arg1;
- (id)icaxValueForKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (bool)tc_overridesClassMethod:(SEL)arg1;
+ (bool)tsu_object:(id)arg1 isEqualToObject:(id)arg2;
+ (bool)tsu_overridesClassSelector:(SEL)arg1 ofBaseClass:(Class)arg2;
+ (bool)tsu_overridesSelector:(SEL)arg1 ofBaseClass:(Class)arg2;

- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)tsu_addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)tsu_performSelector:(SEL)arg1 withValue:(id)arg2;
- (void)tsu_removeObserverForToken:(id)arg1;
- (void)tsu_runBlock;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)_pl_prettyDescription;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (id)pl_briefDescription;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_descriptionForAssertionMessage;
+ (void)px_enumeratePropertiesUsingBlock:(id /* block */)arg1;
+ (void)px_performOnceForFirstAncestorClassSubclassOf:(Class)arg1 context:(void*)arg2 block:(id /* block */)arg3;
+ (void)px_swizzleClassMethod:(SEL)arg1 withMethod:(SEL)arg2;
+ (void)px_swizzleMethod:(SEL)arg1 withMethod:(SEL)arg2;

- (long long)_px_reuseIdentifier;
- (void)_px_setReuseIdentifier:(long long)arg1;
- (id)px_descriptionForAssertionMessage;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

- (id)NSRepresentation;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (id)mt_dictionaryWithValuesForKeyPaths:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI

- (id)_accessibilityFindDescendant:(id /* block */)arg1;
- (id)_imaxFindAncestor:(id /* block */)arg1;
- (id)imaxAncestorIsKindOf:(Class)arg1;
- (bool)imaxBoolForKey:(id)arg1;
- (id)imaxDescendentOfType:(Class)arg1;
- (id)imaxElementIsAncestor:(id)arg1;
- (id)imaxIdentification;
- (void)imaxSetIdentification:(id)arg1;
- (void)imaxStorageSetRetainedValue:(id)arg1 forKey:(id)arg2;
- (id)imaxStorageValueForKey:(id)arg1;
- (id)imaxUnignoredDescendant;
- (id)imaxValueForKey:(id)arg1;
- (id)imaxValueForKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

+ (id)decodeObjectWithJSON:(id)arg1;

- (id)encodeJSON;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

- (id)rem_humanReadableIdentifier;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

+ (long long)rc_compareObject:(id)arg1 toObject:(id)arg2;
+ (bool)rc_object:(id)arg1 isEqualToObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (bool)supportsRBSXPCSecureCoding;

- (id)NSRepresentation;
- (bool)RBSIsXPCObject;
- (bool)supportsRBSXPCSecureCoding;

// Image: /System/Library/PrivateFrameworks/STSXPCHelperClient.framework/STSXPCHelperClient

- (unsigned int)objectInstanceID;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (bool)safari_isNSBoolean;
- (void)safari_postKVONotificationsForKey:(id)arg1 aroundBlock:(id /* block */)arg2;
- (void)safari_removeDeallocationSentinelForObserver:(id)arg1;
- (void)safari_setDeallocationSentinelForObserver:(id)arg1;
- (void)safari_setDeallocationSentinelForObserver:(id)arg1 withContext:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;

- (id)_getRetainedValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copy:(bool)arg4;
- (id)_getRetainedValueForKeyPathOnMainThread:(id)arg1 copy:(bool)arg2;
- (void)_scr_safeGetValueForBlock:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForKeyPath:(id)arg1;
- (void)_scr_safeGetValueForKeyPath:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForSelector:(id)arg1 lock:(id)arg2;
- (void)_scr_safePerformBlock:(id)arg1 lock:(id)arg2;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)copyValueForKeyPathOnMainThread:(id)arg1;
- (void)performAsyncBlock:(id /* block */)arg1 forThreadKey:(id)arg2;
- (id)performSelector:(SEL)arg1 withObjectsAsArray:(id)arg2;
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;
- (id)threadDescription;
- (id)valueForBlock:(id /* block */)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)valueForKeyPathOnMainThread:(id)arg1;
- (id)valueForSelector:(SEL)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copyValue:(bool)arg4 withObjects:(id)arg5;

// Image: /System/Library/PrivateFrameworks/SecureTransactionService.framework/SecureTransactionService

- (unsigned int)objectInstanceID;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (bool)sxax_shouldBeOccluded;

// Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo

- (bool)svax_shouldBeOccluded;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (void)_siriui_applyUserInfoDictionary:(id)arg1;
- (id)_siriui_protobufTypeName;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

- (void)hksp_setValue:(id)arg1 forProperty:(id)arg2;
- (id)hksp_valueForProperty:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (id)hashString;
- (void)performBlock:(id /* block */)arg1 usingQueue:(id)arg2;
- (void)performBlock:(id /* block */)arg1 withAnimationDuration:(double)arg2;
- (void)performBlockAndWait:(id /* block */)arg1 usingQueue:(id)arg2;
- (void)performBlockAndWaitOnMainThread:(id /* block */)arg1;
- (void)performBlockAndWakeUpMainThread:(id /* block */)arg1;
- (void)performBlockOnMainThread:(id /* block */)arg1;
- (void)performBlockWithoutAnimations:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (bool)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
- (bool)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
- (bool)SB_conformsToSBApplicationSceneStatusBarDescriberProviding;
- (bool)SB_conformsToSBApplicationSceneStatusBarDescribing;
- (bool)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
- (bool)SB_conformsToSceneLayoutStatusBarAssertionProviding;
- (id)_independentlyAnimatableMemberKeyPathsForProperty:(id)arg1;
- (void)_setValue:(id)arg1 byUpdatingMemberKeypaths:(id)arg2 forKeyPath:(id)arg3;
- (id)sb_switcherModifierDebugTimelineDescription;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (id)presentableButtonEventsContext;
- (id)presentableDismissalPreventionContext;
- (id)presentableGestureRecognizerPriorityContext;
- (id)presentableHomeGestureContext;
- (id)systemApertureElementContext;
- (id)systemApertureElementContextPrivate;
- (id)systemApertureHostedElementContext;

// Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks

+ (bool)sck_object:(id)arg1 isEqualToObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/StocksCore.framework/StocksCore

+ (bool)scw_object:(id)arg1 isEqualToObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (bool)__isSKUIDynamicGridSizeCacheKey;

// Image: /System/Library/PrivateFrameworks/SystemApertureUI.framework/SystemApertureUI

- (bool)_isSystemApertureTransitioningOptionEnabled:(unsigned long long)arg1;
- (void)_setSystemApertureTransitioningOption:(unsigned long long)arg1 enabled:(bool)arg2;
- (bool)isPerformingSystemApertureCustomContentTransition;
- (bool)isPerformingSystemApertureInertTransition;
- (void)setPerformingSystemApertureCustomContentTransition:(bool)arg1;
- (void)setPerformingSystemApertureInertTransition:(bool)arg1;
- (id)systemApertureLayoutSpecifyingOverrider;
- (id)uniqueElementIdentifier;
- (void)uniquelyIdentifyElement;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (bool)tsu_object:(id)arg1 isEqualToObject:(id)arg2;
+ (bool)tsu_overridesSelector:(SEL)arg1 ofBaseClass:(Class)arg2;

- (void)appendJsonStringToString:(id)arg1;
- (void)tsu_performSelector:(SEL)arg1 withValue:(id)arg2;
- (void)tsu_runBlock;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

+ (id)tv_allowedLiteralJSONObjects;

- (id)tv_JSCompatibleValue;
- (id)tv_associatedIKViewElement;
- (unsigned long long)tv_generatorType;
- (void)tv_setAssociatedIKViewElement:(id)arg1;
- (void)tv_setGeneratorType:(unsigned long long)arg1;
- (bool)tv_superOfClass:(Class)arg1 respondsToSelector:(SEL)arg2;
- (id)tv_toPropertiesJSDictionary;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (bool)_accessibilityUsesFixFor72070946;
- (void)setTs_accessibilityElementHelp:(id)arg1;
- (id)ts_accessibilityElementHelp;
- (id)ts_accessibilityLeafDescendants;
- (bool)ts_axBoolValueForKey:(id)arg1;
- (bool)ts_axHasValueForKey:(id)arg1;
- (void)ts_axSetBoolValue:(bool)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences

+ (id)tps_classIdentifier;

// Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC

+ (void)NPHRequestIdleTimeNotification;
+ (void)_NPHIdleTimeNotification:(id)arg1;
+ (void)performBlockAtIdle:(id /* block */)arg1;

- (void)nph_debounce:(SEL)arg1 delay:(double)arg2;

// Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition

- (unsigned long long)_crComputeDeviceType;

// Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore

- (id)tps_safeValueForKey:(id)arg1;
- (id)tps_safeValueForKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

+ (bool)subclassInstance:(id)arg1;
+ (bool)tmlIsJSObjectClass;
+ (void)tmlLoadCategory;
+ (id)tmlLoadObjectFromPath:(id)arg1;
+ (void)tmlMakeJSObjectClass;

- (void)addMetaObject:(id)arg1;
- (void)addTmlChild:(id)arg1;
- (bool)didEmitSignalOrMethod:(id)arg1 withArguments:(id)arg2 returnValue:(id)arg3 newReturnValue:(id*)arg4;
- (bool)emitTMLSignal:(id)arg1 withArguments:(id)arg2;
- (bool)emitTMLSignal:(id)arg1 withArguments:(id)arg2 returnValue:(id*)arg3;
- (id)getAspectsForSignalName:(id)arg1 advice:(int)arg2 createStorageIfMissing:(bool)arg3;
- (bool)hasTMLOwnerContext:(id)arg1;
- (id)metaObjects;
- (void)registerAspect:(id)arg1;
- (void)removeTMLSignal:(id)arg1;
- (void)setTMLHandler:(id)arg1 forSignal:(id)arg2;
- (void)setTMLHandlerBlock:(id /* block */)arg1 forSignal:(id)arg2;
- (bool)setTMLOwnerContext:(id)arg1;
- (void)setTMLSignalHandler:(id)arg1 block:(id /* block */)arg2;
- (void)setTMLValue:(id)arg1 forKey:(id)arg2;
- (void)setTMLValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setTmlIdentifier:(id)arg1;
- (void)setTmlParent:(id)arg1;
- (void)setTmlState:(id)arg1;
- (id)strongObjectsArray:(id)arg1;
- (void)tmlAddMethod:(id)arg1;
- (id)tmlCallMethod:(id)arg1 withArguments:(id)arg2;
- (id)tmlChildren;
- (id)tmlClass;
- (id)tmlDefaultState;
- (void)tmlDispose;
- (id)tmlEmitSignalOrCallMethod:(id)arg1 withArguments:(id)arg2;
- (id)tmlGetMethod:(id)arg1;
- (id)tmlGetMethod:(id)arg1 throwIfMissing:(bool)arg2;
- (id)tmlGetValue:(id)arg1;
- (id)tmlGetValueProxy:(id)arg1;
- (bool)tmlHasSignal:(id)arg1;
- (id)tmlIdentifier;
- (id)tmlInvoke:(id)arg1 :(id)arg2;
- (id)tmlInvokeMethodCall:(id)arg1 withArguments:(id)arg2;
- (bool)tmlIsKindOfClass:(Class)arg1;
- (void)tmlMakeJSObjectClass;
- (id)tmlParent;
- (id)tmlSignalHandlerForSignal:(id)arg1;
- (id)tmlState;
- (id)tmlStateForName:(id)arg1;
- (id)tmlValueForKey:(id)arg1;
- (id)tmlValueForKeyPath:(id)arg1;
- (void)unregisterAspect:(id)arg1;
- (void)willEmitSignalOrMethod:(id)arg1 withArguments:(id)arg2 newArguments:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

+ (void)_accessibilityClearProcessedClasses:(id)arg1;
+ (bool)_accessibilityHasUnitTestingOrientation;
+ (void)_accessibilitySetUnitTestingOrientation:(long long)arg1;
+ (id)_accessibilityTextChecker;
+ (void)_accessibilityUndoAttributedDecisionCaching:(id)arg1;
+ (long long)_accessibilityUnitTestingOrientation;
+ (void)_accessibilityUnsetUnitTestingOrientation;
+ (void)_accessibilityUpdateOpaqueFocusStateForTechnology:(id)arg1 oldElement:(id)arg2 newElement:(id)arg3;
+ (id)accessibilityBundles;
+ (void)accessibilityInitializeBundle;

- (bool)__accessibilityReadAllOnFocus;
- (id)__accessibilityRetrieveFrameOrPathDelegate;
- (bool)__accessibilitySupportsActivateAction;
- (bool)__accessibilitySupportsSecondaryActivateAction;
- (struct CGPoint { double x1; double x2; })__accessibilityVisibleScrollArea:(bool)arg1;
- (bool)_acceessibilityUIKitIsUserInteractionDisabled;
- (id)_accessibililtyLabelForTabBarButton:(id)arg1;
- (id)_accessibility2DBrailleCanvasElement;
- (id)_accessibilityAXAttributedHint;
- (id)_accessibilityAXAttributedLabel;
- (id)_accessibilityAXAttributedUserInputLabels;
- (id)_accessibilityAXAttributedUserInputLabelsIncludingFallbacks;
- (id)_accessibilityAXAttributedValue;
- (id)_accessibilityAbsoluteValue;
- (id)_accessibilityAccessibleAncestor;
- (id)_accessibilityAccessibleDescendants;
- (void)_accessibilityActionBlock:(id /* block */*)arg1 andValue:(id*)arg2 forKey:(unsigned int)arg3;
- (bool)_accessibilityActivateDragWithDescriptorDictionary:(id)arg1 forServiceName:(id)arg2;
- (bool)_accessibilityActivateKeyboardDeleteKey;
- (bool)_accessibilityActivateKeyboardReturnKey;
- (bool)_accessibilityActivateParagraphInTextViewRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (float)_accessibilityActivationDelay;
- (id)_accessibilityActiveKeyboard;
- (id)_accessibilityActiveURL;
- (void)_accessibilityAddMispellingsToAttributedString:(id)arg1;
- (void)_accessibilityAddRecentlyActivatedBundleIdFromSwitcher:(id)arg1;
- (id)_accessibilityAddToDragSessionCustomAction;
- (void)_accessibilityAddTrait:(unsigned long long)arg1;
- (bool)_accessibilityAdditionalElementOrderedLast;
- (id)_accessibilityAdditionalElements;
- (bool)_accessibilityAdjustScrollOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibilityAllContextDescriptors;
- (id)_accessibilityAllDragSourceDescriptors;
- (id)_accessibilityAllDropPointDescriptors;
- (bool)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (double)_accessibilityAllowedGeometryOverlap;
- (double)_accessibilityAllowedGeometryOverlapX;
- (id)_accessibilityAllowedPagingOverlap;
- (bool)_accessibilityAllowsActivationWithoutBeingNativeFocused;
- (bool)_accessibilityAllowsAlternativeCharacterActivation;
- (bool)_accessibilityAlternateActionForURL:(id)arg1;
- (id)_accessibilityAlternativesForTextAtPosition:(unsigned long long)arg1;
- (bool)_accessibilityAlwaysNo;
- (bool)_accessibilityAlwaysOrderedFirst;
- (bool)_accessibilityAlwaysSpeakTableHeaders;
- (bool)_accessibilityAlwaysYes;
- (id)_accessibilityAncestorFocusParcel;
- (id)_accessibilityAncestorForSiblingsWithType:(unsigned long long)arg1;
- (id)_accessibilityAncestorIsAccessibilityElementsHidden;
- (id)_accessibilityAncestorIsKindOf:(Class)arg1;
- (id)_accessibilityAncestry;
- (bool)_accessibilityAnimationsInProgress;
- (void)_accessibilityAnnouncementComplete:(id)arg1;
- (id)_accessibilityAppSwitcherApps;
- (bool)_accessibilityAppendOrderedChildLeafDescendantsToArray:(id)arg1 count:(unsigned long long)arg2 shouldStopAtRemoteElement:(bool)arg3 options:(id)arg4 treeLogger:(id)arg5;
- (id)_accessibilityApplication;
- (bool)_accessibilityApplicationHandleButtonAction:(int)arg1;
- (bool)_accessibilityApplicationIsRTL;
- (long long)_accessibilityApplicationOrientation;
- (id)_accessibilityApplicationSemanticContext;
- (id)_accessibilityApplicationWindowContextIDs;
- (id /* block */)_accessibilityAttributeMatcher:(long long)arg1;
- (id)_accessibilityAttributedTextRetrieval;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (id)_accessibilityAuditIssuesWithOptions:(id)arg1;
- (id)_accessibilityAuditVisibleElementsHonoringGroups:(bool)arg1;
- (bool)_accessibilityAuthenticatedPasteWithValue:(id)arg1;
- (id)_accessibilityAutomaticIdentifier;
- (bool)_accessibilityAutomationHitTestReverseOrder;
- (unsigned long long)_accessibilityAutomationType;
- (bool)_accessibilityAutoscrollInDirection:(unsigned long long)arg1;
- (void)_accessibilityAutoscrollScrollToBottom;
- (void)_accessibilityAutoscrollScrollToTop;
- (id)_accessibilityAutoscrollTarget;
- (unsigned long long)_accessibilityAvailableAutoscrollDirections;
- (id)_accessibilityBackgroundTextColorAttribute;
- (bool)_accessibilityBackingElementIsValid;
- (bool)_accessibilityBannerIsSticky;
- (id)_accessibilityBaseHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityBaseImplementationUserTestingChildren;
- (bool)_accessibilityBasePerformOrbGesture:(long long)arg1;
- (bool)_accessibilityBaseScrollToVisible;
- (bool)_accessibilityBeginUndoableTextInsertion;
- (void)_accessibilityBold;
- (id /* block */)_accessibilityBoldTextMatch;
- (bool)_accessibilityBookShowsDualPages;
- (unsigned long long)_accessibilityBoundaryEdges;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityBoundsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityBrailleMap;
- (id)_accessibilityBrailleMapsFromGraphData;
- (id)_accessibilityBriefLabel;
- (id)_accessibilityBundleIdentifier;
- (bool)_accessibilityCameraIrisOpen;
- (bool)_accessibilityCanAppearInContextMenuPreview;
- (bool)_accessibilityCanBeConsideredAsMainWindow;
- (bool)_accessibilityCanBeConsideredMediaAnalysisElement;
- (bool)_accessibilityCanBeFirstResponder;
- (bool)_accessibilityCanBeFirstResponderWhenNotAnElement;
- (bool)_accessibilityCanBecomeNativeFocused;
- (bool)_accessibilityCanDeleteTableViewCell;
- (bool)_accessibilityCanDismissPopoverController:(id)arg1;
- (bool)_accessibilityCanDisplayMultipleControllers;
- (bool)_accessibilityCanPerformAction:(int)arg1;
- (bool)_accessibilityCanPerformEscapeAction;
- (bool)_accessibilityCanScrollInAtLeastOneDirection;
- (id)_accessibilityCellWithRowIndex:(long long)arg1 column:(long long)arg2 containingView:(id)arg3;
- (void)_accessibilityChangeToKeyplane:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityCharacterRangeForPosition:(unsigned long long)arg1;
- (id)_accessibilityChartDescriptor;
- (id)_accessibilityChartElement;
- (id)_accessibilityChartStructureDescription;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityChildrenUnionContentFrame;
- (id)_accessibilityCirclePathBasedOnBoundsWidth;
- (void)_accessibilityClearLastFocusedChild;
- (id)_accessibilityCollectionViewCellContentSubviews;
- (bool)_accessibilityCollectionViewCellScrollShouldInformScrollDelegate;
- (long long)_accessibilityCollectionViewItemsPerRow;
- (id /* block */)_accessibilityColorChangeMatch;
- (unsigned long long)_accessibilityColumnCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityColumnRange;
- (id)_accessibilityCommonStylingRotors;
- (long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityCompareFrameForScrollParent:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4;
- (long long)_accessibilityCompareGeometryForViewOrDictionary:(id)arg1;
- (bool)_accessibilityContainedByTableLogicIsEnabledOutsideOfWebContext;
- (id)_accessibilityContainerForAccumulatingCustomRotorItems;
- (id)_accessibilityContainerInDirection:(bool)arg1;
- (id)_accessibilityContainerToStopVisibilityCheck;
- (id)_accessibilityContainerTypes;
- (id)_accessibilityContainingParentForOrdering;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityContentFrame;
- (struct CGPoint { double x1; double x2; })_accessibilityContentOffset;
- (id)_accessibilityContextDescriptors;
- (id)_accessibilityContextDrawingAnnotations;
- (unsigned int)_accessibilityContextId;
- (id)_accessibilityControlDescendantWithAction:(SEL)arg1;
- (id)_accessibilityControlDescendantWithTarget:(id)arg1;
- (void)_accessibilityConvertStyleAttributesToAccessibility:(id)arg1;
- (id)_accessibilityConvertSystemBoundedPathToContextSpace:(id)arg1;
- (struct CGPoint { double x1; double x2; })_accessibilityConvertSystemBoundedScreenPointToContextSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityConvertSystemBoundedScreenRectToContextSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_accessibilityCopy;
- (id)_accessibilityCurrentStatus;
- (id)_accessibilityCurrentlyFocusedElementForTechnology:(id)arg1;
- (id)_accessibilityCustomActionGroupIdentifier;
- (id)_accessibilityCustomActionNamesAndIdentifiers;
- (id)_accessibilityCustomActions;
- (id)_accessibilityCustomContent;
- (id)_accessibilityCustomRotorResultHelper:(id)arg1 array:(id)arg2;
- (long long)_accessibilityCustomRotorTypeForString:(id)arg1;
- (void)_accessibilityCut;
- (id)_accessibilityDOMAttributes;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibilityDataSeriesCategoryLabelsForAxis:(long long)arg1;
- (id)_accessibilityDataSeriesGridlinePositionsForAxis:(long long)arg1;
- (bool)_accessibilityDataSeriesIncludesTrendlineInSonification;
- (id)_accessibilityDataSeriesMaximumValueForAxis:(long long)arg1;
- (id)_accessibilityDataSeriesMinimumValueForAxis:(long long)arg1;
- (id)_accessibilityDataSeriesName;
- (double)_accessibilityDataSeriesSonificationDuration;
- (bool)_accessibilityDataSeriesSupportsSonification;
- (bool)_accessibilityDataSeriesSupportsSummarization;
- (id)_accessibilityDataSeriesTitleForAxis:(long long)arg1;
- (long long)_accessibilityDataSeriesType;
- (id)_accessibilityDataSeriesUnitLabelForAxis:(long long)arg1;
- (id)_accessibilityDataSeriesValueDescriptionForPosition:(double)arg1 axis:(long long)arg2;
- (id)_accessibilityDataSeriesValuesForAxis:(long long)arg1;
- (unsigned long long)_accessibilityDatePickerComponentType;
- (id)_accessibilityDateTimePickerValues;
- (void)_accessibilityDecreaseAutoscrollSpeed;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (id)_accessibilityDefaultFocusGroupIdentifier;
- (void)_accessibilityDefine;
- (double)_accessibilityDelayBeforeUpdatingOnActivation;
- (void)_accessibilityDelete;
- (bool)_accessibilityDescendantElementAtIndexPathIsValid:(id)arg1;
- (id)_accessibilityDescendantOfType:(Class)arg1;
- (void)_accessibilityDetectAnimationsNonActive;
- (void)_accessibilityDidChangeSonificationPlaybackPosition:(double)arg1;
- (bool)_accessibilityDidDeleteTableViewCell;
- (void)_accessibilityDidFocusOnApplication;
- (void)_accessibilityDidFocusOnOpaqueElement:(id)arg1 technology:(id)arg2;
- (void)_accessibilityDidMoveToTabBar;
- (void)_accessibilityDidReuseOpaqueElementView:(id)arg1;
- (bool)_accessibilityDidSetOpaqueElementProvider;
- (long long)_accessibilityDigitalCrownScrollAmount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityDirectInteractionFrame;
- (id)_accessibilityDirectTouchOptionsAttribute;
- (bool)_accessibilityDismissAlternativeKeyPicker;
- (bool)_accessibilityDispatchKeyboardAction:(id)arg1;
- (bool)_accessibilityDisplayFocusIndicatorForHoverTextView;
- (unsigned int)_accessibilityDisplayId;
- (id)_accessibilityDisplayPathForScreenPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })_accessibilityDisplayPointForSceneReferencePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityDisplayRectForSceneReferenceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)_accessibilityDistance:(struct CGPoint { double x1; double x2; })arg1 forAngle:(float)arg2 toRoad:(id)arg3;
- (float)_accessibilityDistanceFromEndOfRoad:(struct CGPoint { double x1; double x2; })arg1 forAngle:(float)arg2;
- (id)_accessibilityDragSourceDescriptorAuxiliaryDictionary;
- (id)_accessibilityDragSourceDescriptorDictionaryRepresentations;
- (bool)_accessibilityDrawsFocusRingWhenChildrenFocused;
- (id)_accessibilityDropPointDescriptorAuxiliaryDictionary;
- (id)_accessibilityDropPointDescriptorDictionaryRepresentations;
- (unsigned int)_accessibilityEffectiveMediaAnalysisOptions;
- (id)_accessibilityElementCommunityIdentifier;
- (id)_accessibilityElementForFindSessionResult;
- (id)_accessibilityElementForTextInsertionAndDeletion;
- (bool)_accessibilityElementHasImage;
- (id)_accessibilityElementHelp;
- (bool)_accessibilityElementIsBeingHitTested;
- (bool)_accessibilityElementServesAsHeadingLandmark;
- (bool)_accessibilityElementShouldBeInvalid;
- (id)_accessibilityElementStoredUserLabel;
- (id)_accessibilityElementToFocusForAppearanceScreenChange;
- (bool)_accessibilityElementVisibilityAffectsLayout;
- (id)_accessibilityElements;
- (void)_accessibilityElementsDescriptionProcess:(id)arg1 tabCount:(long long)arg2;
- (id)_accessibilityElementsForSearchParameter:(id)arg1;
- (id)_accessibilityElementsInDirectionWithCount:(unsigned long long)arg1 options:(id)arg2;
- (id)_accessibilityElementsWithSemanticContext:(id)arg1;
- (id)_accessibilityEncodedHierarchyData;
- (bool)_accessibilityEndUndoableTextInsertion;
- (void)_accessibilityEnumerateSiblingsFromOrderedChildrenContainer:(id)arg1 fromChildAtIndex:(long long)arg2 headerIndex:(long long)arg3 footerIndex:(long long)arg4 options:(id)arg5 usingBlock:(id /* block */)arg6;
- (bool)_accessibilityEnumerateSiblingsWithParent:(id*)arg1 options:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)_accessibilityEquivalenceTag;
- (long long)_accessibilityExpandedStatus;
- (bool)_accessibilityExpandedStatusTogglesOnActivate;
- (unsigned long long)_accessibilityExplorerElementReadPriority;
- (id)_accessibilityExplorerElements;
- (id)_accessibilityExtendedLabelForFocusParcelWithLabel:(id)arg1;
- (id)_accessibilityFBSceneIdentifier;
- (id)_accessibilityFKAArrowKeysHandled;
- (bool)_accessibilityFKAShouldBeProcessed;
- (bool)_accessibilityFKAShouldIncludeViewsAsElements;
- (bool)_accessibilityFKAShouldProcessChildren;
- (bool)_accessibilityFauxCollectionViewCellsDisabled;
- (bool)_accessibilityFauxTableViewCellsDisabled;
- (id)_accessibilityFilenameForAttachmentCID:(id)arg1;
- (id)_accessibilityFilterInteractionLocationDescriptorsForVisible:(id)arg1;
- (id)_accessibilityFindAncestor:(id /* block */)arg1 startWithSelf:(bool)arg2;
- (id)_accessibilityFindAncestor:(id /* block */)arg1 startWithSelf:(bool)arg2 findTopmostAncestor:(bool)arg3;
- (id)_accessibilityFindDescendant:(id /* block */)arg1;
- (id)_accessibilityFindElementInDirection:(long long)arg1 searchType:(long long)arg2 allowOutOfBoundsChild:(bool)arg3;
- (id)_accessibilityFindElementInDirection:(long long)arg1 searchType:(long long)arg2 allowOutOfBoundsChild:(bool)arg3 startingTouchContainer:(id)arg4 honorGroups:(bool)arg5;
- (void)_accessibilityFindSearchResult:(bool)arg1 withString:(id)arg2;
- (id)_accessibilityFindSubviewDescendant:(id /* block */)arg1;
- (id)_accessibilityFindSubviewDescendantsPassingTest:(id /* block */)arg1;
- (id)_accessibilityFindUnsortedDescendantsPassingTest:(id /* block */)arg1;
- (id)_accessibilityFindUnsortedSubviewDescendantsPassingTest:(id /* block */)arg1;
- (id)_accessibilityFindViewAncestor:(id /* block */)arg1 startWithSelf:(bool)arg2;
- (id)_accessibilityFindViewControllerDescendant:(id /* block */)arg1;
- (id)_accessibilityFindViewControllerDescendantOfType:(Class)arg1;
- (id)_accessibilityFirstContainedElementForTechnology:(id)arg1 honoringGroups:(bool)arg2 shouldAlwaysScroll:(bool)arg3;
- (id)_accessibilityFirstDescendant;
- (id)_accessibilityFirstElement;
- (id)_accessibilityFirstElementForFocus;
- (id)_accessibilityFirstElementForFocusHonoringGroups:(bool)arg1;
- (id)_accessibilityFirstElementForFocusWithOptions:(id)arg1;
- (id)_accessibilityFirstElementForReadFromTop;
- (id)_accessibilityFirstElementsForSpeakThis;
- (id)_accessibilityFirstOpaqueElement;
- (id)_accessibilityFirstOpaqueElementForFocus;
- (id)_accessibilityFirstOpaqueElementForFocusWithOptions:(id)arg1;
- (id)_accessibilityFirstOpaqueElementWithOptions:(id)arg1;
- (id)_accessibilityFirstResponderForKeyWindow;
- (id)_accessibilityFirstResponderForWindow:(id)arg1;
- (id)_accessibilityFirstVisibleItem;
- (id)_accessibilityFirstWebElement;
- (id)_accessibilityFocusAbsoluteFirstLastOpaqueElement:(bool)arg1 technology:(id)arg2 honorsGroups:(bool)arg3 shouldAlwaysScroll:(bool)arg4;
- (id)_accessibilityFocusContainer;
- (bool)_accessibilityFocusContainerMoveFocusWithHeading:(unsigned long long)arg1 byGroup:(bool)arg2;
- (bool)_accessibilityFocusContainerMoveFocusWithHeading:(unsigned long long)arg1 toElementMatchingQuery:(id)arg2;
- (unsigned long long)_accessibilityFocusParcelChildrenCount:(unsigned long long)arg1;
- (id)_accessibilityFocusRingAncestor;
- (long long)_accessibilityFocusRingStyle;
- (id)_accessibilityFocusRingTintColor;
- (id)_accessibilityFocusStatePerTechnology;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityFocusableFrameForZoom;
- (id /* block */)_accessibilityFontChangeMatch;
- (double)_accessibilityFontSize;
- (id)_accessibilityForegroundTextColorAttribute;
- (id)_accessibilityFrameDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityFrameForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityFrameForSorting;
- (bool)_accessibilityFrameSupportsMediaAnalysis;
- (bool)_accessibilityFullscreenVideoViewIsVisible;
- (id)_accessibilityFuzzyHitTestElements;
- (id)_accessibilityGeometrySortedElements:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityGesturePracticeRegion;
- (void*)_accessibilityGetBlockForAttribute:(long long)arg1;
- (id)_accessibilityGroupIdentifier;
- (id)_accessibilityGroupedParent;
- (id)_accessibilityGuideElementHeaderText;
- (id)_accessibilityGuideElementInDirection:(bool)arg1;
- (void)_accessibilityHandleATFocused:(bool)arg1 assistiveTech:(id)arg2;
- (bool)_accessibilityHandleMagicTap;
- (bool)_accessibilityHandleMagicTapForPronunciation;
- (bool)_accessibilityHandlePublicScroll:(long long)arg1;
- (bool)_accessibilityHandlesRemoteFocusMovement;
- (bool)_accessibilityHandlesTabKey;
- (bool)_accessibilityHandwritingAttributeAcceptsContractedBraille;
- (unsigned long long)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (unsigned long long)_accessibilityHandwritingAttributeAllowedCharacterSetsForKeyboardType:(long long)arg1;
- (id)_accessibilityHandwritingAttributeLanguage;
- (unsigned long long)_accessibilityHandwritingAttributePreferredCharacterSet;
- (unsigned long long)_accessibilityHandwritingAttributePreferredCharacterSetForKeyboardType:(long long)arg1;
- (bool)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (bool)_accessibilityHandwritingAttributeShouldPlayKeyboardSecureClickSound;
- (id)_accessibilityHandwritingAttributes;
- (id)_accessibilityHandwritingElement;
- (bool)_accessibilityHasActionBlockForKey:(unsigned int)arg1;
- (bool)_accessibilityHasBadge;
- (bool)_accessibilityHasDeletableText;
- (bool)_accessibilityHasDescendantOfType:(Class)arg1;
- (bool)_accessibilityHasDragDestinations;
- (bool)_accessibilityHasDragSources;
- (bool)_accessibilityHasNativeFocus;
- (bool)_accessibilityHasNativeFocusableElements;
- (bool)_accessibilityHasOrderedChildren;
- (bool)_accessibilityHasTextOperations;
- (bool)_accessibilityHasVariantKeys;
- (bool)_accessibilityHasVisibleFrame;
- (id)_accessibilityHeaderElement;
- (id)_accessibilityHeaderElementsForColumn:(unsigned long long)arg1;
- (id)_accessibilityHeaderElementsForRow:(unsigned long long)arg1;
- (id)_accessibilityHeadingLevel;
- (void)_accessibilityHideKeyboard;
- (bool)_accessibilityHierarchyIsRTL;
- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityHitTestAdditionalElements:(struct CGPoint { double x1; double x2; })arg1 event:(id)arg2;
- (bool)_accessibilityHitTestReverseOrder;
- (bool)_accessibilityHitTestShouldFallbackToNearestChild;
- (bool)_accessibilityHitTestShouldUseWindowBounds;
- (id)_accessibilityHitTestSupplementaryViews:(struct CGPoint { double x1; double x2; })arg1 event:(id)arg2;
- (id)_accessibilityHitTestSupplementaryViews:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 withEvent:(id)arg3;
- (id)_accessibilityHitTestingObscuredScreenAllowedViews;
- (bool)_accessibilityHitTestsStatusBar;
- (id)_accessibilityHorizontalScrollBarElement;
- (long long)_accessibilityHorizontalSizeClass;
- (int)_accessibilityHostPid;
- (bool)_accessibilityIgnoreDelegate;
- (void)_accessibilityIgnoreNextNotification:(unsigned int)arg1;
- (void)_accessibilityIgnoreNextPostPasteboardTextOperation:(id)arg1;
- (bool)_accessibilityIgnoresStatusBarFrame;
- (id)_accessibilityImageData;
- (bool)_accessibilityImplementsDefaultRowRange;
- (bool)_accessibilityIncludeDuringContentReading;
- (bool)_accessibilityIncludeRoleDescription;
- (bool)_accessibilityIncludeRoleInGroupNavigationOnly;
- (void)_accessibilityIncreaseAutoscrollSpeed;
- (bool)_accessibilityIncreaseLayoutBounds;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (long long)_accessibilityIndexForPickerString:(id)arg1;
- (id)_accessibilityIndexPath;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityIndexPathAsRange;
- (unsigned long long)_accessibilityInheritedTraits;
- (id)_accessibilityInputIdentifierForKeyboard;
- (void)_accessibilityInsertText:(id)arg1;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;
- (bool)_accessibilityInsertTextWithAlternatives:(id)arg1;
- (long long)_accessibilityInterfaceOrientationForScreenCoordinates;
- (bool)_accessibilityInternalHandleStartStopToggle;
- (id)_accessibilityInternalTextLinkCustomRotors;
- (id)_accessibilityInternalTextLinks;
- (bool)_accessibilityIsAccessibilityUIServer;
- (bool)_accessibilityIsAutoscrolling;
- (bool)_accessibilityIsAwayAlertElement;
- (bool)_accessibilityIsAwayAlertElementNew;
- (bool)_accessibilityIsBannerNotificationElement;
- (bool)_accessibilityIsChartElement;
- (bool)_accessibilityIsContainedByPreferredNativeFocusElement;
- (bool)_accessibilityIsContainedByVideoElement;
- (bool)_accessibilityIsDescendantOfElement:(id)arg1;
- (bool)_accessibilityIsDictating;
- (bool)_accessibilityIsDraggableElementAttribute;
- (bool)_accessibilityIsEscapable;
- (bool)_accessibilityIsFKARunningForFocusItem;
- (bool)_accessibilityIsFirstElementForFocus;
- (bool)_accessibilityIsFirstSibling;
- (bool)_accessibilityIsFirstSiblingForType:(unsigned long long)arg1;
- (bool)_accessibilityIsFocusContainer;
- (bool)_accessibilityIsFocusForHoverTextRunningForFocusItem;
- (bool)_accessibilityIsFocusParcel;
- (bool)_accessibilityIsFrameOutOfBounds;
- (bool)_accessibilityIsFrameOutOfBoundsConsideringScrollParents:(bool)arg1;
- (bool)_accessibilityIsGroupedParent;
- (bool)_accessibilityIsGuideElement;
- (bool)_accessibilityIsInAppSwitcher;
- (bool)_accessibilityIsInCollectionCell;
- (bool)_accessibilityIsInFolder;
- (bool)_accessibilityIsInJindo;
- (bool)_accessibilityIsInTabBar;
- (bool)_accessibilityIsInTableCell;
- (bool)_accessibilityIsInternationalKeyboardKey;
- (bool)_accessibilityIsIsolatedWindow;
- (bool)_accessibilityIsKeyboardPassthroughInputAccessoryView;
- (bool)_accessibilityIsLastSibling;
- (bool)_accessibilityIsLastSiblingForType:(unsigned long long)arg1;
- (bool)_accessibilityIsLeafNodeWithOptions:(id)arg1;
- (bool)_accessibilityIsMacVisualAppearance;
- (bool)_accessibilityIsMainWindow;
- (bool)_accessibilityIsMap;
- (bool)_accessibilityIsMathTouchExplorationView;
- (bool)_accessibilityIsNonDismissableStatusBarElement;
- (bool)_accessibilityIsNotFirstElement;
- (bool)_accessibilityIsOrnamentWindow;
- (bool)_accessibilityIsPHAssetLocallyAvailable;
- (bool)_accessibilityIsPressed;
- (bool)_accessibilityIsRTL;
- (bool)_accessibilityIsRealtimeElement;
- (bool)_accessibilityIsRemoteElement;
- (bool)_accessibilityIsRootElementForElementTraversal;
- (bool)_accessibilityIsScannerElement;
- (bool)_accessibilityIsScannerGroup;
- (bool)_accessibilityIsScrollAncestor;
- (bool)_accessibilityIsScrollBarIndicator;
- (bool)_accessibilityIsScrollable;
- (bool)_accessibilityIsSoftwareKeyboardMimic;
- (bool)_accessibilityIsSortPriorityContainer;
- (bool)_accessibilityIsSpeakThisElement;
- (bool)_accessibilityIsStarkElement;
- (bool)_accessibilityIsStrongPasswordField;
- (bool)_accessibilityIsSupportedGestureRecognizer;
- (bool)_accessibilityIsSwiftUIHostingView;
- (bool)_accessibilityIsTableCell;
- (bool)_accessibilityIsTitleElement;
- (bool)_accessibilityIsTouchContainer;
- (bool)_accessibilityIsTourGuideRunning;
- (bool)_accessibilityIsUserInteractionEnabled;
- (bool)_accessibilityIsUsingRemoteParentActivateAction;
- (bool)_accessibilityIsVerticalAdjustableElement;
- (bool)_accessibilityIsViewDescendantOfElement:(id)arg1;
- (bool)_accessibilityIsVisibleByCompleteHitTest;
- (bool)_accessibilityIsVisibleByCompleteHitTest:(bool)arg1;
- (bool)_accessibilityIsWebDocumentView;
- (void)_accessibilityItalic;
- (id /* block */)_accessibilityItalicTextMatch;
- (bool)_accessibilityIterateParentsForTestBlock:(id /* block */)arg1;
- (void)_accessibilityIterateScrollParentsUsingBlock:(id /* block */)arg1;
- (void)_accessibilityIterateScrollParentsUsingBlock:(id /* block */)arg1 includeSelf:(bool)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_accessibilityJailTransform;
- (void)_accessibilityJumpToTableIndex:(id)arg1;
- (id)_accessibilityKeyCommands;
- (bool)_accessibilityKeyCommandsShouldOverrideKeyCommands;
- (bool)_accessibilityKeyboardIsContinuousPathAvailable;
- (bool)_accessibilityKeyboardIsContinuousPathTracking;
- (bool)_accessibilityKeyboardKeyAllowsTouchTyping;
- (id)_accessibilityKeyboardKeyEnteredString;
- (id)_accessibilityKeyboardKeyForString:(id)arg1;
- (bool)_accessibilityKeyboardKeyHasSignificantAlternateActions;
- (bool)_accessibilityKeyboardSupportsGestureMode;
- (bool)_accessibilityLanguageOverriddesUser;
- (id)_accessibilityLastElementsUpdatedWithContainerElementReferences;
- (bool)_accessibilityLastHitTestNearBorder;
- (id)_accessibilityLastOpaqueElement;
- (id)_accessibilityLastOpaqueElementWithOptions:(id)arg1;
- (id)_accessibilityLaunchableApps;
- (id)_accessibilityLeafDescendantsWithCount:(unsigned long long)arg1 options:(id)arg2;
- (id)_accessibilityLeafDescendantsWithCount:(unsigned long long)arg1 shouldStopAtRemoteElement:(bool)arg2 options:(id)arg3;
- (id)_accessibilityLeafDescendantsWithCount:(unsigned long long)arg1 shouldStopAtRemoteElement:(bool)arg2 options:(id)arg3 treeLogger:(id)arg4;
- (id)_accessibilityLeafDescendantsWithOptions:(id)arg1;
- (double)_accessibilityLeftOpaqueScrollViewContentOffsetLimit;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (long long)_accessibilityLineEndPosition;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (long long)_accessibilityLineStartPosition;
- (id)_accessibilityLinkedUIElements;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityLoadAccessibilityInformationSupplementaryItems;
- (bool)_accessibilityLoadURL:(id)arg1;
- (double)_accessibilityMagnifierZoomLevel;
- (id)_accessibilityMapDetailedInfoAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)_accessibilityMapFeatureType;
- (void)_accessibilityMapsExplorationBegin;
- (void)_accessibilityMapsExplorationBeginFromCurrentElement;
- (void)_accessibilityMapsExplorationContinueWithVertexIndex:(unsigned long long)arg1;
- (id)_accessibilityMapsExplorationCurrentIntersectionDescription;
- (id)_accessibilityMapsExplorationCurrentLocation;
- (id)_accessibilityMapsExplorationCurrentRoadsWithAngles;
- (id)_accessibilityMapsExplorationDecreaseVerbosity;
- (void)_accessibilityMapsExplorationEnd;
- (id)_accessibilityMapsExplorationIncreaseVerbosity;
- (bool)_accessibilityMapsExplorationIsActive;
- (bool)_accessibilityMapsExplorationIsPending;
- (void)_accessibilityMapsExplorationRecordTouchpoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_accessibilityMarkElementForVisiblePointHitTest:(bool)arg1;
- (id)_accessibilityMarkerForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibilityMarkerLineEndsForMarkers:(id)arg1;
- (id)_accessibilityMarkersForPoints:(id)arg1;
- (id)_accessibilityMarkersForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGPoint { double x1; double x2; })_accessibilityMaxScrubberPosition;
- (double)_accessibilityMaxValue;
- (id)_accessibilityMediaAnalysisElement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityMediaAnalysisFrame;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (bool)_accessibilityMimicsTextInputResponder;
- (struct CGPoint { double x1; double x2; })_accessibilityMinScrubberPosition;
- (double)_accessibilityMinValue;
- (id)_accessibilityMisspelledRotor;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityMisspelledWordIn:(id)arg1 searchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 next:(bool)arg3;
- (void)_accessibilityMoveDown;
- (id)_accessibilityMoveFocusToNextOpaqueElementForTechnology:(id)arg1 direction:(long long)arg2 searchType:(long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)_accessibilityMoveFocusToNextOpaqueElementForTechnology:(id)arg1 direction:(long long)arg2 searchType:(long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 shouldScrollToVisible:(bool)arg5;
- (id)_accessibilityMoveFocusToNextOpaqueElementForTechnology:(id)arg1 direction:(long long)arg2 searchType:(long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 shouldScrollToVisible:(bool)arg5 honorsGroups:(bool)arg6;
- (bool)_accessibilityMoveFocusWithHeading:(unsigned long long)arg1;
- (bool)_accessibilityMoveFocusWithHeading:(unsigned long long)arg1 byGroup:(bool)arg2;
- (bool)_accessibilityMoveFocusWithHeading:(unsigned long long)arg1 toElementMatchingQuery:(id)arg2;
- (void)_accessibilityMoveSelectionToMarker:(id)arg1;
- (void)_accessibilityMoveUp;
- (id)_accessibilityNativeFocusAncestor;
- (id)_accessibilityNativeFocusElement;
- (id)_accessibilityNativeFocusPreferredElement;
- (bool)_accessibilityNativeFocusPreferredElementIsValid;
- (id)_accessibilityNativeFocusableElements:(id)arg1;
- (id)_accessibilityNativeFocusableElements:(id)arg1 matchingBlock:(id /* block */)arg2;
- (id)_accessibilityNativeFocusableElements:(id)arg1 matchingBlock:(id /* block */)arg2 forExistenceCheckOnly:(bool)arg3;
- (id)_accessibilityNativeFocusableElements:(id)arg1 withQueryString:(id)arg2;
- (unsigned long long)_accessibilityNativeTraits;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_accessibilityNavigationControllerInset;
- (id)_accessibilityNextElementsForSpeakThis;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibilityNextTextRangeUsingTextStyling:(id)arg1 attributeMatch:(id /* block */)arg2;
- (unsigned long long)_accessibilityNotificationCount;
- (id)_accessibilityNotificationSummary:(unsigned long long)arg1;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (id)_accessibilityObscuredScreenAllowedViews;
- (struct CGPoint { double x1; double x2; })_accessibilityOffsetForOpaqueElementDirection:(long long)arg1;
- (bool)_accessibilityOnlyComparesByXAxis;
- (id)_accessibilityOpaqueElementParent;
- (bool)_accessibilityOpaqueElementProvider;
- (void)_accessibilityOpaqueElementScrollCleanup;
- (void)_accessibilityOpaqueElementScrollToDirection:(long long)arg1;
- (bool)_accessibilityOpaqueElementScrollsContentIntoView;
- (id)_accessibilityOpaqueHeaderElementInDirection:(long long)arg1 childElement:(id)arg2;
- (id)_accessibilityOrderedChildrenContainer;
- (id)_accessibilityOrderedChildrenContainerWithinElements:(id)arg1;
- (long long)_accessibilityOrientation;
- (long long)_accessibilityOrientationForCompareGeometryForApplication:(id)arg1;
- (bool)_accessibilityOverridesInstructionsHint;
- (bool)_accessibilityOverridesInvalidFrames;
- (bool)_accessibilityOverridesInvisibility;
- (bool)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)arg1;
- (id)_accessibilityPHAssetLocalIdentifier;
- (id)_accessibilityPageContent;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (id)_accessibilityPageTextMarkerRange;
- (id)_accessibilityPagingEnabled;
- (id)_accessibilityParentCollectionView;
- (id)_accessibilityParentForFindingScrollParent;
- (id)_accessibilityParentFromOrderedChildrenContainer:(id)arg1;
- (id)_accessibilityParentTableView;
- (id)_accessibilityParentView;
- (void)_accessibilityPaste;
- (void)_accessibilityPauseAutoscrolling;
- (bool)_accessibilityPerformCustomActionWithIdentifier:(id)arg1;
- (bool)_accessibilityPerformEscape;
- (bool)_accessibilityPerformLegacyCustomAction:(id)arg1;
- (bool)_accessibilityPerformOrbGesture:(long long)arg1;
- (id)_accessibilityPerformPublicCustomRotorSearch:(id)arg1 searchDirection:(long long)arg2 currentItem:(id)arg3;
- (bool)_accessibilityPerformUserTestingAction:(id)arg1;
- (id)_accessibilityPhotoDescription;
- (id)_accessibilityPhotoLibraryURL;
- (long long)_accessibilityPickerType;
- (id /* block */)_accessibilityPlainTextMatch;
- (void)_accessibilityPlayKeyboardClickSound;
- (void)_accessibilityPlaySystemSound:(int)arg1;
- (unsigned long long)_accessibilityPositionInDirection:(long long)arg1 offset:(unsigned long long)arg2 forPosition:(unsigned long long)arg3;
- (void)_accessibilityPostAnnouncement:(id)arg1;
- (void)_accessibilityPostNotificationHelper:(id)arg1;
- (void)_accessibilityPostPasteboardTextForOperation:(id)arg1;
- (void)_accessibilityPostPasteboardTextForOperation:(id)arg1 associatedObject:(id)arg2;
- (id)_accessibilityPostProcessValueForAutomation:(id)arg1;
- (void)_accessibilityPostValueChangedNotificationWithChangeType:(struct __CFString { }*)arg1;
- (void)_accessibilityPostValueChangedNotificationWithChangeType:(struct __CFString { }*)arg1 insertedText:(id)arg2;
- (void)_accessibilityPostValueChangedNotificationWithInsertedText:(id)arg1;
- (SEL)_accessibilityPotentiallyAttributedSelectorForNonAttributedSelector:(SEL)arg1 attributedSelector:(SEL)arg2;
- (id)_accessibilityPotentiallyAttributedValueForNonAttributedSelector:(SEL)arg1 attributedSelector:(SEL)arg2;
- (id)_accessibilityPreferredScrollActions;
- (bool)_accessibilityPrefersNonAttributedAttributeWithOverrideSelector:(SEL)arg1 nonAttributedSelector:(SEL)arg2 attributedSelector:(SEL)arg3;
- (bool)_accessibilityPrefersNonAttributedHint;
- (bool)_accessibilityPrefersNonAttributedLabel;
- (bool)_accessibilityPrefersNonAttributedValue;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (id)_accessibilityPrivateCustomActionsElement;
- (id)_accessibilityProcessChildrenForParameter:(id)arg1;
- (id)_accessibilityProcessElementsInDirection:(long long)arg1 forParameter:(id)arg2;
- (void)_accessibilityProcessScannerGroupElementPieces:(id)arg1;
- (id)_accessibilityProcessedLabelAttribute;
- (id)_accessibilityProxyView;
- (id)_accessibilityProxyViewAncestorWhenMissingWindow;
- (id)_accessibilityPublicCustomRotorIdForSystemType:(id)arg1;
- (long long)_accessibilityPublicCustomRotorLinkCount:(id)arg1;
- (id)_accessibilityPublicCustomRotorName:(id)arg1;
- (bool)_accessibilityPublicCustomRotorVisibleInTouchRotor:(id)arg1;
- (id)_accessibilityPublicCustomRotors;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRangeForLineNumber:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRangeForTextMarker:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRangeForTextMarkers:(id)arg1;
- (id)_accessibilityRawIsSpeakThisElement;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRawRangeForUITextRange:(id)arg1;
- (void)_accessibilityRawSetIsSpeakThisElement:(id)arg1;
- (bool)_accessibilityReadAllContinuesWithScroll;
- (bool)_accessibilityReadAllOnFocus;
- (bool)_accessibilityRealtimeCompleted;
- (bool)_accessibilityRealtimeHasUnread;
- (id)_accessibilityRecentlyActivatedApplicationBundleIdentifiers;
- (void)_accessibilityRedo;
- (void)_accessibilityRegisterForDictationLifecycleNotifications;
- (long long)_accessibilityReinterpretVoiceOverCommand:(long long)arg1;
- (bool)_accessibilityRemembersLastFocusedChild;
- (id)_accessibilityRemoteApplication;
- (id)_accessibilityRemoteElementForSceneID:(id)arg1;
- (bool)_accessibilityRemoteElementShouldHitTestHostProcess;
- (id)_accessibilityRemoteParent;
- (int)_accessibilityRemotePid;
- (id)_accessibilityRemoteSceneID;
- (void)_accessibilityRemoveActionBlockForKey:(unsigned int)arg1;
- (void)_accessibilityRemoveAllActionBlocks;
- (void)_accessibilityRemoveRecentlyActivatedBundleIdFromSwitcher:(id)arg1;
- (void)_accessibilityRemoveTrait:(unsigned long long)arg1;
- (void)_accessibilityReplace;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (bool)_accessibilityReplaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (bool)_accessibilityRepresentsInfiniteCollection;
- (bool)_accessibilityRequiresLaTeXInput;
- (bool)_accessibilityResetBannerTimer;
- (id)_accessibilityResolvedEditingStyles;
- (bool)_accessibilityRespectsTableScrollEnabledFlag;
- (id)_accessibilityResponderChainForKeyWindow;
- (id)_accessibilityResponderChainForWindow:(id)arg1;
- (id)_accessibilityResponderElement;
- (bool)_accessibilityRespondsToUserInteraction;
- (bool)_accessibilityRespondsToUserInteractionForElement:(id)arg1;
- (bool)_accessibilityRetainsCustomRotorActionSetting;
- (bool)_accessibilityRetainsFocusOnScreenChange;
- (id)_accessibilityRetieveHeaderElementText;
- (id)_accessibilityRetrieveHeaderElements;
- (id)_accessibilityRetrieveImagePathLabel:(id)arg1;
- (id)_accessibilityRetrieveLinkedUIElementsFromContainerChain;
- (id)_accessibilityRetrieveLocalizationBundleID;
- (id)_accessibilityRetrieveLocalizationBundlePath;
- (id)_accessibilityRetrieveLocalizedStringKey;
- (id)_accessibilityRetrieveLocalizedStringTableName;
- (id)_accessibilityReusableViewForOpaqueElement:(id)arg1;
- (double)_accessibilityRightOpaqueScrollViewContentOffsetLimit;
- (bool)_accessibilityRoadContainsTrackingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibilityRoleDescription;
- (id)_accessibilityRotorTypeStringForCustomRotor:(long long)arg1;
- (unsigned long long)_accessibilityRowCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRowRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRowRangeFromTableOrCollectionView:(bool*)arg1;
- (id)_accessibilityRuntimeElementTransactionSummary;
- (bool)_accessibilitySavePhotoLabel:(id)arg1;
- (void)_accessibilityScanText;
- (long long)_accessibilityScannerActivateBehavior;
- (id)_accessibilityScannerElementsGrouped:(bool)arg1 shouldIncludeNonScannerElements:(bool)arg2;
- (id)_accessibilityScannerGroupElements;
- (unsigned long long)_accessibilityScannerGroupTraits;
- (bool)_accessibilityScannerShouldUseActivateInPointMode;
- (unsigned long long)_accessibilityScanningBehaviorTraits;
- (struct CGPoint { double x1; double x2; })_accessibilityScreenPointForSceneReferencePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityScreenRectForSceneReferenceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_accessibilityScrollAcrossPageBoundaries;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1 alwaysAllowRefreshAction:(bool)arg2;
- (bool)_accessibilityScrollDownPage:(bool)arg1;
- (bool)_accessibilityScrollLeftPage:(bool)arg1;
- (bool)_accessibilityScrollNextPage;
- (void)_accessibilityScrollOpaqueElementIntoView:(long long)arg1 previousScroller:(id)arg2;
- (bool)_accessibilityScrollPageInDirection:(long long)arg1 shouldSendScrollFailed:(bool)arg2;
- (id)_accessibilityScrollParent;
- (id)_accessibilityScrollParentForComparingByXAxis;
- (bool)_accessibilityScrollPreviousPage;
- (struct CGPoint { double x1; double x2; })_accessibilityScrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_accessibilityScrollRightPage:(bool)arg1;
- (SEL)_accessibilityScrollSelectorForDirection:(long long)arg1;
- (id)_accessibilityScrollStatus;
- (bool)_accessibilityScrollToBottom;
- (bool)_accessibilityScrollToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forView:(id)arg2;
- (void)_accessibilityScrollToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_accessibilityScrollToTop;
- (bool)_accessibilityScrollToVisible;
- (bool)_accessibilityScrollToVisibleForNextElementRetrieval:(long long)arg1;
- (bool)_accessibilityScrollUpPage:(bool)arg1;
- (bool)_accessibilityScrollingEnabled;
- (id)_accessibilitySearchSubtreesAfterChildElement:(id)arg1 direction:(long long)arg2 searchType:(long long)arg3 allowOutOfBoundsChild:(bool)arg4 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 shouldScrollToVisible:(bool)arg6 honorGroups:(bool)arg7 updatedContainer:(id*)arg8;
- (bool)_accessibilitySecondaryActivate;
- (unsigned int)_accessibilitySecureName;
- (void)_accessibilitySelect;
- (void)_accessibilitySelectAll;
- (id)_accessibilitySelectedChildren;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilitySelectedNSRangeForObject;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilitySelectedTextRange;
- (bool)_accessibilitySelfFoundByHitTesting;
- (id)_accessibilitySemanticContext;
- (id)_accessibilitySemanticContextForElement:(id)arg1;
- (void)_accessibilitySendPageScrollFailedIfNecessary;
- (id)_accessibilitySentenceRectsForRange:(id)arg1;
- (bool)_accessibilityServesAsFirstElement;
- (bool)_accessibilityServesAsFirstResponder;
- (void)_accessibilitySetActionBlock:(id /* block */)arg1 withValue:(id)arg2 forKey:(unsigned int)arg3;
- (void)_accessibilitySetAdditionalElementOrderedLast:(bool)arg1;
- (void)_accessibilitySetAdditionalElements:(id)arg1;
- (void)_accessibilitySetAdditionalImportantScannerMenuItems:(id)arg1;
- (void)_accessibilitySetAllowedGeometryOverlap:(double)arg1;
- (void)_accessibilitySetAllowedPagingOverlap:(double)arg1;
- (void)_accessibilitySetAnimationsInProgress:(bool)arg1;
- (void)_accessibilitySetApplicationOrientation:(long long)arg1;
- (void)_accessibilitySetAuditIssueDict:(id)arg1;
- (void)_accessibilitySetAutoscrollSpeed:(double)arg1;
- (void)_accessibilitySetAutoscrollTarget:(id)arg1;
- (void)_accessibilitySetBlock:(void*)arg1 forAttribute:(long long)arg2;
- (void)_accessibilitySetCameraIrisOpen:(bool)arg1;
- (void)_accessibilitySetContainerToStopVisibilityCheck:(id)arg1;
- (void)_accessibilitySetContextDescriptors:(id)arg1;
- (void)_accessibilitySetContextDrawingAnnotations:(id)arg1;
- (void)_accessibilitySetCurrentGesture:(id)arg1;
- (void)_accessibilitySetCurrentWordInPageContext:(id)arg1;
- (void)_accessibilitySetElementHelp:(id)arg1;
- (void)_accessibilitySetFKAShouldProcessChildren:(bool)arg1;
- (void)_accessibilitySetFocusEnabledInApplication:(bool)arg1;
- (void)_accessibilitySetFocusOnElement:(bool)arg1;
- (void)_accessibilitySetFocusRingStyle:(long long)arg1;
- (void)_accessibilitySetFocusRingTintColor:(id)arg1;
- (void)_accessibilitySetIgnoreDelegate:(bool)arg1;
- (void)_accessibilitySetIncreaseLayoutBounds:(bool)arg1;
- (void)_accessibilitySetIsScannerElement:(bool)arg1;
- (void)_accessibilitySetIsScannerGroup:(bool)arg1;
- (void)_accessibilitySetIsSortPriorityContainer:(bool)arg1;
- (void)_accessibilitySetIsSpeakThisElement:(bool)arg1;
- (void)_accessibilitySetIsTourGuideRunning:(bool)arg1;
- (void)_accessibilitySetLastElementsUpdatedWithContainerElementReferences:(id)arg1;
- (bool)_accessibilitySetNativeFocus;
- (void)_accessibilitySetNavigationControllerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_accessibilitySetObscuredScreenAllowedViews:(id /* block */)arg1;
- (void)_accessibilitySetOnlyComparesByXAxis:(bool)arg1;
- (void)_accessibilitySetOpaqueElementScrollsContentIntoView:(bool)arg1;
- (void)_accessibilitySetOverridesInvisibility:(bool)arg1;
- (void)_accessibilitySetPagingEnabled:(bool)arg1;
- (void)_accessibilitySetPrivateCustomActionsElement:(id)arg1;
- (void)_accessibilitySetRoleDescription:(id)arg1;
- (void)_accessibilitySetRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_accessibilitySetScannerActivateBehavior:(long long)arg1;
- (void)_accessibilitySetScannerGroupTraits:(unsigned long long)arg1;
- (void)_accessibilitySetScrollAcrossPageBoundaries:(bool)arg1;
- (void)_accessibilitySetScrollingEnabled:(bool)arg1;
- (void)_accessibilitySetSelectedChildren:(id)arg1;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_accessibilitySetShouldHitTestFallBackToNearestChild:(bool)arg1;
- (void)_accessibilitySetShouldIgnoreOpaqueElementProviders:(bool)arg1;
- (void)_accessibilitySetShouldIncludeRowRangeInElementDescription:(bool)arg1;
- (void)_accessibilitySetShouldPreventOpaqueScrolling:(bool)arg1;
- (void)_accessibilitySetShouldUseFallbackForVisibleContentInset:(bool)arg1;
- (void)_accessibilitySetSortPriority:(long long)arg1;
- (void)_accessibilitySetStartingPointForIsVisible:(struct CGPoint { double x1; double x2; })arg1;
- (void)_accessibilitySetStoredChartDescriptor:(id)arg1;
- (void)_accessibilitySetSupplementaryFooterViews:(id)arg1;
- (void)_accessibilitySetSupplementaryHeaderViews:(id)arg1;
- (void)_accessibilitySetSupportsChartsV2:(bool)arg1;
- (void)_accessibilitySetTextViewIgnoresValueChanges:(bool)arg1;
- (void)_accessibilitySetTextViewShouldBreakUpParagraphs:(bool)arg1;
- (void)_accessibilitySetUserDefinedAdditionalElements:(id)arg1;
- (void)_accessibilitySetUserDefinedIsGuideElement:(bool)arg1;
- (void)_accessibilitySetUserDefinedMediaAnalysisOptions:(id)arg1;
- (void)_accessibilitySetUserDefinedScrollAcrossPageBoundaries:(id)arg1;
- (void)_accessibilitySetUserDefinedScrollingEnabled:(id)arg1;
- (void)_accessibilitySetUserDefinedShouldIncludeRowRangeInElementDescription:(id)arg1;
- (void)_accessibilitySetUserTestingIsCancelButton:(bool)arg1;
- (void)_accessibilitySetUserTestingIsDefaultButton:(bool)arg1;
- (void)_accessibilitySetUserTestingIsDestructiveButton:(bool)arg1;
- (void)_accessibilitySetUserTestingIsPreferredButton:(bool)arg1;
- (void)_accessibilitySetUsesScrollParentForOrdering:(bool)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (void)_accessibilitySetVisibleContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_accessibilitySetVoiceOverRTLOverride:(long long)arg1;
- (void)_accessibilitySetWantsOpaqueElementProviders:(bool)arg1;
- (void)_accessibilityShare;
- (bool)_accessibilityShouldAnnounceFontInfo;
- (bool)_accessibilityShouldApplySemanticGroupContainerType;
- (bool)_accessibilityShouldAttemptScrollToFrameOnParentView;
- (bool)_accessibilityShouldAttemptToAddDismissalElement;
- (bool)_accessibilityShouldAvoidAnnouncing;
- (bool)_accessibilityShouldAvoidScrollingCollectionViewCells;
- (bool)_accessibilityShouldBeExplorerElementWithoutSystemFocus;
- (bool)_accessibilityShouldBeProcessed:(id)arg1;
- (bool)_accessibilityShouldBeScannedIfAncestorCanScroll;
- (bool)_accessibilityShouldHitTestRemoteElementProcess;
- (bool)_accessibilityShouldHitTestStatusBarWindow;
- (bool)_accessibilityShouldIgnoreOpaqueElementProviders;
- (bool)_accessibilityShouldIgnoreSoundForFailedMoveAttempt;
- (bool)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
- (bool)_accessibilityShouldIncludeKeyboardInRemoteSubstituteChildren;
- (bool)_accessibilityShouldIncludeMediaDescriptionsRotor;
- (bool)_accessibilityShouldIncludeParentCustomActions;
- (bool)_accessibilityShouldIncludeParentCustomContent;
- (bool)_accessibilityShouldIncludeRegionDescription;
- (bool)_accessibilityShouldIncludeRemoteParentCustomActions;
- (bool)_accessibilityShouldIncludeRowRangeInElementDescription;
- (bool)_accessibilityShouldInheritTraits;
- (bool)_accessibilityShouldPerformIncrementOrDecrement;
- (bool)_accessibilityShouldPreventOpaqueScrolling;
- (bool)_accessibilityShouldReleaseAfterUnregistration;
- (bool)_accessibilityShouldScrollRemoteParent;
- (bool)_accessibilityShouldSetNativeFocusWhenATVFocused;
- (bool)_accessibilityShouldSpeakExplorerElementsAfterFocus;
- (bool)_accessibilityShouldSpeakMathEquationTrait;
- (bool)_accessibilityShouldSpeakScrollStatusOnEntry;
- (bool)_accessibilityShouldSuppressCustomActionsHint;
- (bool)_accessibilityShouldUseFallbackForVisibleContentInset;
- (bool)_accessibilityShouldUseHostContextIDForLongPress;
- (bool)_accessibilityShouldUseHostContextIDForPress;
- (bool)_accessibilityShouldUseHostContextIDForTap;
- (bool)_accessibilityShouldUseSupplementaryViews;
- (bool)_accessibilityShouldUseViewHierarchyForFindingScrollParent;
- (bool)_accessibilityShowContextMenuForElement:(id)arg1 targetPointValue:(id)arg2;
- (bool)_accessibilityShowContextMenuWithTargetPointValue:(id)arg1;
- (void)_accessibilityShowEditingHUD;
- (void)_accessibilityShowKeyboard;
- (bool)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(bool)arg2 isLast:(bool)arg3;
- (bool)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(bool)arg2 isLast:(bool)arg3 sawAXElement:(bool*)arg4;
- (id)_accessibilitySiriContentElementsWithSemanticContext;
- (id)_accessibilitySiriContentNativeFocusableElements;
- (bool)_accessibilitySkipImageTraitDescription;
- (id)_accessibilitySoftwareMimicKeyboard;
- (void)_accessibilitySonificationPlaybackStatusChanged:(unsigned long long)arg1;
- (bool)_accessibilitySortCollectionViewLogically;
- (void)_accessibilitySortElementsUsingGeometry:(id)arg1;
- (id)_accessibilitySortExplorerElements:(id)arg1;
- (long long)_accessibilitySortPriority;
- (id)_accessibilitySortPriorityContainer;
- (long long)_accessibilitySortPriorityWithReturningElement:(id*)arg1;
- (id)_accessibilitySortedElementsWithin;
- (id)_accessibilitySortedElementsWithinWithOptions:(id)arg1;
- (void)_accessibilitySpeak;
- (void)_accessibilitySpeakSentence;
- (void)_accessibilitySpeakSpellOut;
- (bool)_accessibilitySpeakThisCanBeHighlighted;
- (id)_accessibilitySpeakThisElementWithIdentifier:(id)arg1;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (bool)_accessibilitySpeakThisIgnoresAccessibilityElementStatus;
- (id)_accessibilitySpeakThisLeafDescendants;
- (unsigned long long)_accessibilitySpeakThisMaximumNumberOfElements;
- (id)_accessibilitySpeakThisPreferredHighlightColor;
- (id)_accessibilitySpeakThisPreferredUnderlineColor;
- (id)_accessibilitySpeakThisRootElement;
- (bool)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
- (bool)_accessibilitySpeakThisShouldScrollTextRects;
- (id)_accessibilitySpeakThisString;
- (id)_accessibilitySpeakThisStringValue;
- (id)_accessibilitySpeakThisViewController;
- (id)_accessibilitySpeakThisViews;
- (id)_accessibilitySpeakThisViewsFromSceneRequestedForActiveSpeakScreenSession;
- (id)_accessibilitySpeakThisViewsFromSceneWithSceneIdentifier:(id)arg1;
- (struct CGPoint { double x1; double x2; })_accessibilityStartingPointForIsVisible;
- (id)_accessibilityStatusBar;
- (id)_accessibilityStoredChartDescriptor;
- (id)_accessibilityString:(id)arg1 withSpeechHint:(id)arg2;
- (id)_accessibilityStringForLabelKeyValues:(id)arg1;
- (id /* block */)_accessibilityStyleChangeMatch;
- (id)_accessibilitySubviews;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViewAtIndexPath:(id)arg1;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilitySupplementaryViewSectionHeaderIdentifiers;
- (id)_accessibilitySupportGesturesAttributes;
- (id)_accessibilitySupportedLanguages;
- (bool)_accessibilitySupportsActivateAction;
- (bool)_accessibilitySupportsAudiographs;
- (bool)_accessibilitySupportsChartsV2;
- (bool)_accessibilitySupportsContentSizeCategory:(id)arg1;
- (bool)_accessibilitySupportsDirectioOrbManipulation;
- (bool)_accessibilitySupportsFrameForRange;
- (bool)_accessibilitySupportsHandwriting;
- (bool)_accessibilitySupportsMultipleCustomRotorTitles;
- (bool)_accessibilitySupportsPressedState;
- (bool)_accessibilitySupportsRangeForLineNumber;
- (id)_accessibilitySupportsReadingContent;
- (bool)_accessibilitySupportsSecondaryActivateAction;
- (bool)_accessibilitySupportsSemanticContext;
- (bool)_accessibilitySupportsTextInsertionAndDeletion;
- (id)_accessibilitySwipeIsland;
- (id)_accessibilitySwipeIslandIdentifier;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;
- (id)_accessibilityTabBarAncestor;
- (bool)_accessibilityTableCellUsesDetailTextAsValue;
- (id)_accessibilityTableViewCellContentSubviews;
- (id)_accessibilityTapReplacementGestures;
- (id)_accessibilityTextChecker;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityTextCursorFrame;
- (id)_accessibilityTextFieldText;
- (id)_accessibilityTextForSubhierarchyIncludingHeaders:(bool)arg1 focusableItems:(bool)arg2 exclusions:(id)arg3;
- (id)_accessibilityTextForSubhierarchyIncludingHeaders:(bool)arg1 focusableItems:(bool)arg2 exclusions:(id)arg3 classExclusions:(id)arg4;
- (id)_accessibilityTextHandlingAncestorMatchingBlock:(id /* block */)arg1;
- (id)_accessibilityTextInputElement;
- (id)_accessibilityTextInputElementRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityTextInputElementRangeAsNSRange;
- (bool)_accessibilityTextInputProxiesForRealTextView;
- (id)_accessibilityTextMarkerForPosition:(long long)arg1;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityTextMarkerRangeForSelection;
- (bool)_accessibilityTextOperationAction:(id)arg1;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextRangeFromNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityTextRectsForRange:(id)arg1 singleTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 string:(id)arg2;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 string:(id)arg2 wantsSentences:(bool)arg3;
- (id)_accessibilityTextStylingCustomRotor:(long long)arg1;
- (bool)_accessibilityTextViewIgnoresValueChanges;
- (bool)_accessibilityTextViewShouldBreakUpParagraphs;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityTextualContext;
- (id)_accessibilityTouchContainer;
- (bool)_accessibilityTouchContainerShouldOutputBraille;
- (id)_accessibilityTouchContainerStartingWithSelf:(bool)arg1;
- (id)_accessibilityTraitsAsHumanReadableStrings:(unsigned long long)arg1;
- (id)_accessibilityTraitsInspectorHumanReadable;
- (void)_accessibilityTraverseTreeWithLogger:(id)arg1 options:(id)arg2;
- (void)_accessibilityTraverseTreeWithLogger:(id)arg1 shouldStopAtRemoteElement:(bool)arg2 options:(id)arg3;
- (bool)_accessibilityTreatCollectionViewRowsAsScannerGroups;
- (id)_accessibilityTreeAsString;
- (id)_accessibilityTreeAsStringWithOptions:(id)arg1;
- (bool)_accessibilityTriggerDictationFromPath:(id)arg1;
- (bool)_accessibilityTryScrollWithSelector:(SEL)arg1 shouldSendScrollFailed:(bool)arg2;
- (bool)_accessibilityUIKitHasNativeFocus;
- (id)_accessibilityUIViewAccessibilityFrame;
- (void)_accessibilityUnderline;
- (id /* block */)_accessibilityUnderlineTextMatch;
- (void)_accessibilityUndo;
- (bool)_accessibilityUnfocusableViewCanBeFocusedForHoverText;
- (id)_accessibilityUnignoredDescendant;
- (void)_accessibilityUnregister;
- (id)_accessibilityUpcomingRoadsForPoint:(struct CGPoint { double x1; double x2; })arg1 forAngle:(float)arg2;
- (void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)arg1;
- (void)_accessibilityUpdateFocusState:(id)arg1 forFocusedElement:(id)arg2;
- (bool)_accessibilityUpdatesOnActivationAfterDelay;
- (bool)_accessibilityUpdatesSwitchMenu;
- (bool)_accessibilityUseContextlessPassthroughForDrag;
- (bool)_accessibilityUseElementAtPositionAfterActivation;
- (bool)_accessibilityUseWindowBoundsForOutOfBoundsChecking;
- (id)_accessibilityUserDefinedAdditionalElements;
- (id)_accessibilityUserDefinedGuideElementHeaderText;
- (bool)_accessibilityUserDefinedIsGuideElement;
- (id)_accessibilityUserDefinedLinkedUIElements;
- (id)_accessibilityUserDefinedMediaAnalysisOptions;
- (id)_accessibilityUserDefinedScrollAcrossPageBoundaries;
- (id)_accessibilityUserDefinedScrollingEnabled;
- (id)_accessibilityUserDefinedShouldIncludeRowRangeInElementDescription;
- (id)_accessibilityUserTestingActionIdentifiers;
- (id)_accessibilityUserTestingActions;
- (id)_accessibilityUserTestingChildren;
- (long long)_accessibilityUserTestingChildrenCount;
- (id)_accessibilityUserTestingChildrenWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityUserTestingElementAttributes;
- (id)_accessibilityUserTestingElementBaseType;
- (id)_accessibilityUserTestingElementType;
- (bool)_accessibilityUserTestingIsBackNavButton;
- (bool)_accessibilityUserTestingIsCancelButton;
- (bool)_accessibilityUserTestingIsContinuityButton;
- (bool)_accessibilityUserTestingIsDefaultButton;
- (bool)_accessibilityUserTestingIsDestructiveButton;
- (bool)_accessibilityUserTestingIsElementClassAcceptable;
- (bool)_accessibilityUserTestingIsPreferredButton;
- (bool)_accessibilityUserTestingIsRightNavButton;
- (id)_accessibilityUserTestingParent;
- (id)_accessibilityUserTestingProxyView;
- (id)_accessibilityUserTestingSnapshot;
- (id)_accessibilityUserTestingSnapshotAncestorsWithAttributes:(id)arg1 maxDepth:(unsigned long long)arg2 maxChildren:(unsigned long long)arg3 maxArrayCount:(unsigned long long)arg4 honorsModalViews:(bool)arg5;
- (id)_accessibilityUserTestingSnapshotDescendantsWithAttributes:(id)arg1 maxDepth:(unsigned long long)arg2 maxChildren:(unsigned long long)arg3 maxArrayCount:(unsigned long long)arg4 honorsModalViews:(bool)arg5;
- (id)_accessibilityUserTestingSnapshotWithOptions:(id)arg1;
- (id)_accessibilityUserTestingSupplementaryViews:(bool)arg1;
- (id)_accessibilityUserTestingVisibleAncestor;
- (id)_accessibilityUserTestingVisibleCells;
- (id)_accessibilityUserTestingVisibleSections;
- (bool)_accessibilityUsesChildrenFramesForSorting;
- (bool)_accessibilityUsesFixFor72070946;
- (bool)_accessibilityUsesScrollParentForOrdering;
- (bool)_accessibilityUsesSpecialKeyboardDismiss;
- (id)_accessibilityValueForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (id)_accessibilityVariantKeys;
- (id)_accessibilityVerticalScrollBarElement;
- (long long)_accessibilityVerticalSizeClass;
- (double)_accessibilityViewAlpha;
- (id)_accessibilityViewAncestorIsKindOf:(Class)arg1;
- (id)_accessibilityViewChildrenForEnumeratingSiblingsWithOptions:(id)arg1;
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;
- (id)_accessibilityViewController;
- (bool)_accessibilityViewControllerShouldPreventScrollToVisibleForElement:(id)arg1;
- (bool)_accessibilityViewHierarchyHasNativeFocus;
- (bool)_accessibilityViewIsMacIdiom;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_accessibilityVisibleContentInset;
- (id)_accessibilityVisibleElementsHonoringGroups:(bool)arg1;
- (id)_accessibilityVisibleElementsHonoringGroups:(bool)arg1 respectGroupedParents:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityVisibleFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityVisibleFrame:(bool)arg1;
- (id)_accessibilityVisibleFrameClippingAncestor;
- (double)_accessibilityVisibleItemDenominator;
- (id)_accessibilityVisibleItemInList;
- (id)_accessibilityVisibleOpaqueElements;
- (id)_accessibilityVisibleOpaqueElementsHonoringGroups:(bool)arg1 sorted:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_accessibilityVisiblePoint;
- (struct CGPoint { double x1; double x2; })_accessibilityVisiblePointHitTestingAnyElement:(bool)arg1;
- (bool)_accessibilityVisiblePointHonorsScreenBounds;
- (struct CGPoint { double x1; double x2; })_accessibilityVisibleScrollArea:(bool)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityVisibleTextRange;
- (bool)_accessibilityWantsOpaqueElementProviders;
- (void)_accessibilityWarmPrefersNonAttributedLabelValueHintCache;
- (id)_accessibilityWatchAutoSpeakElements;
- (id)_accessibilityWebAreaURL;
- (bool)_accessibilityWebSearchResultsActive;
- (bool)_accessibilityWebViewIsLoading;
- (id)_accessibilityWindow;
- (id)_accessibilityWindowScene;
- (id)_accessibilityWindowSceneIdentifier;
- (id)_accessibilityWindowSections;
- (bool)_accessibilityWindowVisible;
- (double)_accessibilityZoomScale;
- (id)_accessibiltyAvailableKeyplanes;
- (void)_addPublicRotorsToArray:(id)arg1 forElement:(id)arg2;
- (bool)_allowCustomActionHintSpeakOverride;
- (bool)_animateScrollViewWithScrollAmount:(double)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_axAdditionalElementHitTestingInProgress;
- (id)_axAncestorTypes;
- (id)_axCachedHasTabBarAncestor;
- (id)_axDebugTraits;
- (id)_axElementsDescription;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_axFrameForBoundsCheck:(bool)arg1;
- (id)_axGetLastFocusedChild;
- (id)_axGetStoredFocusGroupIdentifier;
- (id)_axNavigationalGroupParentOfChild:(id)arg1;
- (id)_axOutermostScrollParent;
- (double)_axScaleTransformForFocusLayerLineWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_axScreenBoundsForBoundsCheck;
- (void)_axSetAdditionalElementHitTestingInProgress:(bool)arg1;
- (void)_axSetCachedHasTabBarAncestor:(id)arg1;
- (void)_axSetLastFocusedChild:(id)arg1;
- (id)_axSuperviews;
- (bool)_drawsFocusRingWhenChildrenFocused;
- (void)_fkaMoveDown;
- (void)_fkaMoveLeft;
- (void)_fkaMoveRight;
- (void)_fkaMoveUp;
- (id)_getAccessibilityAttributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_handleRotatingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (void)_handleSupplementaryViewIfNeededWithElementOrOrderedChildrenContainer:(id*)arg1 childOfElementOrOrderedChildrenContainer:(id*)arg2 headerIndex:(unsigned long long*)arg3 footerIndex:(unsigned long long*)arg4 allowedElementsForTraversal:(id)arg5;
- (id)_iosAccessibilityAttributeValue:(long long)arg1;
- (id)_iosAccessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2;
- (bool)_iosAccessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (void)_iosAccessibilitySetValue:(id)arg1 forAttribute:(long long)arg2;
- (bool)_isAccessibilityExplorerElement;
- (id)_privateAccessibilityCustomActions;
- (id)_retrieveCustomActionsForElement:(id)arg1;
- (SEL)_scrollPageSelectorForAutoscrollDirection:(unsigned long long)arg1;
- (void)_setAccessibilityActivateBlock:(id /* block */)arg1;
- (void)_setAccessibilityActivateParagraphInTextViewRangeBlock:(id /* block */)arg1;
- (void)_setAccessibilityActivationPointBlock:(id /* block */)arg1;
- (void)_setAccessibilityAdditionalTraitsBlock:(id /* block */)arg1;
- (void)_setAccessibilityAttributedHintBlock:(id /* block */)arg1;
- (void)_setAccessibilityAttributedUserInputLabelsBlock:(id /* block */)arg1;
- (void)_setAccessibilityAttributedValueBlock:(id /* block */)arg1;
- (void)_setAccessibilityAutomationType:(unsigned long long)arg1;
- (void)_setAccessibilityChartDescriptorBlock:(id /* block */)arg1;
- (void)_setAccessibilityColumnCountBlock:(id /* block */)arg1;
- (void)_setAccessibilityColumnRangeBlock:(id /* block */)arg1;
- (void)_setAccessibilityContainerTypeBlock:(id /* block */)arg1;
- (void)_setAccessibilityCustomActionsBlock:(id /* block */)arg1;
- (void)_setAccessibilityCustomContentBlock:(id /* block */)arg1;
- (void)_setAccessibilityDataTableCellElementForRowColumnBlock:(id /* block */)arg1;
- (void)_setAccessibilityDecrementBlock:(id /* block */)arg1;
- (void)_setAccessibilityElementsBlock:(id /* block */)arg1;
- (void)_setAccessibilityElementsHiddenBlock:(id /* block */)arg1;
- (void)_setAccessibilityEncodedHierarchyData:(id)arg1;
- (void)_setAccessibilityFauxCollectionViewCellsDisabled:(bool)arg1;
- (void)_setAccessibilityFauxTableViewCellsDisabled:(bool)arg1;
- (void)_setAccessibilityFrameBlock:(id /* block */)arg1;
- (void)_setAccessibilityFrameForSortingBlock:(id /* block */)arg1;
- (void)_setAccessibilityGuideElementHeaderText:(id)arg1;
- (void)_setAccessibilityGuideElementHeaderTextBlock:(id /* block */)arg1;
- (void)_setAccessibilityHeaderElementsBlock:(id /* block */)arg1;
- (void)_setAccessibilityHeaderElementsForColumnBlock:(id /* block */)arg1;
- (void)_setAccessibilityHeaderElementsForRowBlock:(id /* block */)arg1;
- (void)_setAccessibilityHeadingLevel:(id)arg1;
- (void)_setAccessibilityHeadingLevelBlock:(id /* block */)arg1;
- (void)_setAccessibilityHintBlock:(id /* block */)arg1;
- (void)_setAccessibilityIdentifierBlock:(id /* block */)arg1;
- (void)_setAccessibilityIncrementBlock:(id /* block */)arg1;
- (void)_setAccessibilityIsMainWindow:(bool)arg1;
- (void)_setAccessibilityIsNotFirstElement:(bool)arg1;
- (void)_setAccessibilityIsRealtimeElementBlock:(id /* block */)arg1;
- (void)_setAccessibilityLabelBlock:(id /* block */)arg1;
- (void)_setAccessibilityLanguageBlock:(id /* block */)arg1;
- (void)_setAccessibilityLinkedUIElements:(id)arg1;
- (void)_setAccessibilityLinkedUIElementsBlock:(id /* block */)arg1;
- (void)_setAccessibilityMagicTapBlock:(id /* block */)arg1;
- (void)_setAccessibilityNavigationStyleBlock:(id /* block */)arg1;
- (void)_setAccessibilityPathBlock:(id /* block */)arg1;
- (void)_setAccessibilityPerformEscapeBlock:(id /* block */)arg1;
- (void)_setAccessibilityPhotoDescription:(id)arg1;
- (void)_setAccessibilityRemoteElementShouldHitTestHostProcessBlock:(id /* block */)arg1;
- (void)_setAccessibilityRespondsToUserInteractionBlock:(id /* block */)arg1;
- (void)_setAccessibilityRowCountBlock:(id /* block */)arg1;
- (void)_setAccessibilityRowRangeBlock:(id /* block */)arg1;
- (void)_setAccessibilityServesAsFirstElement:(bool)arg1;
- (void)_setAccessibilityShouldUseHostContextIDLongPress:(id /* block */)arg1;
- (void)_setAccessibilityShouldUseHostContextIDTap:(id /* block */)arg1;
- (void)_setAccessibilitySupplementaryViewSectionHeaderIdentifiersBlock:(id /* block */)arg1;
- (void)_setAccessibilityTableCellUsesDetailTextAsValue:(bool)arg1;
- (void)_setAccessibilityTextualContextBlock:(id /* block */)arg1;
- (void)_setAccessibilityTraitsBlock:(id /* block */)arg1;
- (void)_setAccessibilityUpdatesOnActivationAfterDelay:(bool)arg1;
- (void)_setAccessibilityUserInputLabelsBlock:(id /* block */)arg1;
- (void)_setAccessibilityValueBlock:(id /* block */)arg1;
- (void)_setAccessibilityViewIsModalBlock:(id /* block */)arg1;
- (void)_setAccessibilityWindowVisible:(bool)arg1;
- (void)_setAutomationElementsBlock:(id /* block */)arg1;
- (void)_setAxStoredFocusGroupIdentifier:(id)arg1;
- (void)_setIsAccessibilityElementBlock:(id /* block */)arg1;
- (void)_setShouldGroupAccessibilityChildrenBlock:(id /* block */)arg1;
- (unsigned long long)accessibilityARIAColumnCount;
- (unsigned long long)accessibilityARIAColumnIndex;
- (unsigned long long)accessibilityARIARowCount;
- (unsigned long long)accessibilityARIARowIndex;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)accessibilityAssistiveTechnologyFocusedIdentifiers;
- (id)accessibilityAttributeValue:(long long)arg1;
- (id)accessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2;
- (unsigned long long)accessibilityBlockquoteLevel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityBoundsForTextMarkers:(id)arg1;
- (id)accessibilityChartDescriptor;
- (bool)accessibilityChildrenContainerGroupingBehaviorHasOverridingParentDelegate;
- (unsigned long long)accessibilityColumnCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityColumnRange;
- (long long)accessibilityCompareGeometry:(id)arg1;
- (id)accessibilityContainerElements;
- (id)accessibilityContentForLineNumber:(long long)arg1;
- (id)accessibilityCustomContent;
- (id)accessibilityDataTableCellElementForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)accessibilityDatetimeValue;
- (void)accessibilityDecreaseTrackingDetail;
- (bool)accessibilityEditOperationAction:(id)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityElementForRow:(unsigned long long)arg1 andColumn:(unsigned long long)arg2;
- (bool)accessibilityElementIsFocused;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityElementRect;
- (void)accessibilityEnumerateAncestorsUsingBlock:(id /* block */)arg1;
- (void)accessibilityEnumerateContainerElementsUsingBlock:(id /* block */)arg1;
- (void)accessibilityEnumerateContainerElementsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)accessibilityErrorMessageElements;
- (bool)accessibilityExpandMathEquation:(id)arg1;
- (id)accessibilityExpandedTextValue;
- (id)accessibilityFlowToElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrameForLineNumber:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrameForScrolling;
- (bool)accessibilityHasPopup;
- (id)accessibilityHeaderElements;
- (id)accessibilityHeaderElementsForColumn:(unsigned long long)arg1;
- (id)accessibilityHeaderElementsForRow:(unsigned long long)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)accessibilityImageOverlayElements;
- (void)accessibilityIncreaseTrackingDetail;
- (id)accessibilityInvalidStatus;
- (bool)accessibilityIsAttachmentElement;
- (bool)accessibilityIsComboBox;
- (bool)accessibilityIsDeletion;
- (bool)accessibilityIsFirstItemInSuggestion;
- (bool)accessibilityIsInDescriptionListDefinition;
- (bool)accessibilityIsInDescriptionListTerm;
- (bool)accessibilityIsInsertion;
- (bool)accessibilityIsLastItemInSuggestion;
- (bool)accessibilityIsMarkAnnotation;
- (bool)accessibilityIsMediaPlaying;
- (bool)accessibilityIsWindow;
- (id)accessibilityLabelForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)accessibilityLinkRelationshipType;
- (id)accessibilityLinkedElement;
- (id)accessibilityMathEquation;
- (id)accessibilityMathMLSource;
- (id)accessibilityMenuActions;
- (id)accessibilityNextTextNavigationElement;
- (id)accessibilityPageContent;
- (bool)accessibilityParentDiscardsChildrenContainerGroupingBehavior;
- (bool)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (bool)accessibilityPerformCustomAction:(long long)arg1;
- (id)accessibilityPlaceholderValue;
- (id)accessibilityPopupValue;
- (void)accessibilityPostNotification:(unsigned int)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (id)accessibilityPreviousTextNavigationElement;
- (bool)accessibilityRequired;
- (unsigned long long)accessibilityRowCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityRowRange;
- (bool)accessibilityScrollDownPage;
- (bool)accessibilityScrollDownPageSupported;
- (bool)accessibilityScrollLeftPage;
- (bool)accessibilityScrollLeftPageSupported;
- (bool)accessibilityScrollRightPage;
- (bool)accessibilityScrollRightPageSupported;
- (bool)accessibilityScrollToTopSupported;
- (bool)accessibilityScrollUpPage;
- (bool)accessibilityScrollUpPageSupported;
- (id)accessibilitySecondaryLabel;
- (unsigned long long)accessibilitySemanticGroupChildrentCount;
- (void)accessibilitySetUserDefinedOpaqueElementScrollsContentIntoView:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(long long)arg2;
- (bool)accessibilityShouldEnumerateContainerElementsArrayDirectly;
- (id)accessibilitySortDirection;
- (id)accessibilitySpeechHint;
- (bool)accessibilityStartStopToggle;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (bool)accessibilitySupportsTextSelection;
- (id)accessibilityTitleElement;
- (id)accessibilityURL;
- (id)accessibilityUserDefinedIsMainWindow;
- (id)accessibilityUserDefinedNotFirstElement;
- (id)accessibilityUserDefinedOpaqueElementScrollsContentIntoView;
- (id)accessibilityUserDefinedServesAsFirstElement;
- (id)accessibilityUserDefinedSize;
- (id)accessibilityUserDefinedWindowVisible;
- (id)accessibilityViewWithIdentifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityVisibleContentRect;
- (id)accessibilityVisibleText;
- (bool)accessibilityZoomInAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)accessibilityZoomOutAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)automationCustomProperties;
- (id)automationSystemProperties;
- (unsigned long long)axContainerTypeFromUIKitContainerType:(long long)arg1;
- (id)dragDescriptorMatchingDictionary:(id)arg1;
- (id)focusGroupIdentifier;
- (int (*)impOrNullForSelector:(SEL)arg1;
- (bool)isAccessibilityOpaqueElementProvider;
- (id)isAccessibilityUserDefinedScrollAncestor;
- (void)setAccessibilityCustomContent:(id)arg1;
- (void)setAccessibilitySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAutomationCustomProperties:(id)arg1;
- (void)setAutomationSystemProperties:(id)arg1;
- (void)setFocusGroupIdentifier:(id)arg1;
- (void)setIsAccessibilityOpaqueElementProvider:(bool)arg1;
- (void)setIsAccessibilityScrollAncestor:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (long long)__accessibilityGuidedAccessRestrictionStateForIdentifier:(id)arg1;
+ (bool)__accessibilityGuidedAccessStateEnabled;
+ (void)__accessibilityRequestGuidedAccessSession:(bool)arg1 completion:(id /* block */)arg2;
+ (void)_installAppearanceSwizzlesForSetter:(id)arg1;

- (id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSDataValue:(id)arg1 error:(id*)arg2;
- (id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSURLValue:(id)arg1 error:(id*)arg2;
- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;
- (bool)__isKindOfUICollectionView;
- (bool)__isKindOfUIRemoteViewController;
- (bool)__isKindOfUIResponder;
- (bool)__isKindOfUIScrollView;
- (bool)__isKindOfUIView;
- (bool)__isKindOfUIViewController;
- (bool)__isKindOfUIWindow;
- (id)__ivarDescriptionForClass:(Class)arg1;
- (id)__methodDescriptionForClass:(Class)arg1;
- (id)__propertyDescriptionForClass:(Class)arg1;
- (void)_accessibilityFinalize;
- (void*)_accessibilityGetBlockForAttribute:(long long)arg1;
- (unsigned int)_accessibilityGetContextID;
- (void)_accessibilitySetReturnBlock:(void*)arg1 forAttribute:(long long)arg2;
- (void)_applyTraitStorageRecordsForTraitCollection:(id)arg1;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (id)_internalAccessibilityAttributedHint;
- (id)_internalAccessibilityAttributedLabel;
- (id)_internalAccessibilityAttributedUserInputLabels;
- (id)_internalAccessibilityAttributedValue;
- (void)_internalSetAccessibilityAttributedHint:(id)arg1;
- (void)_internalSetAccessibilityAttributedLabel:(id)arg1;
- (void)_internalSetAccessibilityAttributedUserInputLabels:(id)arg1;
- (void)_internalSetAccessibilityAttributedValue:(id)arg1;
- (bool)_isGestureType:(long long)arg1;
- (id)_ivarDescription;
- (void)_keyboardActivate;
- (struct __IOHIDEvent { }*)_keyboardActivateEventDown:(bool)arg1;
- (id)_methodDescription;
- (id)_propertyDescription;
- (void)_setTraitStorageList:(id)arg1;
- (id)_shortMethodDescription;
- (id)_traitStorageList;
- (id)_ui_descriptionBuilder;
- (bool)_ui_isKindOfTextSelectionRect;
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;
- (id)_uikit_valueForTraitCollection:(id)arg1;
- (bool)_uikit_variesByTraitCollections;
- (bool)accessibilityActivate;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityAssistiveTechnologyFocusedIdentifiers;
- (id)accessibilityAttributedHint;
- (id)accessibilityAttributedLabel;
- (id)accessibilityAttributedUserInputLabels;
- (id)accessibilityAttributedValue;
- (id)accessibilityContainer;
- (long long)accessibilityContainerType;
- (id)accessibilityCustomActions;
- (id)accessibilityCustomRotors;
- (void)accessibilityDecrement;
- (unsigned long long)accessibilityDirectTouchOptions;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (bool)accessibilityElementIsFocused;
- (id)accessibilityElements;
- (bool)accessibilityElementsHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHeaderElements;
- (id)accessibilityHint;
- (id)accessibilityIdentification;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityLocalizedStringKey;
- (long long)accessibilityNavigationStyle;
- (id)accessibilityPath;
- (bool)accessibilityPerformEscape;
- (bool)accessibilityPerformMagicTap;
- (bool)accessibilityRespondsToUserInteraction;
- (bool)accessibilityScroll:(long long)arg1;
- (void)accessibilitySetIdentification:(id)arg1;
- (id)accessibilityTextualContext;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (bool)accessibilityViewIsModal;
- (bool)accessibilityZoomInAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)accessibilityZoomOutAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)automationElements;
- (void)awakeFromNib;
- (id)className;
- (bool)conformsToProtocolCached:(id)arg1;
- (unsigned long long)defaultAccessibilityTraits;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (bool)isAccessibilityElement;
- (bool)isAccessibilityElementByDefault;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (void)prepareForInterfaceBuilder;
- (void)setAccessibilityActivateBlock:(id /* block */)arg1;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccessibilityActivationPointBlock:(id /* block */)arg1;
- (void)setAccessibilityAttributedHint:(id)arg1;
- (void)setAccessibilityAttributedHintBlock:(id /* block */)arg1;
- (void)setAccessibilityAttributedLabel:(id)arg1;
- (void)setAccessibilityAttributedLabelBlock:(id /* block */)arg1;
- (void)setAccessibilityAttributedUserInputLabels:(id)arg1;
- (void)setAccessibilityAttributedUserInputLabelsBlock:(id /* block */)arg1;
- (void)setAccessibilityAttributedValue:(id)arg1;
- (void)setAccessibilityAttributedValueBlock:(id /* block */)arg1;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setAccessibilityContainerType:(long long)arg1;
- (void)setAccessibilityContainerTypeBlock:(id /* block */)arg1;
- (void)setAccessibilityCustomActions:(id)arg1;
- (void)setAccessibilityCustomActionsBlock:(id /* block */)arg1;
- (void)setAccessibilityCustomRotors:(id)arg1;
- (void)setAccessibilityCustomRotorsBlock:(id /* block */)arg1;
- (void)setAccessibilityDecrementBlock:(id /* block */)arg1;
- (void)setAccessibilityDirectTouchOptions:(unsigned long long)arg1;
- (void)setAccessibilityDragSourceDescriptors:(id)arg1;
- (void)setAccessibilityDropPointDescriptors:(id)arg1;
- (void)setAccessibilityElements:(id)arg1;
- (void)setAccessibilityElementsBlock:(id /* block */)arg1;
- (void)setAccessibilityElementsHidden:(bool)arg1;
- (void)setAccessibilityElementsHiddenBlock:(id /* block */)arg1;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityFrameBlock:(id /* block */)arg1;
- (void)setAccessibilityHeaderElements:(id)arg1;
- (void)setAccessibilityHeaderElementsBlock:(id /* block */)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityHintBlock:(id /* block */)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityIdentifierBlock:(id /* block */)arg1;
- (void)setAccessibilityIncrementBlock:(id /* block */)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityLabelBlock:(id /* block */)arg1;
- (void)setAccessibilityLanguage:(id)arg1;
- (void)setAccessibilityLanguageBlock:(id /* block */)arg1;
- (void)setAccessibilityMagicTapBlock:(id /* block */)arg1;
- (void)setAccessibilityNavigationStyle:(long long)arg1;
- (void)setAccessibilityNavigationStyleBlock:(id /* block */)arg1;
- (void)setAccessibilityPath:(id)arg1;
- (void)setAccessibilityPathBlock:(id /* block */)arg1;
- (void)setAccessibilityPerformEscapeBlock:(id /* block */)arg1;
- (void)setAccessibilityRespondsToUserInteraction:(bool)arg1;
- (void)setAccessibilityRespondsToUserInteractionBlock:(id /* block */)arg1;
- (void)setAccessibilityShouldGroupAccessibilityChildrenBlock:(id /* block */)arg1;
- (void)setAccessibilityTextualContext:(id)arg1;
- (void)setAccessibilityTextualContextBlock:(id /* block */)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityTraitsBlock:(id /* block */)arg1;
- (void)setAccessibilityUserInputLabels:(id)arg1;
- (void)setAccessibilityUserInputLabelsBlock:(id /* block */)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAccessibilityValueBlock:(id /* block */)arg1;
- (void)setAccessibilityViewIsModal:(bool)arg1;
- (void)setAccessibilityViewIsModalBlock:(id /* block */)arg1;
- (void)setAutomationElements:(id)arg1;
- (void)setAutomationElementsBlock:(id /* block */)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (void)setIsAccessibilityElementBlock:(id /* block */)arg1;
- (void)setShouldGroupAccessibilityChildren:(bool)arg1;
- (bool)shouldGroupAccessibilityChildren;
- (id)storedAccessibilityActivationPoint;
- (id)storedAccessibilityContainerType;
- (id)storedAccessibilityDirectTouchOptions;
- (id)storedAccessibilityElementsHidden;
- (id)storedAccessibilityFrame;
- (id)storedAccessibilityIdentifier;
- (id)storedAccessibilityNavigationStyle;
- (id)storedAccessibilityRespondsToUserInteraction;
- (id)storedAccessibilityTraits;
- (id)storedAccessibilityViewIsModal;
- (id)storedIsAccessibilityElement;
- (id)storedShouldGroupAccessibilityChildren;
- (id)uiPresentationManager;

// Image: /System/Library/PrivateFrameworks/UserNotificationsCore.framework/UserNotificationsCore

+ (id)unc_objectCache;

- (id)unc_objectCache;

// Image: /System/Library/PrivateFrameworks/VFX.framework/Frameworks/libVFXCore.dylib

- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 warnings:(id*)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (unsigned long long)tv_generatorType;
- (void)tv_setGeneratorType:(unsigned long long)arg1;
- (void)vui_debounce:(SEL)arg1 object:(id)arg2 delay:(double)arg3;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

+ (id)vk_loggingDescriptionFromLoggable:(id)arg1 isPretty:(bool)arg2;

- (id)vk_loggingDescription;
- (id)vk_loggingIdentifier;
- (id)vk_prettyLoggingDescription;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.framework/IMAP

- (void)mf_performOnewaySelectorInMainThread:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)vf_observeKeyPath:(id)arg1 options:(unsigned long long)arg2 autoCancelToken:(bool)arg3 usingBlock:(id /* block */)arg4;
- (id)vf_observeKeyPath:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail

+ (id)vm_classIdentifier;

// Image: /System/Library/PrivateFrameworks/WatchQuickActionsServices.framework/WatchQuickActionsServices

- (void)setQuickActionHostObserver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

- (id)_web_description;
- (void)releaseOnMainThread;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_webkit_invokeOnMainThread;
+ (bool)isKeyExcludedFromWebScript:(const char *)arg1;
+ (bool)isSelectorExcludedFromWebScript:(SEL)arg1;

- (id)_webkit_invokeOnMainThread;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)wf_transformValueForCodableAttribute:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (id)_ICSStringWithOptions:(unsigned long long)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)blockingMainThreadProxy;
- (id)delayedProxy:(double)arg1;
- (id)mainThreadProxy;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (id)responderChainProxy:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook

- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook

- (void)tp_performSelector:(SEL)arg1 withIndexesFromSet:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (bool)tsu_object:(id)arg1 isEqualToObject:(id)arg2;
+ (bool)tsu_overridesClassSelector:(SEL)arg1 ofBaseClass:(Class)arg2;
+ (bool)tsu_overridesSelector:(SEL)arg1 ofBaseClass:(Class)arg2;

- (id)tsu_addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)tsu_performSelector:(SEL)arg1 withValue:(id)arg2;
- (void)tsu_removeObserverForToken:(id)arg1;
- (void)tsu_runBlock;

// Image: /usr/lib/libprequelite.dylib

- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;

@end
