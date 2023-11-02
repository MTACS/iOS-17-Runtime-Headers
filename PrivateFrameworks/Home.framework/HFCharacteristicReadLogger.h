
@interface HFCharacteristicReadLogger : NSObject {
    NSMutableDictionary * _accessoriesToReadByTransport;
}

@property (nonatomic, retain) NSMutableDictionary *accessoriesToReadByTransport;

+ (id)nameForTransportType:(unsigned long long)arg1;
+ (id)transportKeyForCharacteristic:(id)arg1;

- (void).cxx_destruct;
- (id)accessoriesToReadByTransport;
- (void)addCharacteristic:(id)arg1 withUpdateLogger:(id)arg2;
- (id)init;
- (void)markCharacteristicAsRead:(id)arg1 withLogger:(id)arg2;
- (unsigned long long)numberOfAccessoriesForTransportType:(unsigned long long)arg1;
- (void)setAccessoriesToReadByTransport:(id)arg1;

@end
