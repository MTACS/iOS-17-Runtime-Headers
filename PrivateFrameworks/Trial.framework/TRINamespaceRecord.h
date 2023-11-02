
@interface TRINamespaceRecord : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _compatibilityVersion;
    NSString * _name;
    NSURL * _treatmentURL;
}

@property (nonatomic, readonly) unsigned int compatibilityVersion;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *treatmentURL;

+ (id)recordWithName:(id)arg1 compatibilityVersion:(unsigned int)arg2 treatmentURL:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)compatibilityVersion;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)arg1;
- (id)copyWithReplacementName:(id)arg1;
- (id)copyWithReplacementTreatmentURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 compatibilityVersion:(unsigned int)arg2 treatmentURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecord:(id)arg1;
- (id)name;
- (id)treatmentURL;

@end
