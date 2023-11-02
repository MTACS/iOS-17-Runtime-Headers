
@interface MSServiceRequestLapseEvent : NSObject {
    NSDate * _dateOfRequest;
    unsigned long long  _endTime;
    NSDate * _recordCreationDate;
    NSString * _serviceID;
    unsigned long long  _timeOfRequest;
}

@property (nonatomic, retain) NSDate *dateOfRequest;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic, retain) NSDate *recordCreationDate;
@property (nonatomic, retain) NSString *serviceID;
@property (nonatomic) unsigned long long timeOfRequest;

- (void).cxx_destruct;
- (id)dateOfRequest;
- (double)durationBetweenRequestAndReadyToUse;
- (double)durationBetweenRequestAndRecordCreation;
- (unsigned long long)endTime;
- (id)initWithServiceID:(id)arg1;
- (id)recordCreationDate;
- (id)serviceID;
- (void)setDateOfRequest:(id)arg1;
- (void)setEndTime:(unsigned long long)arg1;
- (void)setRecordCreationDate:(id)arg1;
- (void)setServiceID:(id)arg1;
- (void)setTimeOfRequest:(unsigned long long)arg1;
- (unsigned long long)timeOfRequest;

@end
