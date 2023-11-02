
@interface LTUISourceMeta : NSObject {
    NSString * _context;
    NSArray * _languageHints;
    unsigned long long  _origin;
}

@property (nonatomic, copy) NSString *context;
@property (nonatomic, copy) NSArray *languageHints;
@property (nonatomic) unsigned long long origin;

- (void).cxx_destruct;
- (id)context;
- (id)dictionaryRepresentation;
- (id)init;
- (id)languageHints;
- (unsigned long long)origin;
- (void)setContext:(id)arg1;
- (void)setLanguageHints:(id)arg1;
- (void)setOrigin:(unsigned long long)arg1;

@end
