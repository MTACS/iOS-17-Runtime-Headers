
@protocol STVersionVectorable

@required

- (bool)isDirty;
- (void)setIsDirty:(bool)arg1;
- (void)setVersionVector:(NSData *)arg1;
- (NSData *)versionVector;

@end
