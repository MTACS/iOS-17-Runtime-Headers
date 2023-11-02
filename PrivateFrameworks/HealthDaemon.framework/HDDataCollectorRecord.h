
@interface HDDataCollectorRecord : NSObject {
    <HDDataCollector> * _collector;
    HDDataCollectorState * _state;
}

@property (nonatomic) <HDDataCollector> *collector;
@property (nonatomic, retain) HDDataCollectorState *state;

- (void).cxx_destruct;
- (id)collector;
- (id)description;
- (void)setCollector:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
