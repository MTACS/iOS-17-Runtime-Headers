
@protocol _INPBActivateCarSignalIntentResponse <NSObject>

@required

- (int)StringAsSignals:(NSString *)arg1;
- (void)addSignals:(int)arg1;
- (void)clearSignals;
- (void)setSignals:(int*)arg1 count:(unsigned long long)arg2;
- (int*)signals;
- (NSString *)signalsAsString:(int)arg1;
- (int)signalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)signalsCount;

@end
