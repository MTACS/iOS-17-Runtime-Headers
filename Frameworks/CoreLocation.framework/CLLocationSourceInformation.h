
@interface CLLocationSourceInformation : NSObject <NSCopying, NSSecureCoding> {
    bool  isProducedByAccessory;
    bool  isSimulatedBySoftware;
}

@property (nonatomic, readonly) bool isProducedByAccessory;
@property (nonatomic, readonly) bool isSimulatedBySoftware;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSoftwareSimulationState:(bool)arg1 andExternalAccessoryState:(bool)arg2;
- (bool)isProducedByAccessory;
- (bool)isSimulatedBySoftware;

@end
