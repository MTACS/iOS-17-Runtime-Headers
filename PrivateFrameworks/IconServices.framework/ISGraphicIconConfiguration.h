
@interface ISGraphicIconConfiguration : NSObject <NSCopying> {
    NSArray * _enclosureColors;
    long long  _renderingMode;
    NSArray * _symbolColors;
}

@property (nonatomic, copy) NSArray *enclosureColors;
@property (nonatomic) long long renderingMode;
@property (nonatomic, copy) NSArray *symbolColors;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)enclosureColors;
- (long long)renderingMode;
- (void)setEnclosureColors:(id)arg1;
- (void)setRenderingMode:(long long)arg1;
- (void)setSymbolColors:(id)arg1;
- (id)symbolColors;

@end
