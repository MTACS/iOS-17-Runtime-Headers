
@interface FCProxyOperation : FCOperation {
    FCOperation * _underlyingOperation;
}

+ (void)initialize;
+ (id)proxyForOperation:(id)arg1;

- (void).cxx_destruct;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (unsigned long long)propertiesInheritedByChildOperations;
- (void)setPurpose:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRelativePriority:(long long)arg1;

@end
