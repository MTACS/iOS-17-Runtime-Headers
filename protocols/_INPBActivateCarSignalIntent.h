
@protocol _INPBActivateCarSignalIntent <NSObject>

@required

- (int)StringAsSignals:(NSString *)arg1;
- (void)addSignals:(int)arg1;
- (_INPBDataString *)carName;
- (void)clearSignals;
- (bool)hasCarName;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setCarName:(_INPBDataString *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setSignals:(int*)arg1 count:(unsigned long long)arg2;
- (int*)signals;
- (NSString *)signalsAsString:(int)arg1;
- (int)signalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)signalsCount;

@end
