
@interface ICASPalettePosition : NSObject <AADataType> {
    long long  _palettePosition;
}

@property (nonatomic, readonly) long long palettePosition;

- (id)initWithPalettePosition:(long long)arg1;
- (long long)palettePosition;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
