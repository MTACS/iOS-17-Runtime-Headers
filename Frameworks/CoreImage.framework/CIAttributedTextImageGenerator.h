
@interface CIAttributedTextImageGenerator : CIFilter {
    NSNumber * inputPadding;
    NSNumber * inputScaleFactor;
    NSAttributedString * inputText;
}

@property (nonatomic, retain) NSNumber *inputPadding;
@property (nonatomic, retain) NSNumber *inputScaleFactor;
@property (nonatomic, retain) NSAttributedString *inputText;

+ (id)customAttributes;

- (id)inputPadding;
- (id)inputScaleFactor;
- (id)inputText;
- (id)outputImage;
- (void)setInputPadding:(id)arg1;
- (void)setInputScaleFactor:(id)arg1;
- (void)setInputText:(id)arg1;

@end
