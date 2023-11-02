
@interface SeymourClient.CoreTelephonyObserver : NSObject <SMCCoreTelephonyClientDelegate> {
    void cellularData;
    void coreTelephonyClient;
    void delegate;
    void isCellularDataEnabled;
    void isRoaming;
    void queue;
}

- (void).cxx_destruct;
- (void)cellularDataStateChanged;
- (void)cellularDataStateChangedWithCellularDataEnabled:(bool)arg1;
- (void)cellularDataStateChangedWithRoaming:(bool)arg1;
- (id)init;

@end
