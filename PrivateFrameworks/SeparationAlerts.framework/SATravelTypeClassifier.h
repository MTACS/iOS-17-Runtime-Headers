
@interface SATravelTypeClassifier : NSObject <SATravelTypeClassifierServiceProtocol> {
    NSHashTable * _clients;
    <SATimeServiceProtocol> * _clock;
    unsigned long long  _currentTravelType;
    NSDate * _currentTravelTypeChangeDate;
}

@property (nonatomic, retain) NSHashTable *clients;
@property (nonatomic, retain) <SATimeServiceProtocol> *clock;
@property (nonatomic) unsigned long long currentTravelType;
@property (nonatomic, copy) NSDate *currentTravelTypeChangeDate;
@property (nonatomic, readonly) unsigned long long travelType;

+ (id)convertSATravelTypeToString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_handleUserActivityEvent:(id)arg1;
- (void)_handleVehicleStateEvent:(id)arg1;
- (void)_notifyAllClientsOfTravelTypeChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 hints:(unsigned long long)arg3;
- (bool)_setNewTravelType:(unsigned long long)arg1 hints:(unsigned long long)arg2;
- (id)_vehicularHintsToString:(unsigned long long)arg1;
- (void)addClient:(id)arg1;
- (id)clients;
- (id)clock;
- (unsigned long long)currentTravelType;
- (id)currentTravelTypeChangeDate;
- (void)ingestTAEvent:(id)arg1;
- (id)initWithClock:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setClock:(id)arg1;
- (void)setCurrentTravelType:(unsigned long long)arg1;
- (void)setCurrentTravelTypeChangeDate:(id)arg1;
- (unsigned long long)travelType;

@end
