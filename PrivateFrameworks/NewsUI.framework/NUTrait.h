
@interface NUTrait : NSObject <NSCopying> {
    double  _defaultValue;
    NSMutableDictionary * _traitBlocks;
}

@property (nonatomic, readonly) double defaultValue;
@property (nonatomic, readonly) NSMutableDictionary *traitBlocks;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)defaultValue;
- (id)init;
- (id)initWithDefaultValue:(double)arg1;
- (id)traitBlocks;
- (double)valueForTraitCollection:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (double)valueForTraitCollection:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 deviceTrait:(id)arg3;
- (id)when:(unsigned long long)arg1 block:(id /* block */)arg2;

@end
