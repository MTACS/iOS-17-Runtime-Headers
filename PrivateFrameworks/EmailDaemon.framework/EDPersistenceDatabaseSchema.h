
@interface EDPersistenceDatabaseSchema : NSObject

+ (void)_initializeSchemas;
+ (id)_protectedSchemaProviders;
+ (id)_schemaProviders;
+ (id)_schemaWithPopulationBlock:(id /* block */)arg1;
+ (id)additionalSchemaProviders;
+ (id)mailboxURLColumnName;
+ (id)mailboxesTableName;
+ (id)partialMailboxesTableSchema;
+ (id)propertiesTableName;
+ (id)propertiesTableSchema;
+ (id)propertyMapper;
+ (id)protectedSchema;
+ (id)schema;
+ (void)test_resetSchema;

@end
