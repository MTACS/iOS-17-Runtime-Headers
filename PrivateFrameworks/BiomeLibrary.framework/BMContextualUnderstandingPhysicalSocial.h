
@interface BMContextualUnderstandingPhysicalSocial : BMEventBase <BMStoreData> {
    NSArray * _discoveredPeople;
    double  _endTimeInSecondsSinceReferenceDate;
    bool  _hasEndTimeInSecondsSinceReferenceDate;
    bool  _hasStartTimeInSecondsSinceReferenceDate;
    NSString * _localIdentifier;
    double  _startTimeInSecondsSinceReferenceDate;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *discoveredPeople;
@property (nonatomic, readonly) double endTimeInSecondsSinceReferenceDate;
@property (nonatomic) bool hasEndTimeInSecondsSinceReferenceDate;
@property (nonatomic) bool hasStartTimeInSecondsSinceReferenceDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) double startTimeInSecondsSinceReferenceDate;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_discoveredPeopleJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)discoveredPeople;
- (double)endTimeInSecondsSinceReferenceDate;
- (bool)hasEndTimeInSecondsSinceReferenceDate;
- (bool)hasStartTimeInSecondsSinceReferenceDate;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithLocalIdentifier:(id)arg1 discoveredPeople:(id)arg2 startTimeInSecondsSinceReferenceDate:(id)arg3 endTimeInSecondsSinceReferenceDate:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)localIdentifier;
- (id)serialize;
- (void)setHasEndTimeInSecondsSinceReferenceDate:(bool)arg1;
- (void)setHasStartTimeInSecondsSinceReferenceDate:(bool)arg1;
- (double)startTimeInSecondsSinceReferenceDate;
- (void)writeTo:(id)arg1;

@end
