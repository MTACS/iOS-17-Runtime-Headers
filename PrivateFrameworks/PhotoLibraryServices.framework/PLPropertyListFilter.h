
@interface PLPropertyListFilter : NSObject

+ (id)_filterArray:(id)arg1 block:(id /* block */)arg2;
+ (id)_filterDictionary:(id)arg1 block:(id /* block */)arg2;
+ (bool)canEncodeInPropertyList:(id)arg1;
+ (id)filterPropertyList:(id)arg1;
+ (id)filterPropertyList:(id)arg1 block:(id /* block */)arg2;
+ (id)filterPropertyListNoData:(id)arg1;

@end
