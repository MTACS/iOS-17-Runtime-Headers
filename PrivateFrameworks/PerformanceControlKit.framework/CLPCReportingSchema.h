
@interface CLPCReportingSchema : NSObject {
    NSArray * _columns;
    unsigned long long  _schemaID;
    NSMutableArray * stagedColumns;
}

@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic) unsigned long long schemaID;

- (void).cxx_destruct;
- (id)columns;
- (id)init;
- (unsigned long long)schemaID;
- (void)setSchemaID:(unsigned long long)arg1;

@end
