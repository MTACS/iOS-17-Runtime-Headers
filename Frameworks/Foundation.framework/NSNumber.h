
@interface NSNumber : NSValue <AADataType, AFContextSnapshot, AFSecurityDigestibleChunksProviding, APPCSupplementalContextAllowedTypes, ASDNotificationType, ASParsingLeafNode, ATXScoreLogSerializable, BMDSLNativeJSONArchiving, CKRecordValue, CKVDatabaseValue, CMSCoding, CRCoding, CRDataType, CREquatable, CUByteCodable, EFSQLBindable, EFSQLValueExpressable, GCSJSONObject, HAP2AccessoryCharacteristicEncodableBodyValue, HFPropertyListConvertible, HKSPSyncAnchor, HMBQueryableModelFieldCoder, HMDOPACKValue, ICCRCoding, ICCRDataType, ICCREquatable, IMJSONSerializableValueProviding, INCodableAttributeRelationComparing, INJSONSerializable, KGPropertyTypeProtocol, LPCSSText, MGRemoteQueryDecodable, MPCPlaybackEngineEventPayloadJSONValue, NFCBOREncodable, NSFetchRequestResult, PQLValuable, RBSProcessIdentifier, RCRecordingsFolderIdentifier, REDonatedActionIdentifierProviding, SiriCoreSQLiteValue, TSCHChartGridValue, TSDMixing, WFJSONObject, WFJavaScriptCoreBridgeableObject, WFNaming, WFPropertyListObject, WFSerializableContent, _DKDeduping, _PASDistilledString>

@property (nonatomic, readonly) double CGFloatValue;
@property (readonly) unsigned long long CNContactFlagsValue;
@property (nonatomic, readonly) long long CPAnalyticsSignpostIDValue;
@property (nonatomic, readonly) long long PHAssetExportRequestVariantValue;
@property (nonatomic, readonly) long long PXDataSourceIdentifierValue;
@property (nonatomic, readonly) long long __rc_folderType;
@property (nonatomic, readonly) double _cn_timeIntervalValue;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) unsigned long long bl_hlsUnsignedIntegerValue;
@property (nonatomic, readonly, copy) NSString *boolStringValue;
@property (readonly) bool boolValue;
@property (readonly) BOOL charValue;
@property (nonatomic, readonly) int chartGridValueType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; } decimalValue;
@property (readonly, copy) NSString *description;
@property (readonly) double doubleValue;
@property (nonatomic, readonly) EFSQLBinding *ef_SQLBinding;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (readonly) float floatValue;
@property (readonly) unsigned long long hash;
@property (setter=ik_setUnit:, nonatomic) unsigned long long ik_unit;
@property (nonatomic, readonly) NSString *ik_unitStringValue;
@property (readonly) int intValue;
@property (readonly) long long integerValue;
@property (readonly) long long kgPropertyType;
@property (nonatomic, readonly) long long ln_numberType;
@property (readonly) long long longLongValue;
@property (readonly) long long longValue;
@property (nonatomic, readonly, copy) NSNumber *na_absoluteValue;
@property (nonatomic, readonly) bool na_isFloatValue;
@property (nonatomic, readonly) bool na_isSignedValue;
@property (nonatomic, readonly) NSNumber *safari_percentageFromSamplingRate;
@property (readonly) short shortValue;
@property (readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int tss_propertyValue;
@property (nonatomic, readonly) double ttr_CGFloatValue;
@property (readonly) unsigned char unsignedCharValue;
@property (readonly) unsigned int unsignedIntValue;
@property (readonly) unsigned long long unsignedIntegerValue;
@property (readonly) unsigned long long unsignedLongLongValue;
@property (readonly) unsigned long long unsignedLongValue;
@property (readonly) unsigned short unsignedShortValue;
@property (nonatomic, readonly, copy) NSString *wfName;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)numberWithBool:(bool)arg1;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithInt:(int)arg1;
+ (id)numberWithInteger:(long long)arg1;
+ (id)numberWithLong:(long long)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithUnsignedInteger:(unsigned long long)arg1;
+ (id)numberWithUnsignedLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (bool)supportsSecureCoding;

- (bool)_allowsDirectEncoding;
- (long long)_cfNumberType;
- (unsigned long long)_cfTypeID;
- (bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (unsigned char)_getValue:(void*)arg1 forType:(long long)arg2;
- (long long)_reverseCompare:(id)arg1;
- (bool)boolValue;
- (BOOL)charValue;
- (Class)classForCoder;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (unsigned long long)hash;
- (id)initWithBool:(bool)arg1;
- (id)initWithChar:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithInteger:(long long)arg1;
- (id)initWithLong:(long long)arg1;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithShort:(short)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)initWithUnsignedInteger:(unsigned long long)arg1;
- (id)initWithUnsignedLong:(unsigned long long)arg1;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (int)intValue;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNumber:(id)arg1;
- (bool)isNSNumber__;
- (long long)longLongValue;
- (long long)longValue;
- (id)redactedDescription;
- (short)shortValue;
- (id)stringValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedLongValue;
- (unsigned short)unsignedShortValue;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (id)CKRoundedToMaximumDecimalPlaces:(unsigned long long)arg1;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;
- (double)cksqlcs_doubleBindingValue:(id*)arg1;
- (long long)cksqlcs_int64BindingValue:(id*)arg1;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)numberWithCNContactFlags:(unsigned long long)arg1;

- (unsigned long long)CNContactFlagsValue;
- (id)initWithCNContactFlags:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)modelOriginNumberFromUserDefinedDictionary:(id)arg1;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (bool)_intents_isDouble;
- (bool)_intents_isInteger;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

- (id)_lp_CSSText;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)numberWithCGFloat:(double)arg1;

- (int)_mk_laneDirectionValue;
- (double)cgFloatValue;
- (id)initWithCGFloat:(double)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)MPMediaLibraryDataProviderSystemML3CoercedString;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (long long)PHAssetExportRequestVariantValue;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (unsigned long long)CA_copyNumericValue:(double*)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3 : 8; unsigned int x4 : 24; }*)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; bool x15; }*)arg4;
- (unsigned long long)CA_numericValueCount;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

- (id)jsonRepresentationWithOptions:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

- (id)_axDictionaryKeyReplacementRepresentation;
- (id)_axReconstitutedRepresentationForDictionaryKeyReplacement;
- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

- (unsigned int)MIDIDevice;
- (unsigned int)MIDIEndpoint;
- (unsigned int)MIDIEntity;
- (unsigned int)MIDIObject;

// Image: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics

- (id)toJsonValueAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)atx_writeToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (bool)needsQuotes;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithSerializedBackingStore:(id)arg1;
- (id)serializedBackingStore;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (id)ak_booleanAsInteger;
- (bool)ak_isBoolean;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (double)bs_CGFloatValue;

// Image: /System/Library/PrivateFrameworks/BiomeDSL.framework/BiomeDSL

+ (void)bmdsl_nativeSupportForEncodingAsJSON;

// Image: /System/Library/PrivateFrameworks/BookLibraryCore.framework/BookLibraryCore

+ (id)bl_numberWithItemIdentifier:(unsigned long long)arg1;

- (unsigned long long)bl_hlsUnsignedIntegerValue;
- (unsigned long long)bl_itemIdentifierValue;

// Image: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics

- (long long)CPAnalyticsSignpostIDValue;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)cat_numberWithObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_localizedString;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (unsigned long long)crk_featureBoolTypeFromNumber:(id)arg1;

- (unsigned long long)crk_featureBoolType;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (long long)br_roundedLongLongValue;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete

+ (id)_cnac_numberWithAutocompleteAddressType:(long long)arg1;

- (long long)_cnac_autocompleteAddressTypeValue;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (double)_cn_timeIntervalValue;
- (void)_cn_times:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (id)wfName;
- (id)wfNameWithMaximumFractionDigits:(id)arg1;
- (id)wfSerializedRepresentation;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (id)dedup;
- (id)dk_dedup;

// Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge

- (double)databaseValue_doubleRepresentation;
- (long long)databaseValue_integerRepresentation;
- (id)databaseValue_toData;
- (id)databaseValue_toNumber;
- (id)databaseValue_toString;
- (long long)databaseValue_type;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)sf_asRowAlignment;
- (int)sf_asTopHit;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

+ (id)cr_numberWithCRContactGroupKind:(unsigned long long)arg1;
+ (id)cr_numberWithCRContactID:(long long)arg1;
+ (id)cr_numberWithCRRecentID:(long long)arg1;

- (unsigned long long)cr_CRContactGroupKindValue;
- (long long)cr_CRContactIDValue;
- (long long)cr_CRRecentIDValue;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)_cs_initWithXPCObject:(id)arg1;
- (id)_cs_xpcObject;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

+ (id)createWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;

- (const char *)encodedBytesAndReturnLength:(unsigned long long*)arg1 error:(id*)arg2;
- (id)encodedDataAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/DRMFoundation.framework/DRMFoundation

- (id)_os_dedup;

// Image: /System/Library/PrivateFrameworks/DebugHierarchyFoundation.framework/DebugHierarchyFoundation

- (id)dbgStringForType:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)dnds_numberWithDate:(id)arg1;
+ (id)dnds_safeNumberWithDate:(id)arg1;

- (id)dnds_dateValue;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (id)ef_SQLBinding;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS

+ (bool)acceptsTopLevelLeaves;
+ (bool)expectsContent;
+ (bool)frontingBasicTypes;
+ (bool)notifyOfUnknownTokens;
+ (bool)parsingLeafNode;
+ (bool)parsingWithSubItems;

- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (int)parsingState;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

- (bool)fm_isEqualToNumber:(id)arg1 withPrecision:(double)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkServerTimeInterval:(double)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (bool)hk_hasFloatingPointValue;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (bool)hk_animatable;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;

// Image: /System/Library/PrivateFrameworks/HearingCore.framework/HearingCore

- (id)localizedFormat;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;
+ (id)hmbEncodeQueryableParameter:(id)arg1;
+ (id)hmbNumberWithSQLite3Column:(struct sqlite3_stmt { }*)arg1 column:(int)arg2;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)localizedString;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

- (long long)associatedMessageType;
- (id)initWithAssociatedMessageType:(long long)arg1;
- (bool)isArchivable_im;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

- (void)ik_setUnit:(unsigned long long)arg1;
- (unsigned long long)ik_unit;
- (id)ik_unitStringValue;

// Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon

- (bool)isGreaterThan:(id)arg1;
- (bool)isGreaterThanOrEqualTo:(id)arg1;
- (bool)isLessThan:(id)arg1;
- (bool)isLessThanOrEqualTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit

- (long long)kgPropertyType;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

- (long long)ln_numberType;

// Image: /System/Library/PrivateFrameworks/MediaGroupsDaemon.framework/MediaGroupsDaemon

+ (id)rq_instanceFromCoded:(id)arg1;

- (id)rq_coded;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (bool)_BoolValue;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (bool)ml_matchesValue:(id)arg1 usingComparison:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/NearField.framework/NearField

- (id)encodeToCBOR;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (id)na_absoluteValue;
- (long long)na_compareAbsoluteValue:(id)arg1;
- (bool)na_isFloatValue;
- (bool)na_isSignedValue;
- (id)na_largerNumber:(id)arg1;
- (id)na_smallerNumber:(id)arg1;
- (id)na_valueRoundedToNearestStepValue:(id)arg1 relativeToBaseValue:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (bool)nu_isBoolean;
- (bool)nu_isFloat;
- (bool)nu_isInfinite;
- (bool)nu_isInteger;
- (bool)nu_isNaN;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (double)CGFloatValue;
- (bool)fc_isGreaterThan:(id)arg1;
- (bool)fc_isLessThan:(id)arg1;
- (bool)fc_isLessThanOrEqualTo:(id)arg1;
- (id)fc_largerNumber:(id)arg1;
- (id)fc_smallerNumber:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)encodeWithICCRCoder:(id)arg1;
- (id)initWithICCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)numberWithCGFloat:(double)arg1;

- (double)CGFloatValue;
- (bool)isFloatingPointType;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (bool)tsu_isAlmostEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (bool)pk_isIntegralNumber;
- (bool)pk_isNegativeNumber;
- (bool)pk_isNotANumber;
- (bool)pk_isPositiveNumber;
- (bool)pk_isZeroNumber;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (long long)PXDataSourceIdentifierValue;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (id)im_jsonSerializableValue;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (id)pbf_valueForSQLiteQuery;

// Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport

+ (id)_pas_intBackedFloatNumber:(float)arg1;

- (float)_pas_intBackedFloatValue;
- (id)_pas_revivedString;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (double)ttr_CGFloatValue;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

- (bool)matchesProcess:(id)arg1;
- (id)processPredicate;
- (int)rbs_pid;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (id)safari_percentageFromSamplingRate;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (double)siriCoreSQLiteValue_doubleRepresentation;
- (id)siriCoreSQLiteValue_escapedString:(bool)arg1;
- (long long)siriCoreSQLiteValue_integerRepresentation;
- (id)siriCoreSQLiteValue_toData;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_toString;
- (long long)siriCoreSQLiteValue_type;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

- (id)hksp_increment;

// Image: /System/Library/PrivateFrameworks/SoftPosReader.framework/SoftPosReader

- (id)boolStringValue;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

+ (id)numberWithItemIdentifier:(unsigned long long)arg1;

- (id)initWithItemIdentifier:(unsigned long long)arg1;
- (unsigned long long)itemIdentifierValue;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)tsu_numberWithCGFloat:(double)arg1;

- (void)appendJsonStringToString:(id)arg1;
- (double)tsu_CGFloatValue;
- (bool)tsu_isFloatingPointType;

// Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency

- (unsigned long long)kt_enumValueWithMax:(unsigned long long)arg1 defaultValue:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (id)vui_languageAwareDescription;

// Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore

- (unsigned long long)asVisionCoreTensorDataType;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (long long)__rc_folderType;
- (long long)rc_persistentIDValue;

// Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis

- (bool)WF_isEqualToNumber:(id)arg1 withPrecision:(float)arg2;

// Image: /System/Library/PrivateFrameworks/ZhuGeSupport.framework/ZhuGeSupport

+ (id)boolFromData:(id)arg1 needNegate:(bool)arg2;
+ (id)integerFromCInt:(unsigned long long)arg1 size:(unsigned long long)arg2 isSigned:(bool)arg3 needSwap:(bool)arg4;
+ (id)integerFromData:(id)arg1 size:(unsigned long long)arg2 truncate:(long long)arg3 isSigned:(bool)arg4 needSwap:(bool)arg5;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

+ (id)boolFromICSString:(id)arg1;

- (void)_ICSBoolAppendingToString:(id)arg1;
- (void)_ICSFBTypeAppendingToString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_ICSUTCOffsetAppendingToString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts

+ (id)tsch_instanceWithArchive:(const void*)arg1 unarchiver:(id)arg2;
+ (id)tsch_numberWithStyleInt:(int)arg1;
+ (id)tsch_numberWithStyleProperty:(int)arg1;
+ (id)tsch_optionalNumberWithArchive:(const void*)arg1 unarchiver:(id)arg2;
+ (void)tsch_saveOptionalNumber:(id)arg1 toArchive:(void*)arg2 archiver:(id)arg3;

- (int)chartGridValueType;
- (id)tsch_initWithArchive:(const void*)arg1 unarchiver:(id)arg2;
- (void)tsch_saveToArchive:(void*)arg1 archiver:(id)arg2;
- (int)tsch_styleIntValue;
- (int)tsch_stylePropertyValue;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables

- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSStyles.framework/TSStyles

- (int)tss_propertyValue;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)numberWithCGFloat:(double)arg1;

- (double)CGFloatValue;
- (bool)isFloatingPointType;
- (bool)tsu_isAlmostEqual:(id)arg1;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
