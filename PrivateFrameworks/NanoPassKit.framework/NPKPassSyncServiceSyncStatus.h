
@interface NPKPassSyncServiceSyncStatus : NSObject {
    NSDate * _incomingChangeDate;
    NPKPassSyncChange * _lastKnownIncomingChange;
    NPKPassSyncChange * _lastKnownOutgoingChange;
    NSDate * _outgoingChangeDate;
}

@property (nonatomic, retain) NSDate *incomingChangeDate;
@property (nonatomic, retain) NPKPassSyncChange *lastKnownIncomingChange;
@property (nonatomic, retain) NPKPassSyncChange *lastKnownOutgoingChange;
@property (nonatomic, retain) NSDate *outgoingChangeDate;

- (void).cxx_destruct;
- (id)incomingChangeDate;
- (id)lastKnownIncomingChange;
- (id)lastKnownOutgoingChange;
- (id)outgoingChangeDate;
- (void)reset;
- (void)setIncomingChangeDate:(id)arg1;
- (void)setLastKnownIncomingChange:(id)arg1;
- (void)setLastKnownOutgoingChange:(id)arg1;
- (void)setOutgoingChangeDate:(id)arg1;
- (bool)shouldSyncWithCurrentIncomingChange:(id)arg1 currentOutgoingChange:(id)arg2 currentDate:(id)arg3;

@end
