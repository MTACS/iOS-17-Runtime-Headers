
@interface _SFSpeechAnalyzerOptionsLoggingInfo : NSObject <NSCopying> {
    NSUUID * _asrID;
    NSUUID * _requestID;
}

@property (nonatomic, readonly, copy) NSUUID *asrID;
@property (nonatomic, readonly, copy) NSUUID *requestID;

- (void).cxx_destruct;
- (id)asrID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAsrID:(id)arg1 requestID:(id)arg2;
- (id)requestID;

@end
