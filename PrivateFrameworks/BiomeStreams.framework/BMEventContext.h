
@interface BMEventContext : NSObject {
    NSObject * _previousEvent;
}

@property (nonatomic, retain) NSObject *previousEvent;

- (void).cxx_destruct;
- (id)previousEvent;
- (void)setPreviousEvent:(id)arg1;

@end
