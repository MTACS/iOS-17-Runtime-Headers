
@interface CalDAVPrincipalSearchSupport : NSObject

+ (id)nameForWellKnownType:(int)arg1;
+ (id)namespaceAndNameForWellKnownType:(int)arg1;
+ (id)namespaceForWellKnownType:(int)arg1;
+ (id)parserMappingsWithServerSupportSet:(id)arg1 includeEmail:(bool)arg2;
+ (id)propertySearchItemForWellKnownType:(int)arg1;
+ (id)resultTypeForRecordType:(id)arg1;

@end
