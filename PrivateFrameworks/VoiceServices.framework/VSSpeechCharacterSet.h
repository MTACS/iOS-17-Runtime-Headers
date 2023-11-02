
@interface VSSpeechCharacterSet : NSObject {
    NSCharacterSet * _characterSet;
}

@property (nonatomic, retain) NSCharacterSet *characterSet;

+ (id)languageMapping;

- (void).cxx_destruct;
- (id)characterSet;
- (id)initWithLanguage:(id)arg1;
- (void)setCharacterSet:(id)arg1;
- (id)unspeakableRangeOfText:(id)arg1;

@end
