
@interface _DKDeviceActivityStandingQuery : NSObject <_DKStandingQuery> {
    NSObject<OS_xpc_object> * activity;
    NSString * queryIdentifier;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *activity;
@property (nonatomic, retain) NSString *queryIdentifier;

- (void).cxx_destruct;
- (id)activity;
- (void)executeWithStorage:(id)arg1;
- (void)executeWithStorage:(id)arg1 referenceDate:(id)arg2;
- (id)fetchResult;
- (id)fetchResultForDayOfWeek:(long long)arg1;
- (id)fetchResultForDayOfWeek:(long long)arg1 withStorage:(id)arg2;
- (id)fetchResultFromStorage:(id)arg1;
- (id)init;
- (id)queryIdentifier;
- (void)setActivity:(id)arg1;
- (void)setQueryIdentifier:(id)arg1;

@end
