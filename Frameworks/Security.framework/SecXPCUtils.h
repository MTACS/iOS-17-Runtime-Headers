
@interface SecXPCUtils : NSObject

+ (bool)clientCanEditPreferenceOwnership;
+ (struct __CFString { }*)copyApplicationIdentifier;
+ (struct __CFString { }*)copyApplicationIdentifierFromConnection:(id)arg1;
+ (struct __CFString { }*)copyApplicationIdentifierFromSelf;
+ (struct __CFString { }*)copySigningIdentifier:(id)arg1;

@end
