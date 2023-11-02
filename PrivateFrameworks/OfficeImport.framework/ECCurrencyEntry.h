
@interface ECCurrencyEntry : NSObject {
    bool  mAppliesToExport;
    NSString * mLassoCurrencyCode;
    int  mXlAccountingFormat;
    NSString * mXlCurrencySymbol;
    NSString * mXlLangId;
}

+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 accountingFormat:(int)arg4;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(bool)arg4;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(bool)arg4 accountingFormat:(int)arg5;

- (void).cxx_destruct;
- (id)initWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(bool)arg4 accountingFormat:(int)arg5;

@end
