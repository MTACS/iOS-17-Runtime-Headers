
@interface _INUIExtensionContextState : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _hostedViewMaximumAllowedSizes;
    NSDictionary * _hostedViewMinimumAllowedSizes;
    NSArray * _interfaceSections;
}

@property (nonatomic, copy) NSDictionary *hostedViewMaximumAllowedSizes;
@property (nonatomic, copy) NSDictionary *hostedViewMinimumAllowedSizes;
@property (nonatomic, copy) NSArray *interfaceSections;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hostedViewMaximumAllowedSizes;
- (id)hostedViewMinimumAllowedSizes;
- (id)initWithCoder:(id)arg1;
- (id)interfaceSections;
- (bool)isEqual:(id)arg1;
- (void)setHostedViewMaximumAllowedSizes:(id)arg1;
- (void)setHostedViewMinimumAllowedSizes:(id)arg1;
- (void)setInterfaceSections:(id)arg1;

@end
