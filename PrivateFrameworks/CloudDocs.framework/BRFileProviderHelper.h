
@interface BRFileProviderHelper : NSObject

+ (id)_br_getDomainIdentifierForAccountDescriptor:(id)arg1;
+ (id)br_getDomainIdentifierForACAccountID:(id)arg1;
+ (id)br_getDomainIdentifierForCurrentPersona;
+ (id)br_getDomainIdentifierForDataSeparated:(bool)arg1;
+ (id)br_getProviderDomainIDForCurrentPersona;
+ (id)br_getProviderDomainIDForDataSeparated:(bool)arg1;
+ (id)br_getProviderIDForCurrentPersona;
+ (id)br_getProviderIDForDataSeparated:(bool)arg1;

@end
