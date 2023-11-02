
@interface AKIDPUtility : NSObject

+ (id)convertError:(id)arg1;
+ (bool)dictionary:(id)arg1 containsKeys:(id)arg2;
+ (id)idpURLFromRequest:(id)arg1;
+ (bool)isMicrosoftRequestDictionary:(id)arg1;
+ (id)microsoftLoginURLFromParameters:(id)arg1;
+ (id)parametersFromRequest:(id)arg1;
+ (id)parametersFromResponseURL:(id)arg1 request:(id)arg2;

@end
