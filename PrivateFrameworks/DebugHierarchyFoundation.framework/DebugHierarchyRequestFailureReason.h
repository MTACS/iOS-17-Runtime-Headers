
@interface DebugHierarchyRequestFailureReason : NSObject {
    NSString * _address;
    NSString * _code;
    NSString * _exceptionCode;
    NSString * _signal;
    NSString * _subcode;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *exceptionCode;
@property (nonatomic, copy) NSString *signal;
@property (nonatomic, copy) NSString *subcode;

+ (id)_failureReasonWithReasonString:(id)arg1;
+ (id)_wordStartingAfterSubstring:(id)arg1 inString:(id)arg2;
+ (id)_wordStartingAtIndex:(long long)arg1 inString:(id)arg2;
+ (id)failureReasonWithErrorMessage:(id)arg1;

- (void).cxx_destruct;
- (id)address;
- (id)code;
- (id)exceptionCode;
- (void)setAddress:(id)arg1;
- (void)setCode:(id)arg1;
- (void)setExceptionCode:(id)arg1;
- (void)setSignal:(id)arg1;
- (void)setSubcode:(id)arg1;
- (id)signal;
- (id)subcode;

@end
