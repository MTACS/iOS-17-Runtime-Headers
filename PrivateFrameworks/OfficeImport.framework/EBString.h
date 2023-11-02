
@interface EBString : NSObject

+ (id)edStringFromXlString:(const void*)arg1 edResources:(id)arg2;
+ (void*)xlStringFromEDString:(id)arg1 state:(id)arg2;
+ (void*)xlStringWithIndex:(unsigned int)arg1;

@end
