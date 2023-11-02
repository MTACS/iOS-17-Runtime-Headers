
@interface CRStrongComponent : NSObject <NSSecureCoding> {
    NSString * componentType;
    NSString * fwVersion;
    NSString * identifer;
}

@property (nonatomic, retain) NSString *componentType;
@property (nonatomic, retain) NSString *fwVersion;
@property (nonatomic, retain) NSString *identifer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)componentType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fwVersion;
- (id)identifer;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponentType:(id)arg1 identifier:(id)arg2 fwVersion:(id)arg3;
- (void)setComponentType:(id)arg1;
- (void)setFwVersion:(id)arg1;
- (void)setIdentifer:(id)arg1;

@end
