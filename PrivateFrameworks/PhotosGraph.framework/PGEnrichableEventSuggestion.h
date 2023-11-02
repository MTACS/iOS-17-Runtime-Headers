
@interface PGEnrichableEventSuggestion : NSObject <PGSuggestion> {
    unsigned long long  _availableFeatures;
    bool  _containsUnverifiedPersons;
    NSSet * _features;
    NSArray * _keyAssets;
    unsigned char  _notificationQuality;
    unsigned short  _notificationState;
    NSArray * _representativeAssets;
    NSString * _subtitle;
    unsigned short  _subtype;
    NSArray * _suggestedPersonLocalIdentifiers;
    NSString * _title;
    unsigned short  _type;
    NSDate * _universalEndDate;
    NSDate * _universalStartDate;
}

@property (nonatomic, readonly) unsigned long long availableFeatures;
@property (nonatomic, readonly) bool containsUnverifiedPersons;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *features;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInvalid;
@property (nonatomic, readonly) NSArray *keyAssets;
@property (nonatomic) unsigned char notificationQuality;
@property (nonatomic) unsigned short notificationState;
@property (nonatomic, readonly, copy) NSArray *reasons;
@property (nonatomic, readonly) id recipe;
@property (nonatomic, readonly) unsigned long long relevanceDurationInDays;
@property (nonatomic, readonly) NSArray *representativeAssets;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) unsigned short state;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly) unsigned short subtype;
@property (nonatomic, readonly, copy) NSArray *suggestedPersonLocalIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (id)_whitelistedMeaningLabels;
- (id)assetCollectionToShareForAssetCollection:(id)arg1 loggingConnection:(id)arg2;
- (unsigned long long)availableFeatures;
- (bool)containsUnverifiedPersons;
- (id)creationDate;
- (id)description;
- (id)features;
- (id)initWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 enrichableEvent:(id)arg3 sharingSuggestionResults:(id)arg4 photoLibrary:(id)arg5 curationManager:(id)arg6 curationContext:(id)arg7 loggingConnection:(id)arg8 titleGenerationContext:(id)arg9;
- (id)keyAssets;
- (unsigned char)notificationQuality;
- (unsigned short)notificationState;
- (id)recipe;
- (unsigned long long)relevanceDurationInDays;
- (id)representativeAssets;
- (void)setNotificationQuality:(unsigned char)arg1;
- (void)setNotificationState:(unsigned short)arg1;
- (unsigned short)state;
- (id)subtitle;
- (unsigned short)subtype;
- (id)suggestedPersonLocalIdentifiers;
- (id)title;
- (unsigned short)type;
- (id)universalEndDate;
- (id)universalStartDate;
- (long long)version;

@end
