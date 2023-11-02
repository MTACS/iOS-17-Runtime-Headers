
@interface ICASFastSyncErrorData : NSObject <AADataEventType> {
    NSNumber * _countOfIgnoredMessages;
    NSNumber * _errorCode;
}

@property (nonatomic, readonly) NSNumber *countOfIgnoredMessages;
@property (nonatomic, readonly) NSNumber *errorCode;

+ (id)dataName;

- (void).cxx_destruct;
- (id)countOfIgnoredMessages;
- (id)errorCode;
- (id)initWithErrorCode:(id)arg1 countOfIgnoredMessages:(id)arg2;
- (id)toDict;

@end
