
@interface _UTConstantType : UTType {
    struct Fields { 
        NSString *identifier; 
        unsigned int family : 2; 
        unsigned int tagQuantity : 1; 
        unsigned int nodeType : 1; 
        unsigned int reservedFlags : 4; 
        BOOL preferredExtension[7]; 
    }  _fields;
}

+ (void)_validateThisClass;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (unsigned long long)_getEnclosureColors:(struct UTHardwareColor { unsigned char x1; unsigned char x2[3]; union { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_3_1_1; int x_3_1_2; } x3; }*)arg1 count:(unsigned long long)arg2;
- (bool)_isRealized;
- (id)_preferredTagOfClass:(id)arg1;
- (id)_typeRecord;
- (void)_unrealize;
- (Class)classForCoder;
- (bool)conformsToType:(id)arg1;
- (id)debugDescription;
- (id)identifier;
- (bool)isDeclared;
- (bool)isDynamic;
- (bool)isPublicType;
- (id)supertypes;
- (id)tags;

@end
