
@protocol GQKeynoteGenerator <NSObject>

@required

+ (int)beginPresentation:(GQDBGPresentation *)arg1 state:(GQSDocument *)arg2;
+ (int)beginSlide:(GQDBGSlide *)arg1 state:(GQSDocument *)arg2;
+ (int)endPresentation:(GQDBGPresentation *)arg1 state:(GQSDocument *)arg2;
+ (int)endSlide:(GQDBGSlide *)arg1 state:(GQSDocument *)arg2;
+ (Class)enterSlideDrawables:(GQDBGAbstractSlide *)arg1 state:(GQSDocument *)arg2;
+ (int)handleSlideSize:(GQDBGPresentation *)arg1 state:(GQSDocument *)arg2;
+ (int)handleThemeStylesheet:(GQDSStylesheet *)arg1 state:(GQSDocument *)arg2;

@end
