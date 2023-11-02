
@interface CLSClient : NSObject <CLSClientInterface> {
    <CLSClientDelegate> * _delagate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CLSClientDelegate> *delagate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)clientRemote_databaseRecreated;
- (id)delagate;
- (void)setDelagate:(id)arg1;

@end
