
@interface HFAnalyticsWallpaperChangeEvent : HFAnalyticsEvent {
    NSDictionary * _payloadDictionary;
}

@property (nonatomic, retain) NSDictionary *payloadDictionary;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)payload;
- (id)payloadDictionary;
- (void)setPayloadDictionary:(id)arg1;

@end
