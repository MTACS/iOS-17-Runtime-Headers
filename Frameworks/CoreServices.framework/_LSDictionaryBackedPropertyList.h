
@interface _LSDictionaryBackedPropertyList : _LSLazyPropertyList {
    NSDictionary * _plist;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_getPropertyList:(id*)arg1;
- (bool)_getValue:(id*)arg1 forPropertyListKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyList:(id)arg1;

@end
