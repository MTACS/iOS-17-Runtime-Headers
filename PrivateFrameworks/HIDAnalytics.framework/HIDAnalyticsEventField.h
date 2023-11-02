
@interface HIDAnalyticsEventField : NSObject <HIDAnalyticsEventFieldProtocol> {
    NSString * _fieldName;
    unsigned long long  integerValue;
    NSString * stringValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *fieldName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property id value;

- (void).cxx_destruct;
- (id)fieldName;
- (id)initWithName:(id)arg1;
- (void)setIntegerValue:(unsigned long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
