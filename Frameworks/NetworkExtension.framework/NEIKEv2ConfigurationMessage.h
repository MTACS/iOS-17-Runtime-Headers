
@interface NEIKEv2ConfigurationMessage : NSObject <NEPrettyDescription, NSCopying> {
    NSArray * _attributes;
    unsigned long long  _configurationType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithWithAttributes:(id)arg1;

@end
