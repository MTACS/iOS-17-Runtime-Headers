
@interface RBEventQueueEvent : NSObject {
    id /* block */  _action;
    id  _context;
    double  _eventTime;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, retain) id context;
@property (nonatomic) double eventTime;

- (void).cxx_destruct;
- (id /* block */)action;
- (long long)compare:(id)arg1;
- (id)context;
- (id)description;
- (double)eventTime;
- (void)setAction:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setEventTime:(double)arg1;

@end
