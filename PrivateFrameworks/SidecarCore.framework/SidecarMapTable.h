
@interface SidecarMapTable : NSObject {
    long long  _keyMask;
    NSMapTable * _keys2values;
    NSMapTable * _values2keys;
}

- (void).cxx_destruct;
- (id)initWithKeyMask:(long long)arg1 weakObjects:(bool)arg2;

@end
