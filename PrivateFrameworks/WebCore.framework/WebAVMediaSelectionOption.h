
@interface WebAVMediaSelectionOption : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _localizedDisplayName;
    NSString * _mediaType;
}

@property (nonatomic, readonly) NSString *localizedDisplayName;
@property (nonatomic, readonly) NSString *mediaType;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_isDesignatedDefault;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)displayNameWithLocale:(id)arg1;
- (id)extendedLanguageTag;
- (bool)hasMediaCharacteristic:(id)arg1;
- (id)initWithMediaType:(id)arg1 displayName:(id)arg2;
- (bool)isPlayable;
- (id)languageCode;
- (id)locale;
- (id)localizedDisplayName;
- (id)mediaCharacteristics;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (id)outOfBandIdentifier;
- (id)outOfBandSource;
- (id)propertyList;
- (id)track;

@end
