
@interface TTRNLTextSlotParser : NSObject {
    NSLocale * _locale;
    void * _parser;
}

@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) void*parser;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLocale:(id)arg1 now:(id)arg2;
- (id)locale;
- (id)parseString:(id)arg1 referenceTimeZone:(id)arg2;
- (void*)parser;
- (void)setLocale:(id)arg1;
- (void)setParser:(void*)arg1;

@end
