
@interface FedStatsCohortFactory : NSObject {
    NSDictionary * _cohortObjects;
}

@property (readonly) NSDictionary *cohortObjects;

+ (id)cohortQueryFieldByName:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cohortObjects;
- (id)init;

@end
