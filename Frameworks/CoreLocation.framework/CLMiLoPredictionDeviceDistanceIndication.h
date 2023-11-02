
@interface CLMiLoPredictionDeviceDistanceIndication : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _bleRSSI;
    NSString * _deviceIdentifier;
    NSNumber * _uwbRange;
}

@property (nonatomic, readonly) NSNumber *bleRSSI;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSNumber *uwbRange;

+ (bool)supportsSecureCoding;

- (id)bleRSSI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1 uwbRange:(id)arg2 bleRSSI:(id)arg3;
- (id)uwbRange;

@end
