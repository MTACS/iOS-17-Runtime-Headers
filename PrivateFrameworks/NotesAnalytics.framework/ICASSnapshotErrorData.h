
@interface ICASSnapshotErrorData : NSObject <AADataEventType> {
    NSNumber * _errorCode;
    NSString * _errorDomain;
}

@property (nonatomic, readonly) NSNumber *errorCode;
@property (nonatomic, readonly) NSString *errorDomain;

+ (id)dataName;

- (void).cxx_destruct;
- (id)errorCode;
- (id)errorDomain;
- (id)initWithErrorDomain:(id)arg1 errorCode:(id)arg2;
- (id)toDict;

@end
