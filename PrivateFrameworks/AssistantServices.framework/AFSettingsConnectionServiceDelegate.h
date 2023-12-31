
@interface AFSettingsConnectionServiceDelegate : NSObject <AFSettingsServiceDelegate> {
    AFSettingsConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSettingsConnection:(id)arg1;
- (oneway void)syncVerificationPartialResult:(id)arg1;
- (oneway void)syncVerificationServerReport:(id)arg1;

@end
