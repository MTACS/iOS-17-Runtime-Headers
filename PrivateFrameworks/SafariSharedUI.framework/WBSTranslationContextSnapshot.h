
@interface WBSTranslationContextSnapshot : NSObject {
    unsigned long long  _state;
    NSString * _targetLocale;
    NSString * _webpageLocale;
    NSURL * _webpageURL;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) NSString *targetLocale;
@property (nonatomic, retain) NSString *webpageLocale;
@property (nonatomic, retain) NSURL *webpageURL;

- (void).cxx_destruct;
- (void)setState:(unsigned long long)arg1;
- (void)setTargetLocale:(id)arg1;
- (void)setWebpageLocale:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (unsigned long long)state;
- (id)targetLocale;
- (id)webpageLocale;
- (id)webpageURL;

@end
