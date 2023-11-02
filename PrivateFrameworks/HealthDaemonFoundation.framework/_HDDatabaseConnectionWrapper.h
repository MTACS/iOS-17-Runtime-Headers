
@interface _HDDatabaseConnectionWrapper : NSObject {
    id  _connection;
    NSObject<OS_dispatch_group> * _flushGroup;
    unsigned long long  _generation;
    unsigned long long  _options;
    unsigned long long  _threadID;
}

- (void).cxx_destruct;

@end
