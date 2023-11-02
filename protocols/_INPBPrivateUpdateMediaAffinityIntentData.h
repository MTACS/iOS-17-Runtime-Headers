
@protocol _INPBPrivateUpdateMediaAffinityIntentData <NSObject>

@required

- (void)addInternalSignal:(NSString *)arg1;
- (void)clearInternalSignals;
- (bool)hasPrivateMediaIntentData;
- (NSString *)internalSignalAtIndex:(unsigned long long)arg1;
- (NSArray *)internalSignals;
- (unsigned long long)internalSignalsCount;
- (_INPBPrivateMediaIntentData *)privateMediaIntentData;
- (void)setInternalSignals:(NSArray *)arg1;
- (void)setPrivateMediaIntentData:(_INPBPrivateMediaIntentData *)arg1;

@end
