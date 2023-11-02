
@interface FigCoreTelephony : NSObject <CoreTelephonyClientRegistrationDelegate> {
    struct OpaqueFigReentrantMutex { } * _cellStatsLock;
    int  bars;
    NSString * carrierName;
    CoreTelephonyClient * ctClient;
    NSDictionary * signalStrength;
}

@property (readonly) int bars;
@property (readonly) NSString *carrierName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *signalStrength;
@property (readonly) Class superclass;

- (int)bars;
- (id)carrierName;
- (void)dealloc;
- (id)initWithError:(id*)arg1;
- (void)saveCarrierName;
- (void)saveSignalStrengthInfo;
- (id)signalStrength;
- (void)signalStrengthChanged:(id)arg1 info:(id)arg2;

@end
