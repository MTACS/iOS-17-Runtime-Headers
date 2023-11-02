
@interface LBFDprivacydEvent : NSObject {
    NSString * _errorMessage;
    int  _eventPhase;
    NSString * _eventUUID;
    NSNumber * _succeeded;
}

@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) int eventPhase;
@property (nonatomic, readonly) NSString *eventUUID;
@property (nonatomic, readonly) NSNumber *succeeded;

- (void).cxx_destruct;
- (id)errorMessage;
- (int)eventPhase;
- (id)eventUUID;
- (id)initWithEventPhase:(int)arg1 eventUUID:(id)arg2 succeeded:(bool)arg3 error:(id)arg4;
- (id)succeeded;

@end
