
@interface IQFMapsPersonalizationResult : NSObject <NSSecureCoding> {
    NSDate * _dateOfLastVisit;
    NSDate * _endEventDate;
    NSNumber * _entityRelevanceScore;
    NSString * _eventName;
    NSString * _flightCode;
    NSNumber * _isCandidateForPromotion;
    NSString * _muid;
    NSNumber * _numberOfGuests;
    NSNumber * _numberOfVisits;
    NSNumber * _numberOfVisitsGivenLocation;
    unsigned long long  _resultType;
    NSNumber * _score;
    NSDate * _startEventDate;
    NSString * _terminal;
    NSString * _ticketNumber;
}

@property (retain) NSDate *dateOfLastVisit;
@property (retain) NSDate *endEventDate;
@property (retain) NSNumber *entityRelevanceScore;
@property (retain) NSString *eventName;
@property (retain) NSString *flightCode;
@property (retain) NSString *muid;
@property (retain) NSNumber *numberOfGuests;
@property (retain) NSNumber *numberOfVisits;
@property (retain) NSNumber *numberOfVisitsGivenLocation;
@property unsigned long long resultType;
@property (retain) NSDate *startEventDate;
@property (retain) NSString *terminal;
@property (retain) NSString *ticketNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_isCandidateForPromotion;
- (id)_score;
- (id)dateOfLastVisit;
- (void)encodeWithCoder:(id)arg1;
- (id)endEventDate;
- (id)entityRelevanceScore;
- (id)eventName;
- (id)flightCode;
- (id)initWithCoder:(id)arg1;
- (id)initWithMUID:(id)arg1 resultType:(unsigned long long)arg2 eventName:(id)arg3 startEventDate:(id)arg4 endEventDate:(id)arg5 terminal:(id)arg6 flightCode:(id)arg7 ticketNumber:(id)arg8 numberOfVisits:(id)arg9 dateOfLastVisit:(id)arg10 numberOfGuests:(id)arg11;
- (id)initWithMUID:(id)arg1 resultType:(unsigned long long)arg2 eventName:(id)arg3 startEventDate:(id)arg4 endEventDate:(id)arg5 terminal:(id)arg6 flightCode:(id)arg7 ticketNumber:(id)arg8 numberOfVisits:(id)arg9 numberOfVisitsGivenLocation:(id)arg10 dateOfLastVisit:(id)arg11 entityRelevanceScore:(id)arg12 numberOfGuests:(id)arg13;
- (bool)isCandidateForPromotion;
- (id)muid;
- (id)numberOfGuests;
- (id)numberOfVisits;
- (id)numberOfVisitsGivenLocation;
- (unsigned long long)resultType;
- (double)score;
- (void)setDateOfLastVisit:(id)arg1;
- (void)setEndEventDate:(id)arg1;
- (void)setEntityRelevanceScore:(id)arg1;
- (void)setEventName:(id)arg1;
- (void)setFlightCode:(id)arg1;
- (void)setIsCandidateForPromotion:(bool)arg1;
- (void)setMuid:(id)arg1;
- (void)setNumberOfGuests:(id)arg1;
- (void)setNumberOfVisits:(id)arg1;
- (void)setNumberOfVisitsGivenLocation:(id)arg1;
- (void)setResultType:(unsigned long long)arg1;
- (void)setScore:(double)arg1;
- (void)setStartEventDate:(id)arg1;
- (void)setTerminal:(id)arg1;
- (void)setTicketNumber:(id)arg1;
- (id)startEventDate;
- (id)terminal;
- (id)ticketNumber;

@end
