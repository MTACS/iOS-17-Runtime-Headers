
@interface CITextImageGenerator : CIFilter {
    NSString * inputFontName;
    NSNumber * inputFontSize;
    NSNumber * inputPadding;
    NSNumber * inputScaleFactor;
    NSString * inputText;
}

@property (nonatomic, retain) NSString *inputFontName;
@property (nonatomic, retain) NSNumber *inputFontSize;
@property (nonatomic, retain) NSNumber *inputPadding;
@property (nonatomic, retain) NSNumber *inputScaleFactor;
@property (nonatomic, retain) NSString *inputText;

+ (id)customAttributes;

- (id)inputFontName;
- (id)inputFontSize;
- (id)inputPadding;
- (id)inputScaleFactor;
- (id)inputText;
- (id)outputImage;
- (void)setInputFontName:(id)arg1;
- (void)setInputFontSize:(id)arg1;
- (void)setInputPadding:(id)arg1;
- (void)setInputScaleFactor:(id)arg1;
- (void)setInputText:(id)arg1;

@end
