
@interface MapsSuggestionsBluetoothVehicleConnectionTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsTriggerObserver> {
    MapsSuggestionsDarwinNotificationTrigger * _btConnectTrigger;
    MapsSuggestionsDarwinNotificationTrigger * _btDisconnectTrigger;
    MapsSuggestionsDarwinNotificationTrigger * _btExitTrigger;
    bool  _onConnect;
    bool  _onDisconnect;
    bool  _onExit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initFireOnConnect:(bool)arg1 disconnect:(bool)arg2 exit:(bool)arg3;
- (void)triggerFired:(id)arg1;

@end
