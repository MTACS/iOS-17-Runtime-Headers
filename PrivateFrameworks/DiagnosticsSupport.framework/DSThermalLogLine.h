
@interface DSThermalLogLine : DSLogLine {
    NSString * _eventType;
    float  _maxTemp;
}

@property (nonatomic, retain) NSString *eventType;
@property (nonatomic, readonly) bool isTrapEntry;
@property (nonatomic, readonly) bool isTrapEvent;
@property (nonatomic) float maxTemp;

- (void).cxx_destruct;
- (id)eventType;
- (id)initWithLogLine:(id)arg1;
- (bool)isTrapEntry;
- (bool)isTrapEvent;
- (float)maxTemp;
- (void)setEventType:(id)arg1;
- (void)setMaxTemp:(float)arg1;

@end
