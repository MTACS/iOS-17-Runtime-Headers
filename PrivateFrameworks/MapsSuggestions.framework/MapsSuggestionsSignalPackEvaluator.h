
@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack * _signalPack;
}

+ (id)evaluatorFromSignalPack:(id)arg1;

- (void).cxx_destruct;
- (bool)hasCarPlayInfo;
- (bool)hasDistanceFromHereToDestinationInfo;
- (bool)hasDistanceFromHereToOriginInfo;
- (bool)hasDistanceFromOriginToDestinationInfo;
- (bool)hasMapTypeInfo;
- (bool)hasRidesharingInfo;
- (bool)hasSignalForExpressPaymentCard;
- (bool)hasSignalForHasATransitCard;
- (bool)hasSignalForIsCurrentlyInATrip;
- (bool)hasSignalForPaymentCard;
- (bool)hasSignalForUpcomingTrip;
- (bool)hasTouristInfo;
- (bool)hasTransitInfo;
- (bool)hasUserTransportTypePreferenceInfo;
- (bool)hasWeatherInfo;
- (bool)hasWeatherPrecipitationInfo;
- (bool)hasWeatherTemperatureInfo;
- (id)initWithSignalPack:(id)arg1;
- (bool)isBadWeather;
- (bool)isCarPlayConnected;
- (bool)isColdWeather;
- (bool)isEasilyWalkable;
- (bool)isHighChanceOfRaining;
- (bool)isHighChanceOfSnowing;
- (bool)isHotWeather;
- (bool)isLowChanceOfRaining;
- (bool)isLowChanceOfSnowing;
- (bool)isMapTypeTransit;
- (bool)isMildWeather;
- (bool)isRideSharingAppsInstalled;
- (bool)isTouristHere;
- (bool)isTransitCurrentlyPossible;
- (double)isTransitUserConfidence;
- (double)isTransitUserHereConfidence;
- (bool)isUserPreferenceDriving;
- (bool)isUserPreferenceRidesharing;
- (bool)isUserPreferenceTransit;
- (bool)isUserPreferenceWalking;
- (bool)isWalkable;
- (bool)userHasAPaymentCard;
- (bool)userHasATransitCard;
- (bool)userHasAnExpressPaymentCard;
- (bool)userHasAnUpcomingTrip;
- (bool)userIsCurrentlyInATrip;

@end
