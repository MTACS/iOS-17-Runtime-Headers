
@interface _UISSecureControlSizeSpec : NSObject <NSCopying, NSSecureCoding> {
    _UISSecureControlCategory * _category;
    union { 
        unsigned short all; 
        struct { 
            unsigned int arrangeVertically : 1; 
            unsigned int accessibilityContrast : 1; 
            unsigned int displayScale : 3; 
            unsigned int layoutDirection : 1; 
            unsigned int legibilityWeight : 1; 
            unsigned int preferredContentSizeCategory : 4; 
            unsigned int userInterfaceIdiom : 3; 
        } ; 
    }  _fields;
    NSString * _localization;
}

@property (nonatomic, readonly) bool arrangeVertically;
@property (nonatomic, readonly) _UISSecureControlCategory *category;
@property (nonatomic, readonly) UISSlotStyle *style;

+ (id)specWithStyle:(id)arg1 tag:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)arrangeVertically;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCategory:(id)arg1 arrangeVertically:(bool)arg2 accessibilityContrast:(unsigned long long)arg3 displayScale:(unsigned char)arg4 layoutDirection:(unsigned long long)arg5 legibilityWeight:(unsigned long long)arg6 localization:(id)arg7 preferredContentSizeCategory:(unsigned long long)arg8 userInterfaceIdiom:(unsigned long long)arg9;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToStyle:(id)arg1 tag:(id)arg2;
- (id)style;

@end
