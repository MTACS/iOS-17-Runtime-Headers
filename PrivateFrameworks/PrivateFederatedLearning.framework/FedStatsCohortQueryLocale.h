
@interface FedStatsCohortQueryLocale : NSObject <FedStatsCohortQueryProtocol> {
    NSString * _deviceLocale;
}

@property (nonatomic, readonly) NSString *deviceLocale;

+ (id)cohortInstance;

- (void).cxx_destruct;
- (id)cohortKeyForParameters:(id)arg1 possibleError:(id*)arg2;
- (id)deviceLocale;
- (id)init;

@end
