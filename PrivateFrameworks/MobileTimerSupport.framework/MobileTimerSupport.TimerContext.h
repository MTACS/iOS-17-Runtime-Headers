
@interface MobileTimerSupport.TimerContext : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dismissedDate;
    void duration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  fireDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  firedDate;
    void firing;
    void remainingTime;
    void state;
    void timerId;
    void title;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithState:(long long)arg1 timerId:(id)arg2 duration:(double)arg3 remainingTime:(double)arg4 firing:(bool)arg5 fireDate:(id)arg6 title:(id)arg7;

@end
