
@interface _MKTransitInactiveLine : NSObject <MKInactiveTransitLine> {
    bool  _blocked;
    <GEOTransitDepartureSequence> * _departuresSequence;
    <GEOTransitLine> * _line;
    NSDate * _referenceDate;
    NSDate * _serviceResumesDate;
    NSTimeZone * _timeZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <GEOTransitDepartureSequence> *departuresSequence;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitLine> *line;
@property (nonatomic, readonly) NSString *serviceResumesDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)departuresSequence;
- (id)initWithTransitLine:(id)arg1 blocked:(bool)arg2 serviceResumesDate:(id)arg3 timeZone:(id)arg4 referenceDate:(id)arg5 departuresSequence:(id)arg6;
- (id)line;
- (id)serviceResumesDescription;

@end
