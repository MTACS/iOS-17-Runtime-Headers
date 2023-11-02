
@interface REHTMLTagElement : REHTMLElement {
    NSDictionary * _attributes;
    NSArray * _classes;
    NSString * _content;
    NSString * _prefix;
    NSString * _suffix;
    NSString * _tag;
}

- (void).cxx_destruct;
- (id)_contentString;
- (id)_prefixContentString;
- (id)_suffixContentString;
- (id)attributes;
- (id)classes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)elementByAddingClass:(id)arg1;
- (id)elementByAddingClasses:(id)arg1;
- (id)elementBySettingAtttibutes:(id)arg1;
- (id)elementBySettingClasses:(id)arg1;
- (id)initWithTag:(id)arg1 content:(id)arg2;

@end
