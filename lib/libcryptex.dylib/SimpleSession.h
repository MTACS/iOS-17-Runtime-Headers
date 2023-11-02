
@interface SimpleSession : NSObject {
    NSObject<OS_session> * _session;
}

@property (retain) NSObject<OS_session> *session;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFlags:(unsigned long long)arg1;
- (id)initWithSessionCore:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;

@end
