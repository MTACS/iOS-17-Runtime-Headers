
@interface _UISSecureControlCategory : NSObject <NSCopying, NSSecureCoding> {
    union { 
        unsigned short all; 
        struct { 
            unsigned int type : 6; 
            unsigned int iconIndex : 5; 
            unsigned int labelIndex : 5; 
        } ; 
    }  _fields;
}

@property (nonatomic, readonly) NSString *iconGlyph;
@property (nonatomic, readonly) unsigned int secureName;
@property (nonatomic, readonly) unsigned int secureNameForDrawing;
@property (nonatomic, readonly) unsigned long long type;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (bool)supportsSecureCoding;

- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)iconGlyph;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 iconIndex:(unsigned long long)arg2 labelIndex:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (unsigned int)secureName;
- (unsigned int)secureNameForDrawing;
- (unsigned long long)type;

@end
