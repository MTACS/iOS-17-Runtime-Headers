
@interface FHDatabaseInsertOrUpdateFromBuilder : NSObject {
    NSArray * _fieldValuePairList;
}

@property (nonatomic, readonly) NSArray *fieldValuePairList;

+ (id)initWithBuilder:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_init:(id)arg1;
- (id)fieldValuePairList;

@end
