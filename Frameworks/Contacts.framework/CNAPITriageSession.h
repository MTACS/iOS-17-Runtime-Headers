
@interface CNAPITriageSession : NSObject {
    double  _clientCalloutTime;
    bool  _hasClientCalloutTime;
    <CNAPITriageLogger> * _logger;
    CNContactFetchRequest * _request;
    <CNTimeProvider> * _timeProvider;
    double  _timeSessionBegan;
    double  _timeSessionEnded;
}

@property (readonly) <CNAPITriageLogger> *logger;
@property (readonly) CNContactFetchRequest *request;
@property (readonly) <CNTimeProvider> *timeProvider;

- (void).cxx_destruct;
- (void)addClientCalloutTime:(double)arg1;
- (void)close;
- (void)closeWithContacts:(id)arg1;
- (void)closeWithContacts:(id)arg1 orError:(id)arg2;
- (void)closeWithError:(id)arg1;
- (void)closeWithResult:(id)arg1;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 triageLogger:(id)arg2 timeProvider:(id)arg3;
- (id)logger;
- (id)normalizeCollectionOfContacts:(id)arg1;
- (void)open;
- (id)request;
- (id)timeProvider;

@end
