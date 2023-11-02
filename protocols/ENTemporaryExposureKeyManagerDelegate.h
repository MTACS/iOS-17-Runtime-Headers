
@protocol ENTemporaryExposureKeyManagerDelegate <NSObject>

@required

- (NSArray *)temporaryExposureKeyManager:(ENTemporaryExposureKeyManager *)arg1 retrieveTEKHistoryIncludingActive:(bool)arg2 generateNewTEK:(bool)arg3;

@end
