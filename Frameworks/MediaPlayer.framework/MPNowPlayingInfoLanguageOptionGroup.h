
@interface MPNowPlayingInfoLanguageOptionGroup : NSObject {
    void * _mrLanguageOptionGroup;
}

@property (nonatomic, readonly) bool allowEmptySelection;
@property (nonatomic, readonly) MPNowPlayingInfoLanguageOption *defaultLanguageOption;
@property (nonatomic, readonly) NSArray *languageOptions;
@property (nonatomic, readonly) void*mrLanguageOptionGroup;

- (bool)allowEmptySelection;
- (void)dealloc;
- (id)defaultLanguageOption;
- (id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(id)arg2 allowEmptySelection:(bool)arg3;
- (id)initWithMRLanguageOptionGroup:(void*)arg1;
- (id)languageOptions;
- (void*)mrLanguageOptionGroup;

@end
