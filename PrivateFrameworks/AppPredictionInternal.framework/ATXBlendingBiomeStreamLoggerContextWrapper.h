
@interface ATXBlendingBiomeStreamLoggerContextWrapper : NSObject <NSSecureCoding> {
    BMStoreEvent * _event;
    ATXBlendingBiomeStreamLoggerContext * _loggerContext;
}

@property (nonatomic, retain) BMStoreEvent *event;
@property (nonatomic, retain) ATXBlendingBiomeStreamLoggerContext *loggerContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 loggerContext:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXBlendingBiomeStreamLoggerContextWrapper:(id)arg1;
- (id)loggerContext;
- (void)setEvent:(id)arg1;
- (void)setLoggerContext:(id)arg1;

@end
