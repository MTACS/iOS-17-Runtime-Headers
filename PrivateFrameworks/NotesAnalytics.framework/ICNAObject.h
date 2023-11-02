
@interface ICNAObject : NSObject {
    ICNAEventReporter * _eventReporter;
}

@property (nonatomic, retain) ICNAEventReporter *eventReporter;

- (void).cxx_destruct;
- (id)eventReporter;
- (void)setEventReporter:(id)arg1;

@end
