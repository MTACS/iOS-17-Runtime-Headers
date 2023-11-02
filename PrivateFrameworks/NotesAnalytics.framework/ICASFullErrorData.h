
@interface ICASFullErrorData : NSObject <AADataEventType> {
    NSString * _errorString;
    NSNumber * _fullErrorCode;
}

@property (nonatomic, readonly) NSString *errorString;
@property (nonatomic, readonly) NSNumber *fullErrorCode;

+ (id)dataName;

- (void).cxx_destruct;
- (id)errorString;
- (id)fullErrorCode;
- (id)initWithFullErrorCode:(id)arg1 errorString:(id)arg2;
- (id)toDict;

@end
