
@interface EXBMutableDisplayTransformDescriptor : EXBDisplayTransformDescriptor

@property (getter=isCloningSupported, nonatomic) bool cloningSupported;
@property (nonatomic, copy) NSString *derivedIdentifier;
@property (getter=isMainLike, nonatomic) bool mainLike;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCloningSupported:(bool)arg1;
- (void)setDerivedIdentifier:(id)arg1;
- (void)setMainLike:(bool)arg1;

@end
