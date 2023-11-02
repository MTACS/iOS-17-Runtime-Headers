
@interface VCPProcessingStatusEntry : NSObject {
    unsigned long long  _attempts;
    NSDate * _lastAttemptDate;
    NSString * _localIdentifier;
    NSDate * _nextAttemptDate;
    unsigned long long  _status;
    unsigned long long  _taskID;
}

@property (nonatomic, readonly) unsigned long long attempts;
@property (nonatomic, readonly) NSDate *lastAttemptDate;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSDate *nextAttemptDate;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) unsigned long long taskID;

+ (id)entryWithLocalIdentifier:(id)arg1 taskID:(unsigned long long)arg2 status:(unsigned long long)arg3 attempts:(unsigned long long)arg4 lastAttemptDate:(id)arg5 andNextAttemptDate:(id)arg6;

- (void).cxx_destruct;
- (unsigned long long)attempts;
- (id)initWithLocalIdentifier:(id)arg1 taskID:(unsigned long long)arg2 status:(unsigned long long)arg3 attempts:(unsigned long long)arg4 lastAttemptDate:(id)arg5 andNextAttemptDate:(id)arg6;
- (id)lastAttemptDate;
- (id)localIdentifier;
- (id)nextAttemptDate;
- (unsigned long long)status;
- (unsigned long long)taskID;

@end
