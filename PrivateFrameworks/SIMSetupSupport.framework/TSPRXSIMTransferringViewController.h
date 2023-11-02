
@interface TSPRXSIMTransferringViewController : TSIDSSimTransferringViewController {
    CoreTelephonyClient * _client;
    IMOneTimeCodeAccelerator * _oneTimeCodeAccelerator;
}

@property (retain) CoreTelephonyClient *client;
@property (retain) IMOneTimeCodeAccelerator *oneTimeCodeAccelerator;

- (void).cxx_destruct;
- (void)_maybeEnableOneTimeCodeCheck;
- (void)_setupOneTimeCodeDetection;
- (id)client;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)oneTimeCodeAccelerator;
- (void)setClient:(id)arg1;
- (void)setOneTimeCodeAccelerator:(id)arg1;

@end
