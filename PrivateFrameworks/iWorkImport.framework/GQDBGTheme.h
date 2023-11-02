
@interface GQDBGTheme : NSObject {
    GQDSStylesheet * mStylesheet;
    struct __CFArray { } * mTemplateSlides;
}

- (void)dealloc;
- (id)stylesheet;

@end
