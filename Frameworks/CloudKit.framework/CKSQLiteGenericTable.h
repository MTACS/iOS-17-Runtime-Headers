
@interface CKSQLiteGenericTable : CKSQLiteTable

+ (Class)entryClass;
+ (Class)genericTableClassForTOCTableEntry:(id)arg1;
+ (id)genericTableForTOCEntry:(id)arg1;
+ (void)setValue:(id)arg1 forProperty:(id)arg2 propertyInfo:(id)arg3 inObject:(id)arg4;
+ (id)uniqueSubclassClassNameForClassName:(id)arg1;
+ (bool)useNSCoding;
+ (id)valueForProperty:(id)arg1 propertyInfo:(id)arg2 inObject:(id)arg3;

- (void)setValue:(id)arg1 forProperty:(id)arg2 propertyInfo:(id)arg3 inObject:(id)arg4;
- (id)valueForProperty:(id)arg1 propertyInfo:(id)arg2 inObject:(id)arg3;

@end
