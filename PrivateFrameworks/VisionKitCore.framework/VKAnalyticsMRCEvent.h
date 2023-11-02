
@interface VKAnalyticsMRCEvent : VKAnalyticsEvent {
    long long  __dataType;
    NSString * _barcodeSymbology;
    long long  _eventType;
}

@property (nonatomic) long long _dataType;
@property (nonatomic, retain) NSString *barcodeSymbology;
@property (nonatomic, readonly) long long dataType;
@property (nonatomic) long long eventType;

- (void).cxx_destruct;
- (long long)_dataType;
- (id)barcodeSymbology;
- (id)coreAnalyticsDictionary;
- (long long)dataType;
- (id)description;
- (id)eventKey;
- (long long)eventType;
- (id)initWithElement:(id)arg1 eventType:(long long)arg2 customIdentifier:(id)arg3;
- (void)setBarcodeSymbology:(id)arg1;
- (void)setEventType:(long long)arg1;
- (void)set_dataType:(long long)arg1;
- (long long)type;

@end
