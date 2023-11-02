
@protocol VFX.VFXBinding

@required

- (NSString *)bindingName;
- (NSArray *)enumCases;
- (NSString *)enumName;
- (NSString *)identifier;
- (double)max;
- (double)min;
- (long long)objectID;
- (NSString *)objectName;
- (NSData *)rawValue;
- (long long)semantic;
- (void)setRawValue:(NSData *)arg1;
- (long long)type;
- (NSString *)userManual;

@end
