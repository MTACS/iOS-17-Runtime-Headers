
@interface NTKComplicationKey : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientIdentifier;
    NSString * _complicationIdentifier;
    CLKComplicationDescriptor * _descriptor;
}

@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *complicationIdentifier;
@property (nonatomic, copy) CLKComplicationDescriptor *descriptor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)complicationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClientIdentifier:(id)arg1 complicationIdentifier:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1 descriptor:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setComplicationIdentifier:(id)arg1;
- (void)setDescriptor:(id)arg1;

@end
