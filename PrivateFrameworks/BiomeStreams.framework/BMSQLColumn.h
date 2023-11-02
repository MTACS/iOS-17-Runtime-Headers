
@interface BMSQLColumn : NSObject {
    long long  _dataType;
    id /* block */  _extractBlock;
    NSString * _name;
    bool  _requestOnly;
}

@property (nonatomic, readonly) long long dataType;
@property (nonatomic, readonly, copy) id /* block */ extractBlock;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool requestOnly;

+ (id)new;

- (void).cxx_destruct;
- (long long)dataType;
- (id)description;
- (id /* block */)extractBlock;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1 dataType:(long long)arg2 requestOnly:(bool)arg3 extractBlock:(id /* block */)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)requestOnly;

@end
