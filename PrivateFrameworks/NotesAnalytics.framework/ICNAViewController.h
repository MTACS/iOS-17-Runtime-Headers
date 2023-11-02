
@interface ICNAViewController : UIViewController {
    ICNAEventReporter * _eventReporter;
}

@property (nonatomic, retain) ICNAEventReporter *eventReporter;

- (void).cxx_destruct;
- (void)dealloc;
- (id)eventReporter;
- (void)eventReporterLostSession:(id)arg1;
- (void)setEventReporter:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
