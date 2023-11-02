
@interface ASGeoCodeResult : NSObject <NSSecureCoding> {
    CNPostalAddress * _address;
    CLLocation * _location;
    NSDate * _updated;
}

@property (readonly) CNPostalAddress *address;
@property (readonly) CLLocation *location;
@property (readonly) NSDate *updated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 location:(id)arg2 updated:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (id)updated;

@end
