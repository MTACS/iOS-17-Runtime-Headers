
@interface AVMetadataItem : NSObject <AVAirSerializationProtocol, AVAsynchronousKeyValueLoading, JFXMediaReaderMetadataItem, NSCopying, NSMutableCopying> {
    AVMetadataItemInternal * _priv;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly, copy) NSString *dataType;
@property (nonatomic, readonly) NSData *dataValue;
@property (nonatomic, readonly) NSDate *dateValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly, copy) NSString *extendedLanguageTag;
@property (nonatomic, readonly, copy) NSDictionary *extraAttributes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, readonly) NSNumber *numberValue;
@property (nonatomic, readonly) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (nonatomic, readonly, copy) <NSObject><NSCopying> *value;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (bool)_clientExpectsISOUserDataKeysInQuickTimeUserDataKeySpace;
+ (id)_figMetadataPropertyFromMetadataItems:(id)arg1;
+ (id)_isoUserDataKeysRequiringKeySpaceConversion;
+ (id)_metadataItemWithFigMetadataDictionary:(id)arg1;
+ (id)_metadataItemWithFigMetadataDictionary:(id)arg1 containerURL:(id)arg2 securityOptions:(unsigned int)arg3;
+ (id)_replaceQuickTimeUserDataKeySpaceWithISOUserDataKeySpaceIfRequired:(id)arg1;
+ (id)dataTypeForValue:(id)arg1;
+ (id)identifierForKey:(id)arg1 keySpace:(id)arg2;
+ (void)initialize;
+ (id)keyForIdentifier:(id)arg1;
+ (id)keySpaceForIdentifier:(id)arg1;
+ (id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(id /* block */)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredByIdentifier:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredByIdentifiers:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredByMetadataItemFilter:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3;
+ (id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withStringValue:(id)arg2;

- (bool)_areExtraAttributesOf:(id)arg1 comparableToExtraAttributesOf:(id)arg2;
- (id)_conformingDataTypes;
- (void*)_copyValueAsCFTypeWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 error:(id*)arg2;
- (id)_createJSONEncodedDataFromValue:(id)arg1 error:(id*)arg2;
- (void)_extractPropertiesFromDictionary:(id)arg1;
- (id)_figMetadataDictionary;
- (id)_figMetadataDictionaryWithValue:(bool)arg1 diviningValueDataType:(bool)arg2;
- (id)_figMetadataFormat;
- (id)_figMetadataSpecificationReturningError:(id*)arg1;
- (id)_initWithFigMetadataDictionary:(id)arg1;
- (id)_initWithReader:(struct OpaqueFigMetadataReader { }*)arg1 itemIndex:(long long)arg2;
- (id)_keyAsString;
- (void)_makePropertiesReady;
- (void)_makeValueReady;
- (id)_serializationDataType;
- (void)_updateCommonKey;
- (void)_updateIdentifier;
- (void)_updateLanguageInformationFromExtendedLanguageTag:(id)arg1;
- (void)_updateLanguageInformationFromLocale:(id)arg1;
- (id)_valueFromCFType:(void*)arg1;
- (void)cancelLoading;
- (id)commonKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataType;
- (id)dataValue;
- (id)dateValue;
- (void)dealloc;
- (id)description;
- (id)discoveryTimestamp;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)extendedLanguageTag;
- (id)extraAttributes;
- (unsigned long long)hash;
- (id)identifier;
- (struct CGImage { }*)imageValue;
- (id)init;
- (id)intrinsicAttributesOfExtraAttributes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)keySpace;
- (id)languageCode;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)locale;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)numberValue;
- (id)startDate;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)stringValue;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)unicodeLanguageCode;
- (id)unicodeLanguageIdentifier;
- (id)value;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)airRepresentationForArray:(id)arg1;
+ (id)itemArrayWithAirRepresentations:(id)arg1;
+ (id)itemWithAirDictionaryRepresentation:(id)arg1;

- (id)airDictionaryRepresentation;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

- (id)data;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (void)pf_loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)pf_statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)pf_stringValue;

// Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo

+ (id)simplyCreateMetadataItemWithMediaCharacteristic:(id)arg1;
+ (id)simplyCreateMetadataItemWithObject:(id)arg1 identifier:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 error:(out id*)arg4;
+ (id)simplyCreateMetadataItemWithRawData:(id)arg1 identifier:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;

// Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback

- (id)tvp_numberValue;

@end
