
@interface GDTopicView : NSObject <GDTopicViewProtocol> {
    <GDViewAccessAssertion> * _accessAssertion;
    _PASSqliteDatabase * _db;
}

@property (nonatomic, readonly) NSString *databaseFilePath;

- (void).cxx_destruct;
- (id)databaseFilePath;
- (void)enumerateTopicsWithBlock:(id /* block */)arg1;
- (id)initWithAccessAssertion:(id)arg1 database:(id)arg2;

@end
