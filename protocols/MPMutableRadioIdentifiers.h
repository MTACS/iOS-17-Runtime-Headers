
@protocol MPMutableRadioIdentifiers <MPRadioIdentifiers>

@required

- (void)setStationEventID:(NSString *)arg1;
- (void)setStationHash:(NSString *)arg1;
- (void)setStationID:(long long)arg1;
- (void)setStationStringID:(NSString *)arg1;
- (NSString *)stationEventID;
- (NSString *)stationHash;
- (long long)stationID;
- (NSString *)stationStringID;

@end
