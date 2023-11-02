
@interface SPCBPeripheralKeyResponse : NSObject <NSSecureCoding> {
    NSArray * _peripherals;
}

@property (nonatomic, retain) NSArray *peripherals;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeripherals:(id)arg1;
- (id)peripherals;
- (void)setPeripherals:(id)arg1;

@end
