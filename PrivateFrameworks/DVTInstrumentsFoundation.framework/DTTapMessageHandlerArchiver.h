
@interface DTTapMessageHandlerArchiver : DTTapMessageHandler <DTXAllowedRPC> {
    DTXConnection * _helperConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_helperConnectionError;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 archiveURL:(id)arg2;
- (id)messageReceived:(id)arg1;

@end
