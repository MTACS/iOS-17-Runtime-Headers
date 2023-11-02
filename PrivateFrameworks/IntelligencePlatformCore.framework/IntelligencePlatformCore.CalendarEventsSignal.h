
@interface IntelligencePlatformCore.CalendarEventsSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void dateFetcher;
    void oneMinuteInSeconds;
    void store;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
