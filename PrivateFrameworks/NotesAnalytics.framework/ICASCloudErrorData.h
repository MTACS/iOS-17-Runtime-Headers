
@interface ICASCloudErrorData : NSObject <AADataEventType> {
    ICASErrorStatus * _errorStatus;
}

@property (nonatomic, readonly) ICASErrorStatus *errorStatus;

+ (id)dataName;

- (void).cxx_destruct;
- (id)errorStatus;
- (id)initWithErrorStatus:(id)arg1;
- (id)toDict;

@end
