
@interface ZhuGeSupportAssistant : NSObject

+ (id)armoryClassName;
+ (id)classList;
+ (void*)getDylibHandlerWithError:(id*)arg1;
+ (id)getSharedInstanceByName:(id)arg1 withError:(id*)arg2;
+ (id)getXpcProxyWithError:(id*)arg1;
+ (bool)isInternalAssistant;
+ (id)isKey:(id)arg1 withError:(id*)arg2;
+ (id)serviceXpcName;

@end
