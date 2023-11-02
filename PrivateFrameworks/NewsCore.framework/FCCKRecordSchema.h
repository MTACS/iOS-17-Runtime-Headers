
@interface FCCKRecordSchema : NSObject {
    NSString * _clientRecordType;
    NSDictionary * _fieldSchemasByName;
    NSString * _serverRecordType;
}

- (void).cxx_destruct;
- (id)init;

@end
