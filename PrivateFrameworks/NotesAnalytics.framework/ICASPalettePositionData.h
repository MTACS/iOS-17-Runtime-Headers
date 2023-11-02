
@interface ICASPalettePositionData : NSObject <AADataEventType> {
    ICASPalettePosition * _paletteEndPosition;
    ICASPalettePosition * _paletteStartPosition;
}

@property (nonatomic, readonly) ICASPalettePosition *paletteEndPosition;
@property (nonatomic, readonly) ICASPalettePosition *paletteStartPosition;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithPaletteStartPosition:(id)arg1 paletteEndPosition:(id)arg2;
- (id)paletteEndPosition;
- (id)paletteStartPosition;
- (id)toDict;

@end
