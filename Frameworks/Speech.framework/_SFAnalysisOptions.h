
@interface _SFAnalysisOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString * _aneContext;
    NSUUID * _asrID;
    NSString * _cpuContext;
    NSString * _gpuContext;
    bool  _highPriority;
    NSUUID * _requestID;
}

@property (nonatomic, readonly, copy) NSString *aneContext;
@property (nonatomic, readonly, copy) NSUUID *asrID;
@property (nonatomic, readonly, copy) NSString *cpuContext;
@property (nonatomic, readonly, copy) NSString *gpuContext;
@property (nonatomic, readonly) bool highPriority;
@property (nonatomic, readonly, copy) NSUUID *requestID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aneContext;
- (id)asrID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cpuContext;
- (void)encodeWithCoder:(id)arg1;
- (id)gpuContext;
- (bool)highPriority;
- (id)initWithCoder:(id)arg1;
- (id)initWithHighPriority:(bool)arg1 asrID:(id)arg2 requestID:(id)arg3 aneContext:(id)arg4 cpuContext:(id)arg5 gpuContext:(id)arg6;
- (id)requestID;

@end
