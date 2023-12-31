
@interface TSUDateFormatCategory : NSObject {
    NSMutableArray * mEntries;
    struct __CFDateFormatter { } * mInitialFormatter;
}

- (void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(struct __CFLocale { }*)arg3;
- (void)dealloc;
- (id)entryForSeparator:(unsigned short)arg1;
- (id)initWithInitialPattern:(id)arg1 locale:(struct __CFLocale { }*)arg2;
- (struct __CFDate { }*)newDateFromString:(struct __CFString { }*)arg1 forceAllowAMPM:(bool)arg2 successfulFormatString:(const struct __CFString {}**)arg3 perfect:(bool*)arg4;

@end
