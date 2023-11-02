
@interface FigAlternateObjCVideoLayoutAttributes : FigKVCInspectable {
    struct OpaqueCMTagCollection { } * _tagCollection;
}

@property (nonatomic, readonly) unsigned long long packingType;
@property (nonatomic, readonly) unsigned long long projectionType;
@property (nonatomic, readonly) unsigned long long stereoViewComponents;

- (void)dealloc;
- (id)initWithTagCollection:(struct OpaqueCMTagCollection { }*)arg1;
- (unsigned long long)packingType;
- (unsigned long long)projectionType;
- (unsigned long long)stereoViewComponents;

@end
