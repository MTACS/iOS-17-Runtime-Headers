
@interface CLSClueCollection : NSObject {
    NSMapTable * _inputCluesByKey;
    CLSInputPeopleClue * _mePersonClue;
    NSMapTable * _meaningCluesByKey;
    NSMapTable * _outputCluesByKey;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _recursiveLock;
    unsigned long long  _versionCount;
}

@property (readonly) CLSMeaningClue *locationMobilityClue;
@property (nonatomic, retain) CLSInputPeopleClue *mePersonClue;
@property (readonly) unsigned long long versionCount;

- (void).cxx_destruct;
- (void)_incrementVersionCount;
- (void)_mergeInputClue:(id)arg1;
- (void)_mergeMeaningClue:(id)arg1;
- (void)_mergeOutputClue:(id)arg1;
- (id)description;
- (void)enumerateLocationClues:(id /* block */)arg1;
- (void)enumeratePeopleClues:(id /* block */)arg1;
- (void)enumerateTimeClues:(id /* block */)arg1;
- (void)enumerateTimeOfDayClues:(id /* block */)arg1;
- (bool)hasMeaningClueWithKey:(id)arg1 andValue:(id)arg2;
- (bool)hasMeaningClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (bool)hasOutputClueWithKey:(id)arg1 andValue:(id)arg2;
- (bool)hasOutputClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)init;
- (id)inputClues;
- (id)inputCluesForKey:(id)arg1;
- (id)localDates;
- (id)localEndDate;
- (id)localStartDate;
- (id)locationMobilityClue;
- (id)locationPlacemarks;
- (id)locationRegions;
- (id)locationRegionsInPlacemarks;
- (id)locations;
- (id)mePerson;
- (id)mePersonClue;
- (id)meaningClues;
- (id)meaningCluesForKey:(id)arg1;
- (id)meaningCluesForKey:(id)arg1 andValue:(id)arg2;
- (void)mergeClues:(id)arg1;
- (unsigned long long)numberOfDays;
- (unsigned long long)numberOfLocations;
- (unsigned long long)numberOfPersons;
- (unsigned long long)numberOfTimes;
- (id)outputClueRelatedEventsForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)outputClueRelatedPeopleForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)outputClueRelatedPlacesForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)outputClues;
- (id)outputCluesForKey:(id)arg1;
- (id)outputCluesForKey:(id)arg1 andValue:(id)arg2;
- (id)peopleDescription;
- (id)peopleDescriptionWithoutPeople:(id)arg1;
- (id)peopleNames;
- (void)prepareWithProgressBlock:(id /* block */)arg1;
- (void)setMePersonClue:(id)arg1;
- (double)timeInterval;
- (id)uniqueInputClues;
- (id)uniqueMeaningClueForKey:(id)arg1 andValue:(id)arg2;
- (id)uniqueMeaningClues;
- (id)uniqueMeaningCluesForKey:(id)arg1;
- (id)uniqueOutputClueForKey:(id)arg1 andValue:(id)arg2;
- (id)uniqueOutputClues;
- (id)uniqueOutputCluesForKey:(id)arg1;
- (id)universalDateInterval;
- (id)universalDates;
- (id)universalEndDate;
- (id)universalStartDate;
- (unsigned long long)versionCount;
- (long long)year;

@end
