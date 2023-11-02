
@interface CNAutocompleteStoreReproStringRecorder : NSObject {
    NSString * _lastString;
    NSNumber * _lastTimestamp;
    NSMutableString * _reproStringStorage;
    <CNTimeProvider> * _timeProvider;
}

@property (copy) NSString *lastString;
@property (copy) NSNumber *lastTimestamp;
@property (nonatomic, readonly, copy) NSString *reproString;
@property (readonly) NSMutableString *reproStringStorage;
@property (readonly) <CNTimeProvider> *timeProvider;

- (void).cxx_destruct;
- (void)clear;
- (id)description;
- (id)init;
- (id)initWithTimeProvider:(id)arg1;
- (id)lastString;
- (id)lastTimestamp;
- (void)recordString:(id)arg1;
- (id)reproString;
- (id)reproStringStorage;
- (void)setLastString:(id)arg1;
- (void)setLastTimestamp:(id)arg1;
- (id)stringForIntervalSinceLastTimestamp:(double)arg1;
- (id)stringForKeystrokesSinceLastString:(id)arg1;
- (id)timeProvider;

@end
