
@interface BMStreamMetadata : NSObject <NSSecureCoding> {
    Class  _eventDataClass;
    BMPruningPolicy * _pruningPolicy;
    NSString * _remoteStreamName;
    NSString * _streamId;
}

@property (nonatomic, readonly) Class eventDataClass;
@property (nonatomic, readonly) bool isRemote;
@property (nonatomic, readonly) BMPruningPolicy *pruningPolicy;
@property (nonatomic, copy) NSString *remoteStreamName;
@property (nonatomic, readonly) NSString *streamId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (void)encodeWithCoder:(id)arg1;
- (Class)eventDataClass;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreamId:(id)arg1 eventType:(Class)arg2 remoteStreamName:(id)arg3 pruningPolicy:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualStreamMetadata:(id)arg1;
- (bool)isRemote;
- (id)pruningPolicy;
- (id)remoteStreamName;
- (void)setRemoteStreamName:(id)arg1;
- (id)streamId;

@end
