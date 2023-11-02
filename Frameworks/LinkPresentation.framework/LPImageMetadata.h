
@interface LPImageMetadata : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSString * _accessibilityText;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _type;
    unsigned int  _version;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *accessibilityText;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, readonly) unsigned int version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithDictionary:(id)arg1;
- (id)accessibilityText;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAccessibilityText:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setType:(id)arg1;
- (void)setURL:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)type;
- (unsigned int)version;

@end
