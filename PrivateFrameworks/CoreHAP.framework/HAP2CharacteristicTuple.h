
@interface HAP2CharacteristicTuple : NSObject {
    <HAP2Accessory> * _accessory;
    NSMutableArray * _values;
}

@property (nonatomic, readonly) <HAP2Accessory> *accessory;
@property (nonatomic, readonly) NSMutableArray *values;

- (void).cxx_destruct;
- (id)accessory;
- (id)initWithAccessory:(id)arg1;
- (id)values;

@end
