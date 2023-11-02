
@interface TIDPNgramWordEntryPair : NSObject {
    TIWordEntryAligned * _wordEntryAligned;
    NSString * _wordString;
}

@property (getter=isStandaloneString, nonatomic, readonly) bool standaloneString;
@property (nonatomic, retain) TIWordEntryAligned *wordEntryAligned;
@property (nonatomic, retain) NSString *wordString;

- (void).cxx_destruct;
- (id)initWithWordString:(id)arg1;
- (id)initWithWordString:(id)arg1 wordEntryAligned:(id)arg2;
- (bool)isStandaloneString;
- (void)setWordEntryAligned:(id)arg1;
- (void)setWordString:(id)arg1;
- (id)wordEntryAligned;
- (id)wordString;

@end
