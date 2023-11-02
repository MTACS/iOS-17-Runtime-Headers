
@interface SBWakeDestination : NSObject {
    NSString * _identifier;
    SBSRemoteAlertDefinition * _remoteAlertDefinition;
    unsigned long long  _type;
    <SBWakeDestinationHandling> * _wakeHandler;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) SBSRemoteAlertDefinition *remoteAlertDefinition;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) <SBWakeDestinationHandling> *wakeHandler;

- (void).cxx_destruct;
- (id)identifier;
- (id)remoteAlertDefinition;
- (void)setIdentifier:(id)arg1;
- (void)setRemoteAlertDefinition:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setWakeHandler:(id)arg1;
- (unsigned long long)type;
- (id)wakeHandler;

@end
