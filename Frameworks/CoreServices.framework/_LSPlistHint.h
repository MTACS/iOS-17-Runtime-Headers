
@interface _LSPlistHint : NSObject <NSCopying> {
    NSDictionary * _cachedValues;
    bool  _cachedValuesAreComplete;
    NSSet * _keys;
    bool  _keysAreCompacted;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;

@end
