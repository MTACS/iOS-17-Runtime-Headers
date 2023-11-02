
@interface MCAirPlayPayload : MCPayload {
    NSArray * _allowListDestinations;
    NSArray * _destinationsWithPasswords;
    NSArray * _titlesAndDescriptions;
}

@property (nonatomic, retain) NSArray *allowListDestinations;
@property (nonatomic, retain) NSArray *destinationsWithPasswords;
@property (nonatomic, retain) NSArray *titlesAndDescriptions;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)allowListDestinations;
- (id)destinationsWithPasswords;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)payloadDescriptionKeyValueSections;
- (void)setAllowListDestinations:(id)arg1;
- (void)setDestinationsWithPasswords:(id)arg1;
- (void)setTitlesAndDescriptions:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)titlesAndDescriptions;
- (id)verboseDescription;

@end
