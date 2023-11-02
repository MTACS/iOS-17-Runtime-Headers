
@interface MFSMTPDelivery : MFMailDelivery {
    MFSMTPConnection * _connection;
}

+ (id)log;

- (void).cxx_destruct;
- (void)_openConnection;
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (Class)deliveryClass;
- (void)setAccount:(id)arg1;

@end
