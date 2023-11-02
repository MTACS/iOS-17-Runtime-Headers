
@interface _LSLocalizedStringRecord : LSRecord

@property (readonly) NSDictionary *_allUnsanitizedStringValues;
@property (readonly) NSArray *_missingBundleLocs;
@property (readonly) NSDictionary *allStringValues;
@property (readonly) NSString *defaultStringValue;
@property (readonly) NSString *stringValue;

+ (id)_propertyClasses;
+ (id)sanitizeString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_LSRecord_resolve__allUnsanitizedStringValues;
- (void)_LSRecord_resolve__missingBundleLocs;
- (id)_allUnsanitizedStringValues;
- (id)_allUnsanitizedStringValuesWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LocalizedString { unsigned int x1; unsigned int x2; struct Flags { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg4;
- (void)_detachFromContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 unitID:(unsigned int)arg2;
- (id)_missingBundleLocs;
- (id)_missingBundleLocsWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LocalizedString { unsigned int x1; unsigned int x2; struct Flags { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg4;
- (id)allStringValues;
- (id)debugDescription;
- (id)defaultStringValue;
- (id)description;
- (id)stringValue;
- (id)stringValueWithPreferredLocalizations:(id)arg1;

@end
