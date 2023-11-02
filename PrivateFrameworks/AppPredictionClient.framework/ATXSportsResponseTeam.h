
@interface ATXSportsResponseTeam : NSObject <NSSecureCoding> {
    NSString * _name;
    NSString * _qid;
    NSString * _umcid;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *qid;
@property (nonatomic, readonly) NSString *umcid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 umcid:(id)arg2;
- (id)initWithName:(id)arg1 umcid:(id)arg2 qid:(id)arg3;
- (id)name;
- (id)qid;
- (id)umcid;

@end
