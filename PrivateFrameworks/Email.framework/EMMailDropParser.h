
@interface EMMailDropParser : NSObject

+ (bool)_domainIsAllowed:(id)arg1;
+ (void)_parseDirectURL:(id)arg1 intoMetadata:(id)arg2;
+ (id)_parseURLQuery:(id)arg1;
+ (void)_parseWrappedURL:(id)arg1 intoMetadata:(id)arg2;
+ (id)allowedMailDropDownloadDomains;
+ (id)parseExpiration:(double)arg1;
+ (id)parseHeaderValue:(id)arg1 forField:(id)arg2;
+ (void)parseURL:(id)arg1 intoMetadata:(id)arg2;
+ (bool)urlIsValid:(id)arg1;

@end
