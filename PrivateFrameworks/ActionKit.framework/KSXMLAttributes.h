
@interface KSXMLAttributes : NSObject <NSCopying> {
    NSMutableArray * _attributes;
}

@property (nonatomic, copy) NSDictionary *attributesAsDictionary;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (id)attributesAsDictionary;
- (void)close;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasAttributes;
- (id)init;
- (id)initWithXMLAttributes:(id)arg1;
- (void)setAttributesAsDictionary:(id)arg1;
- (void)writeAttributes:(id)arg1;

@end
