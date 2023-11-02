
@interface NTKMoonPhaseTimelineEntryModel : NTKTimelineEntryModel {
    NSString * _animationGroup;
    bool  _currentEvent;
    long long  _event;
    NSDate * _eventDate;
    long long  _hemisphere;
    NSString * _phaseName;
    unsigned long long  _phaseNumber;
}

@property (nonatomic, retain) NSString *animationGroup;
@property (nonatomic) bool currentEvent;
@property (nonatomic) long long event;
@property (nonatomic, retain) NSDate *eventDate;
@property (nonatomic) long long hemisphere;
@property (nonatomic, retain) NSString *phaseName;
@property (nonatomic) unsigned long long phaseNumber;

+ (id)circular:(id)arg1 isMedium:(bool)arg2;
+ (id)extraLarge:(id)arg1;
+ (id)imageProviderWithOnePieceImage:(id)arg1;
+ (id)largeModular:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)providerWithText:(id)arg1;
+ (id)smallModular:(id)arg1;
+ (id)smallUtility:(id)arg1;
+ (id)textForMoonPhaseEvent:(long long)arg1;
+ (id)textForMoonPhaseEvent:(long long)arg1 useShort:(bool)arg2;

- (void).cxx_destruct;
- (id)animationGroup;
- (bool)currentEvent;
- (long long)event;
- (id)eventDate;
- (long long)hemisphere;
- (id)phaseName;
- (unsigned long long)phaseNumber;
- (void)setAnimationGroup:(id)arg1;
- (void)setCurrentEvent:(bool)arg1;
- (void)setEvent:(long long)arg1;
- (void)setEventDate:(id)arg1;
- (void)setHemisphere:(long long)arg1;
- (void)setPhaseName:(id)arg1;
- (void)setPhaseNumber:(unsigned long long)arg1;
- (id)templateForComplicationFamily:(long long)arg1;

@end