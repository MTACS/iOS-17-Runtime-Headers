
@interface ATXCorrelatedEvents : NSObject {
    ATXDuetEvent * _firstEvent;
    ATXDuetEvent * _secondEvent;
}

@property (nonatomic, readonly) ATXDuetEvent *firstEvent;
@property (nonatomic, readonly) ATXDuetEvent *secondEvent;

- (void).cxx_destruct;
- (id)firstEvent;
- (id)initWithFirstEvent:(id)arg1 secondEvent:(id)arg2;
- (id)secondEvent;

@end
