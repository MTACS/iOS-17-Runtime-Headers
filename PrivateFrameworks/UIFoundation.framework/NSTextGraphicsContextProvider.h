
@interface NSTextGraphicsContextProvider : NSObject

+ (Class)__defaultColorClass;
+ (void)setCurrentTextGraphicsContext:(id)arg1 duringBlock:(id /* block */)arg2;
+ (void)setTextGraphicsContextClass:(Class)arg1;
+ (void)setTextGraphicsContextProviderClass:(Class)arg1;
+ (Class)textGraphicsContextClass;
+ (Class)textGraphicsContextProviderClass;
+ (bool)textGraphicsContextProviderClassRespondsToColorQuery;

@end
