
@interface BMStoreBookmark : NSObject <BMBookmark, BMProtoBufWrapper, NSCopying, NSSecureCoding> {
    double  _iterationStartTime;
    unsigned long long  _offset;
    NSString * _segmentName;
    NSString * _streamId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double iterationStartTime;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) NSString *segmentName;
@property (nonatomic, readonly) NSString *streamId;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionDict;
- (bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithStream:(id)arg1 segment:(id)arg2 iterationStartTime:(double)arg3 offset:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (double)iterationStartTime;
- (unsigned long long)offset;
- (id)proto;
- (id)segmentName;
- (id)streamId;

@end
