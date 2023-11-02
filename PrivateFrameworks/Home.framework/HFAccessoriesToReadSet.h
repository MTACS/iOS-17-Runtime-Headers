
@interface HFAccessoriesToReadSet : NSObject {
    NSMutableDictionary * _accessories;
    NSNumber * _transportKey;
}

@property (nonatomic, retain) NSMutableDictionary *accessories;
@property (nonatomic, retain) NSNumber *transportKey;

- (void).cxx_destruct;
- (id)accessories;
- (void)addCharacteristic:(id)arg1;
- (long long)count;
- (id)initWithTransportType:(id)arg1;
- (void)markCharacteristicAsRead:(id)arg1 withLogger:(id)arg2;
- (void)setAccessories:(id)arg1;
- (void)setTransportKey:(id)arg1;
- (id)transportKey;

@end
