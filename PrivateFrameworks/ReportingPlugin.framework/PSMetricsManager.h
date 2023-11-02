
@interface PSMetricsManager : NSObject {
    _PSMetricsManagerInternal * _underlyingObject;
}

@property (readonly) _PSMetricsManagerInternal *underlyingObject;

+ (void)recordWithAppInference:(id)arg1;
+ (void)recordWithFeedback:(id)arg1;
+ (void)recordWithPeopleInference:(id)arg1;

- (void).cxx_destruct;
- (id)underlyingObject;

@end
