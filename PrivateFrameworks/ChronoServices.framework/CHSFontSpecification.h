
@interface CHSFontSpecification : NSObject <BSXPCSecureCoding, NSCopying> {
    unsigned long long  _design;
    NSArray * _fontFeatures;
    NSString * _name;
    NSNumber * _size;
    NSNumber * _weight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long design;
@property (nonatomic, copy) NSArray *fontFeatures;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *size;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *weight;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_initWithFontSpecification:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)design;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)fontFeatures;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setDesign:(unsigned long long)arg1;
- (void)setFontFeatures:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setWeight:(id)arg1;
- (id)size;
- (id)weight;

@end
