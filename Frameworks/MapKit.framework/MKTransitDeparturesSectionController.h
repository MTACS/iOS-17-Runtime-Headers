
@interface MKTransitDeparturesSectionController : MKTransitSectionController {
    NSString * _departureSequenceContainer;
    bool  _departuresAreVehicleSpecific;
    NSString * _direction;
    bool  _needsFindDeparturesAreVehicleSpecific;
    bool  _needsFindRowForServiceGap;
    NSArray * _sequences;
    NSMapTable * _sequencesToInclude;
    MKTransitDepartureServiceGapFormatter * _serviceGapFormatter;
    NSDictionary * _serviceGapStrings;
}

@property (nonatomic, readonly) bool departuresAreVehicleSpecific;
@property (nonatomic, retain) MKTransitDepartureServiceGapFormatter *serviceGapFormatter;
@property (nonatomic, readonly) bool showOperatingHours;

- (void).cxx_destruct;
- (void)_buildRows;
- (bool)_isDateLastDeparture:(id)arg1 withNextDepartureDate:(id)arg2 forSequence:(id)arg3;
- (id)_nextLastDepartureDateForSequence:(id)arg1 afterDate:(id)arg2;
- (id)_pagingFilter;
- (void)_serviceGapDate:(out id*)arg1 string:(out id*)arg2 forSequence:(id)arg3 withDepartureIndex:(unsigned long long)arg4;
- (void)_setNeedsBuildRows;
- (void)_sharedSetup;
- (bool)departuresAreVehicleSpecific;
- (id)init;
- (id)initWithMapItem:(id)arg1 system:(id)arg2;
- (id)initWithMapItem:(id)arg1 system:(id)arg2 departureSequenceContainer:(id)arg3;
- (id)initWithMapItem:(id)arg1 system:(id)arg2 direction:(id)arg3;
- (id)sequenceForRow:(long long)arg1 outIsNewLine:(out bool*)arg2 outNextLineIsSame:(out bool*)arg3;
- (id)sequences;
- (id)serviceGapDescriptionForRow:(long long)arg1;
- (id)serviceGapFormatter;
- (void)setDepartureCutoffDate:(id)arg1;
- (void)setServiceGapFormatter:(id)arg1;
- (bool)showOperatingHours;

@end
