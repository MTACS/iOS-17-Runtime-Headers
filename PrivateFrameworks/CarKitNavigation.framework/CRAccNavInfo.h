
@interface CRAccNavInfo : NSObject <NSSecureCoding> {
    CRAccNavComponent * _component;
    NSDictionary * _parameters;
}

@property (nonatomic, readonly) CRAccNavComponent *component;
@property (nonatomic, readonly) NSDictionary *parameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)component;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateInfoTypesAndDataUsingBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponent:(id)arg1 parameters:(id)arg2;
- (id)parameters;
- (unsigned short)uint16ForInfoType:(unsigned short)arg1;
- (unsigned char)uint8ForInfoType:(unsigned short)arg1;
- (id)valueForInfoType:(unsigned short)arg1;

@end
