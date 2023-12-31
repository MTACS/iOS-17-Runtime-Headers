
@interface OITSUDateParserLibrary : NSObject {
    NSMutableArray * mAvailableDateParsers;
    OITSULocale * mLocale;
    unsigned long long  mMaxPermittedParsers;
    unsigned long long  mNumberOfUses;
    NSCondition * mParserLibraryConditionVariable;
    unsigned long long  mParsersCreated;
}

- (id)checkoutDateParser;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (void)prepareDateParserInBackground;
- (void)returnDateParser:(id)arg1;

@end
