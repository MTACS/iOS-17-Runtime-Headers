
@interface RBSProcessStateDescriptor : NSObject <NSCopying, RBSXPCSecureCoding> {
    NSSet * _endowmentNamespaces;
    unsigned long long  _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *endowmentNamespaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long values;

+ (id)descriptor;
+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)endowmentNamespaces;
- (void)filterState:(id)arg1;
- (id)init;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setEndowmentNamespaces:(id)arg1;
- (void)setValues:(unsigned long long)arg1;
- (unsigned long long)values;

@end
