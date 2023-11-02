
@interface CNLocalization : NSObject

+ (id)localizedStringForInteger:(long long)arg1;
+ (id)localizedStringForString:(id)arg1 bundle:(id)arg2 table:(id)arg3 lookupBlock:(id /* block */)arg4 returningNilIfNotFound:(bool)arg5;
+ (id)localizedStringForString:(id)arg1 bundle:(id)arg2 table:(id)arg3 returningNilIfNotFound:(bool)arg4;
+ (id)localizedStringForString:(id)arg1 class:(Class)arg2 lookupBlock:(id /* block */)arg3 returningNilIfNotFound:(bool)arg4;
+ (id)localizedStringForString:(id)arg1 class:(Class)arg2 returningNilIfNotFound:(bool)arg3;

@end
