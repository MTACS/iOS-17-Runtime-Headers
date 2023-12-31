
@interface TVElementFactory : NSObject

+ (void)_registerDefaultElements;
+ (Class)classForElementType:(unsigned long long)arg1;
+ (void)initialize;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(bool)arg4;
+ (void)registerIKClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(bool)arg4;
+ (void)registerViewElementClass:(Class)arg1 forElementName:(id)arg2;

@end
