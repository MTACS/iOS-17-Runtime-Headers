
@interface FedStatsCohortQueryFieldGeneric : NSObject <FedStatsCohortQueryProtocol> {
    NSString * _cohortName;
}

@property (nonatomic, readonly) NSString *cohortName;

+ (id)cohortInstance;
+ (id)cohortQueryFieldWithKey:(id)arg1;

- (void).cxx_destruct;
- (id)cohortKeyForParameters:(id)arg1 possibleError:(id*)arg2;
- (id)cohortName;
- (id)initQueryFieldWithKey:(id)arg1;

@end
