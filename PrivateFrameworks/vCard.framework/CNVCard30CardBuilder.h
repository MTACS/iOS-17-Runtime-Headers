
@interface CNVCard30CardBuilder : NSObject {
    unsigned long long  _countOfLinesBeforePhoto;
    long long  _groupCount;
    <CNVCardLineFactory> * _lineFactory;
    NSMutableArray * _lines;
    <CNVCardPerson> * _person;
    bool  _photoHandled;
    id /* block */  _retrofitPhoto;
    NSMutableArray * _unknownProperties;
}

@property (nonatomic) unsigned long long countOfLinesBeforePhoto;
@property (nonatomic) long long groupCount;
@property (nonatomic, readonly) <CNVCardLineFactory> *lineFactory;
@property (nonatomic, readonly) NSMutableArray *lines;
@property (nonatomic, readonly) <CNVCardPerson> *person;
@property (nonatomic) bool photoHandled;
@property (nonatomic, readonly, copy) id /* block */ retrofitPhoto;
@property (nonatomic, readonly) NSMutableArray *unknownProperties;

+ (id)builderWithPerson:(id)arg1;
+ (unsigned long long)estimatedBytesAvailableForPhotoWithOptions:(id)arg1 serializer:(id)arg2;

- (void).cxx_destruct;
- (void)_addAttributesForCropRects:(id)arg1 imageHash:(id)arg2 toLine:(id)arg3;
- (void)addActivityAlerts;
- (void)addAddressingGrammar;
- (void)addAlternateBirthday;
- (void)addBeginningOfCard;
- (void)addBirthday;
- (void)addCalendarURIs;
- (void)addCardDAVUID;
- (void)addCategories;
- (void)addCompanyMarker;
- (void)addDowntimeWhitelist;
- (void)addEmailAddresses;
- (void)addEndOfCard;
- (void)addFullName;
- (void)addImageBackgroundColorsData;
- (void)addImageHash;
- (void)addImageType;
- (void)addInstantMessagingHandles:(id)arg1;
- (void)addInstantMessagingInfo;
- (void)addLegacyInstantMessagingHandles:(id)arg1 forService:(id)arg2 vCardProperty:(id)arg3;
- (void)addLineWithName:(id)arg1 value:(id)arg2;
- (void)addNameComponents;
- (void)addNameLines;
- (void)addNameOrderMarker;
- (void)addNote;
- (void)addOrganization;
- (void)addOtherDates;
- (void)addPhoneNumbers;
- (void)addPhonemeData;
- (bool)addPhotoReferences;
- (void)addPhotoWithOptions:(id)arg1;
- (void)addPostalAddresses;
- (void)addPreferredApplePersonaIdentifier;
- (void)addPreferredLikenessSource;
- (void)addPropertyLinesForValues:(id)arg1 generator:(id)arg2;
- (void)addRelatedNames;
- (void)addSharedPhotoDisplayPreference;
- (void)addSocialProfiles;
- (void)addUID;
- (void)addURLs;
- (void)addUnknownProperties;
- (void)addWallpaper;
- (void)addWatchWallpaperImageData;
- (void)buildWithSerializer:(id)arg1;
- (unsigned long long)countOfLinesBeforePhoto;
- (long long)groupCount;
- (id)initWithPerson:(id)arg1;
- (id)lineFactory;
- (id)lines;
- (id)person;
- (bool)photoHandled;
- (void)preparePhotoLineWithOptions:(id)arg1;
- (void)removeUnknownPropertiesWithTag:(id)arg1;
- (id /* block */)retrofitPhoto;
- (void)setCountOfLinesBeforePhoto:(unsigned long long)arg1;
- (void)setGroupCount:(long long)arg1;
- (void)setPhotoHandled:(bool)arg1;
- (id)unknownProperties;

@end
