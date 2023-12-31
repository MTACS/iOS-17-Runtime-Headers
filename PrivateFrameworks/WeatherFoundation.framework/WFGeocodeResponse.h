
@interface WFGeocodeResponse : WFResponse <NSSecureCoding> {
    WFLocation * _location;
}

@property (readonly) WFLocation *location;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 location:(id)arg2;
- (id)location;

@end
