
@interface LCFDatabaseColumn : NSObject {
    NSString * _name;
    long long  _type;
    NSString * _typeDb;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *typeDb;

- (void).cxx_destruct;
- (id)init:(id)arg1 typeDb:(id)arg2;
- (id)name;
- (long long)type;
- (id)typeDb;

@end
