
@interface SXComponentDependency : NSObject {
    SXComponentDependencyDescriptor * _descriptor;
    NSString * _fromComponentIdentifier;
    long long  _fromDependencyAttribute;
    NSString * _toComponentIdentifier;
    long long  _toDependencyAttribute;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
