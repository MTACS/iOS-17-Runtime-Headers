
@interface EKEventFetchRequestToken : NSObject <EKFetchRequestToken> {
    EKEventStore * _eventStore;
    unsigned int  _token;
}

@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) unsigned int token;

- (void).cxx_destruct;
- (void)cancel;
- (id)eventStore;
- (id)initWithEventStore:(id)arg1 token:(int)arg2;
- (unsigned int)token;

@end
