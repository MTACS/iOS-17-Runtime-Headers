
@interface PGSingleAssetSuggestion : NSObject <PGSuggestion> {
    PHAsset * _asset;
    unsigned long long  _availableFeatures;
    NSSet * _features;
    bool  _isInvalid;
    NSArray * _reasons;
    id  _recipe;
    unsigned long long  _relevanceDurationInDays;
    double  _score;
    NSString * _subtitle;
    unsigned short  _subtype;
    NSString * _title;
    unsigned short  _type;
}

@property (nonatomic) unsigned long long availableFeatures;
@property (nonatomic, readonly) bool containsUnverifiedPersons;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *features;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInvalid;
@property (nonatomic, readonly) NSArray *keyAssets;
@property (nonatomic, readonly) unsigned char notificationQuality;
@property (nonatomic, readonly) unsigned short notificationState;
@property (nonatomic, copy) NSArray *reasons;
@property (nonatomic, retain) id recipe;
@property (nonatomic) unsigned long long relevanceDurationInDays;
@property (nonatomic, readonly) NSArray *representativeAssets;
@property (nonatomic) double score;
@property (nonatomic, readonly) unsigned short state;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) unsigned short subtype;
@property (nonatomic, readonly, copy) NSArray *suggestedPersonLocalIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (unsigned long long)availableFeatures;
- (bool)containsUnverifiedPersons;
- (id)creationDate;
- (id)description;
- (id)features;
- (id)initWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 asset:(id)arg3;
- (bool)isInvalid;
- (id)keyAssets;
- (unsigned char)notificationQuality;
- (unsigned short)notificationState;
- (id)reasons;
- (id)recipe;
- (unsigned long long)relevanceDurationInDays;
- (id)representativeAssets;
- (double)score;
- (void)setAvailableFeatures:(unsigned long long)arg1;
- (void)setIsInvalid:(bool)arg1;
- (void)setReasons:(id)arg1;
- (void)setRecipe:(id)arg1;
- (void)setRelevanceDurationInDays:(unsigned long long)arg1;
- (void)setScore:(double)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
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
