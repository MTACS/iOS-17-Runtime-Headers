
@interface _PRMonogramFontSpec : NSObject {
    double  _baseSize;
    NSString * _fontName;
    double  _tracking;
}

@property (nonatomic, readonly) double baseSize;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double tracking;

+ (id)specForFontWithName:(id)arg1 baseSize:(double)arg2 tracking:(double)arg3;

- (void).cxx_destruct;
- (double)baseSize;
- (id)fontName;
- (double)tracking;

@end
