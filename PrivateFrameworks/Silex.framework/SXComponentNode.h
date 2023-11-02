
@interface SXComponentNode : NSObject {
    long long  _attribute;
    NSString * _componentIdentifier;
    NSMutableSet * _mutableDependencies;
    NSMutableSet * _toPositionDependencies;
    NSMutableSet * _toSizeDependencies;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
