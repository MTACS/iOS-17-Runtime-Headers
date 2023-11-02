
@interface _HFAlarmConnectionProvider : NSObject <COAlarmManagerConnectionProvider> {
    NSXPCConnection * _alarmManagerServiceConnection;
}

@property (nonatomic, readonly) NSXPCConnection *alarmManagerServiceConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alarmManagerServiceConnection;

@end
