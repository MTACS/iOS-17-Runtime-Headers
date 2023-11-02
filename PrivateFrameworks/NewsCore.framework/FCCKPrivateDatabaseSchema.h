
@interface FCCKPrivateDatabaseSchema : NSObject {
    NSArray * _defaultZoneSchemas;
    NSDictionary * _zoneSchemasByClientName;
    NSDictionary * _zoneSchemasByServerName;
}

- (void).cxx_destruct;
- (id)init;

@end
