
@interface CNVCardWritingOptions : NSObject {
    NSArray * _availableEncodings;
    bool  _compressPhotos;
    bool  _includeMeCardOnlySharingProperties;
    bool  _includeNotes;
    bool  _includePhotos;
    bool  _includePrivateBundleIdentifiers;
    bool  _includePrivateFields;
    bool  _includePronouns;
    bool  _includeUserSettings;
    bool  _includeWallpaper;
    unsigned long long  _maximumEncodingLength;
    unsigned long long  _maximumImageEncodingLength;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumImageSize;
    unsigned long long  _outputVersion;
    bool  _prefersUncroppedPhotos;
    bool  _shouldSuppressRegulatoryLogging;
    NSArray * _treatAsUnknownProperties;
    bool  _usePhotoReferencesIfAvailable;
    bool  _useUnencryptedPronouns;
}

@property (copy) NSArray *availableEncodings;
@property bool compressPhotos;
@property bool includeMeCardOnlySharingProperties;
@property bool includeNotes;
@property bool includePhotos;
@property bool includePrivateBundleIdentifiers;
@property bool includePrivateFields;
@property bool includePronouns;
@property bool includeUserSettings;
@property bool includeWallpaper;
@property unsigned long long maximumEncodingLength;
@property unsigned long long maximumImageEncodingLength;
@property struct CGSize { double x1; double x2; } maximumImageSize;
@property unsigned long long outputVersion;
@property bool prefersUncroppedPhotos;
@property bool shouldSuppressRegulatoryLogging;
@property (copy) NSArray *treatAsUnknownProperties;
@property bool usePhotoReferencesIfAvailable;
@property bool useUnencryptedPronouns;

+ (id)optionsFromPreferences;

- (void).cxx_destruct;
- (id)availableEncodings;
- (bool)compressPhotos;
- (id)description;
- (bool)includeMeCardOnlySharingProperties;
- (bool)includeNotes;
- (bool)includePhotos;
- (bool)includePrivateBundleIdentifiers;
- (bool)includePrivateFields;
- (bool)includePronouns;
- (bool)includeUserSettings;
- (bool)includeWallpaper;
- (id)init;
- (unsigned long long)maximumEncodingLength;
- (unsigned long long)maximumImageEncodingLength;
- (struct CGSize { double x1; double x2; })maximumImageSize;
- (unsigned long long)outputVersion;
- (bool)prefersUncroppedPhotos;
- (void)setAvailableEncodings:(id)arg1;
- (void)setCompressPhotos:(bool)arg1;
- (void)setIncludeMeCardOnlySharingProperties:(bool)arg1;
- (void)setIncludeNotes:(bool)arg1;
- (void)setIncludePhotos:(bool)arg1;
- (void)setIncludePrivateBundleIdentifiers:(bool)arg1;
- (void)setIncludePrivateFields:(bool)arg1;
- (void)setIncludePronouns:(bool)arg1;
- (void)setIncludeUserSettings:(bool)arg1;
- (void)setIncludeWallpaper:(bool)arg1;
- (void)setMaximumEncodingLength:(unsigned long long)arg1;
- (void)setMaximumImageEncodingLength:(unsigned long long)arg1;
- (void)setMaximumImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOutputVersion:(unsigned long long)arg1;
- (void)setPrefersUncroppedPhotos:(bool)arg1;
- (void)setShouldSuppressRegulatoryLogging:(bool)arg1;
- (void)setTreatAsUnknownProperties:(id)arg1;
- (void)setUsePhotoReferencesIfAvailable:(bool)arg1;
- (void)setUseUnencryptedPronouns:(bool)arg1;
- (bool)shouldSuppressRegulatoryLogging;
- (id)treatAsUnknownProperties;
- (bool)usePhotoReferencesIfAvailable;
- (bool)useUnencryptedPronouns;

@end
