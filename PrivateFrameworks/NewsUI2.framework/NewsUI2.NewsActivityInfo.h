
@interface NewsUI2.NewsActivityInfo : NSObject {
    void activityTraits;
    void bookmark;
    void feedConfigurationRawValue;
    void identifier;
    void scrollPosition;
    void title;
    void type;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

- (void).cxx_destruct;
- (id)init;

@end
