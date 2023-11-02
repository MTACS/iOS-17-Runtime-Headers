
@interface OITSUDateFormatCategory : NSObject {
    NSMutableArray * _entries;
    struct __CFDateFormatter { } * _initialFormatter;
}

- (void).cxx_destruct;
- (void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(id)arg3;
- (void)dealloc;
- (id)entryForSeparator:(unsigned short)arg1;
- (id)formatStringsDictionary;
- (id)initWithInitialPattern:(id)arg1 locale:(id)arg2;
- (id)initialPattern;
- (id)newDateFromString:(id)arg1 forceAllowAMPM:(bool)arg2 successfulFormatString:(id*)arg3 perfect:(bool*)arg4;

@end
