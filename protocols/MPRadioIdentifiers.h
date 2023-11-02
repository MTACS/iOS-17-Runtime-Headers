
@protocol MPRadioIdentifiers <NSObject>

@required

- (NSString *)stationEventID;
- (NSString *)stationHash;
- (long long)stationID;
- (NSString *)stationStringID;

@end
