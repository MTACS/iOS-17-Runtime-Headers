
@protocol HIDAnalyticsEventFieldProtocol <NSObject>

@required

- (void)setValue:(id)arg1;
- (id)value;

@optional

- (void)setIntegerValue:(unsigned long long)arg1;
- (void)setStringValue:(NSString *)arg1;

@end
