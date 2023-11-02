
@interface NUNIMoonPhaseModel : NSObject {
    NSDate * _entryDate;
    long long  _event;
    NSDate * _eventDate;
    long long  _hemisphere;
    CLLocation * _location;
    NSString * _phaseName;
    unsigned long long  _phaseNumber;
}

@property (nonatomic, readonly) NSDate *entryDate;
@property (nonatomic, readonly) long long event;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) long long hemisphere;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSString *phaseName;
@property (nonatomic, readonly) unsigned long long phaseNumber;

- (void).cxx_destruct;
- (id)entryDate;
- (long long)event;
- (id)eventDate;
- (long long)hemisphere;
- (id)initWithDate:(id)arg1 location:(id)arg2;
- (id)location;
- (id)phaseName;
- (unsigned long long)phaseNumber;

@end
