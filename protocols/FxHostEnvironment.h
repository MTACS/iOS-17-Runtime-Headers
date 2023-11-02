
@protocol FxHostEnvironment

@required

- (double)globalFrameDuration;
- (unsigned int)globalTimeScale;
- (NSString *)hostName;
- (int)majorVersion;
- (int)minorVersion;
- (bool)supportsParameterClass:(Class)arg1;
- (NSString *)uniqueID;

@end
