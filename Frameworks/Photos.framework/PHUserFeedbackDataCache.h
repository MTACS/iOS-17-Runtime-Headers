
@interface PHUserFeedbackDataCache : NSObject {
    NSSet * _areaNamesWithNegativeFeedback;
    NSSet * _dateIntervalsWithNegativeFeedback;
    NSSet * _datesWithNegativeFeedback;
    NSSet * _deniedFeaturedPhotoUUIDs;
    NSSet * _holidayNamesWithNegativeFeedback;
    NSArray * _importantPersons;
    NSSet * _locationsWithNegativeFeedback;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_os_log> * _userFeedbackLogging;
    NSDictionary * _userFeedbackTypeByPersonUUID;
}

@property (nonatomic, retain) NSSet *areaNamesWithNegativeFeedback;
@property (nonatomic, retain) NSSet *dateIntervalsWithNegativeFeedback;
@property (nonatomic, retain) NSSet *datesWithNegativeFeedback;
@property (nonatomic, retain) NSSet *deniedFeaturedPhotoUUIDs;
@property (nonatomic, retain) NSSet *holidayNamesWithNegativeFeedback;
@property (nonatomic, retain) NSArray *importantPersons;
@property (nonatomic, retain) NSSet *locationsWithNegativeFeedback;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSDictionary *userFeedbackTypeByPersonUUID;

+ (id)_emptyUserFeedbackDataCache;
+ (bool)_isUserFeedbackFeatureFlagEnabled;

- (void).cxx_destruct;
- (id)_confidentMergeCandidateUUIDsForPerson:(id)arg1;
- (void)_loadDeniedFeaturedPhotoUUIDsWithPhotoLibrary:(id)arg1;
- (void)_loadMemoryFeedbackDataWithPhotoLibrary:(id)arg1;
- (void)_loadPersonFeedbackDataWithPhotoLibrary:(id)arg1;
- (id)areaNamesWithNegativeFeedback;
- (id)dateIntervalsWithNegativeFeedback;
- (id)datesWithNegativeFeedback;
- (id)deniedFeaturedPhotoUUIDs;
- (id)holidayNamesWithNegativeFeedback;
- (id)importantPersons;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 importantPersons:(id)arg2;
- (void)loadDataWithPhotoLibrary:(id)arg1;
- (id)locationsWithNegativeFeedback;
- (id)photoLibrary;
- (void)setAreaNamesWithNegativeFeedback:(id)arg1;
- (void)setDateIntervalsWithNegativeFeedback:(id)arg1;
- (void)setDatesWithNegativeFeedback:(id)arg1;
- (void)setDeniedFeaturedPhotoUUIDs:(id)arg1;
- (void)setHolidayNamesWithNegativeFeedback:(id)arg1;
- (void)setImportantPersons:(id)arg1;
- (void)setLocationsWithNegativeFeedback:(id)arg1;
- (void)setUserFeedbackTypeByPersonUUID:(id)arg1;
- (id)userFeedbackTypeByPersonUUID;

@end
