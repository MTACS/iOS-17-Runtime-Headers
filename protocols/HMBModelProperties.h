
@protocol HMBModelProperties

@required

- (id)hmbDefaultValueForPropertyNamed:(NSString *)arg1;
- (bool)hmbPropertyIsAvailable:(NSString *)arg1;
- (bool)hmbPropertyIsReadOnly:(NSString *)arg1;
- (id)hmbPropertyNamed:(NSString *)arg1;
- (id)hmbPropertyNamed:(NSString *)arg1 isSet:(bool*)arg2;
- (bool)hmbPropertyWasSet:(NSString *)arg1;
- (void)hmbSetProperty:(id)arg1 named:(NSString *)arg2;
- (void)hmbUnsetPropertyNamed:(NSString *)arg1;

@end
