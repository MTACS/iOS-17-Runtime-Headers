
@interface LBFTrialEvent : NSObject {
    long long  _eventType;
    NSNumber * _succeeded;
}

@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) NSNumber *succeeded;

- (void).cxx_destruct;
- (long long)eventType;
- (id)initWithActivation:(bool)arg1;
- (id)initWithAllocation:(bool)arg1;
- (id)initWithDeactivation:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (id)succeeded;

@end
