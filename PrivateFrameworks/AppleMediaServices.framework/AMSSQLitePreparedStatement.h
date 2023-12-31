
@interface AMSSQLitePreparedStatement : NSObject {
    NSString * _SQL;
    const void * _connectionPointer;
}

@property (nonatomic, readonly, copy) NSString *SQL;
@property (nonatomic, readonly) const void*connectionPointer;

- (void).cxx_destruct;
- (id)SQL;
- (const void*)connectionPointer;
- (id)initWithConnection:(const void*)arg1 SQL:(id)arg2;

@end
