
@interface FHDatabaseClauseFromBuilder : NSObject {
    NSArray * _clauseList;
}

@property (nonatomic, readonly) NSArray *clauseList;

+ (id)initWithBuilder:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_init:(id)arg1;
- (id)clauseList;
- (id)description;

@end
