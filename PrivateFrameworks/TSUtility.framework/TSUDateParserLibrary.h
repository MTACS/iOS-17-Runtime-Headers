
@interface TSUDateParserLibrary : NSObject {
    NSMutableArray * mAvailableDateParsers;
    unsigned long long  mMaxPermittedParsers;
    unsigned long long  mNumberOfUses;
    NSCondition * mParserLibraryConditionVariable;
    unsigned long long  mParsersCreated;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedDateParserLibrary;

- (id)autorelease;
- (id)checkoutDateParser;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)returnDateParser:(id)arg1;

@end
