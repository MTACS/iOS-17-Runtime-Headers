
@protocol IMDBridgedRecord

@required

- (void*)_fetchUpdatedRecord;
- (struct __CFArray { }*)_localCache;
- (struct { char *x1; long long x2; struct { /* ? */ } *x3; unsigned int x4; void *x5; })_propertyDescriptorForProperty:(long long)arg1;
- (int)_propertyIDForProperty:(long long)arg1;

@end
