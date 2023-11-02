
@interface REHTMLParentElement : REHTMLElement {
    NSArray * _children;
    REHTMLElement * _parent;
}

- (void).cxx_destruct;
- (id)_encodedData;
- (id)addChildren:(id)arg1;
- (id)attributes;
- (id)classes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)elementBySettingAtttibutes:(id)arg1;
- (id)elementBySettingClasses:(id)arg1;
- (id)initWithParents:(id)arg1 children:(id)arg2;

@end
