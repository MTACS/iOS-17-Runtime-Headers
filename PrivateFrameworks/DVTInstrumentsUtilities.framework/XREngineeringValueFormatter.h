
@interface XREngineeringValueFormatter : NSFormatter {
    NSNumberFormatter * _countFormatter;
    NSNumberFormatter * _countersFormulaResultFormatter;
    NSNumberFormatter * _fixedDecimalFormatter;
    NSNumberFormatter * _fpsFormatter;
    bool  _highestResolutionTimeEnabled;
    NSNumberFormatter * _intIDFormatter;
    NSMeasurementFormatter * _measurementFormatter;
    bool  _multiline;
    NSDate * _offsetForRelativeTimes;
    NSDateFormatter * _timeOfDayFormatter;
    bool  _useSimplifiedPlaceholder;
    bool  _withinNarrative;
}

@property (nonatomic) bool displaysFullBacktrace;
@property (getter=isHighestResolutionTimeEnabled, nonatomic) bool highestResolutionTimeEnabled;
@property (getter=isMultiline, nonatomic) bool multiline;
@property (nonatomic, retain) NSDate *offsetForRelativeTimes;
@property (nonatomic, retain) NSTimeZone *timeOfDayTimeZone;
@property (nonatomic) bool useSimplifiedPlaceholder;
@property (nonatomic, readonly) bool withinNarrative;

+ (id)networkAddressStringFromSockaddr:(const void*)arg1 length:(unsigned long long)arg2 resolveHostName:(id)arg3;

- (void).cxx_destruct;
- (bool)displaysFullBacktrace;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (bool)getTitleAndSubtitleForCoreEngineeringValue:(id)arg1 title:(id*)arg2 subtitle:(id*)arg3;
- (bool)getTitleAndSubtitleForEngineeringValue:(id)arg1 title:(id*)arg2 subtitle:(id*)arg3;
- (bool)getTitleAndSubtitleForProcessEngineeringValue:(id)arg1 title:(id*)arg2 subtitle:(id*)arg3;
- (bool)getTitleAndSubtitleForSwiftActorEngineeringValue:(id)arg1 title:(id*)arg2 subtitle:(id*)arg3;
- (bool)getTitleAndSubtitleForSwiftTaskEngineeringValue:(id)arg1 title:(id*)arg2 subtitle:(id*)arg3;
- (bool)getTitleAndSubtitleForSwiftTaskPriorityEngineeringValue:(id)arg1 title:(id*)arg2 subtitle:(id*)arg3;
- (bool)getTitleAndSubtitleForThreadEngineeringValue:(id)arg1 title:(id*)arg2 subtitle:(id*)arg3;
- (bool)getTitleAndSubtitleForURLSessionEngineeringValue:(id)arg1 title:(id*)arg2 subtitle:(id*)arg3;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isHighestResolutionTimeEnabled;
- (bool)isMultiline;
- (id)offsetForRelativeTimes;
- (void)setDisplaysFullBacktrace:(bool)arg1;
- (void)setHighestResolutionTimeEnabled:(bool)arg1;
- (void)setMultiline:(bool)arg1;
- (void)setOffsetForRelativeTimes:(id)arg1;
- (void)setTimeOfDayTimeZone:(id)arg1;
- (void)setUseSimplifiedPlaceholder:(bool)arg1;
- (id)stringForBacktraceEngineeringValue:(id)arg1;
- (id)stringForCallSiteEngineeringValue:(id)arg1;
- (id)stringForCoreProfileBacktraceEngineeringValue:(id)arg1;
- (id)stringForEngineeringValue:(id)arg1;
- (id)stringForInstrumentTypeEngineeringValue:(id)arg1;
- (id)stringForLibraryAddressEngineeringValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForSocketAddrEngineeringValue:(id)arg1;
- (id)stringForSwiftTaskNameUsingTextSymbolEngineeringValue:(id)arg1 andTextSymbolBacktrace:(id)arg2;
- (id)stringForTextSymbolEngineeringValue:(id)arg1 shouldIncludeLibrary:(bool)arg2;
- (id)stringForUserIDEngineeringValue:(id)arg1;
- (id)timeOfDayTimeZone;
- (id)typeStringForEngineeringValue:(id)arg1;
- (bool)useSimplifiedPlaceholder;
- (bool)withinNarrative;

@end
