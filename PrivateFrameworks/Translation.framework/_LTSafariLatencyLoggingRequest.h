
@interface _LTSafariLatencyLoggingRequest : NSObject <_LTLoggingRequest> {
    double  _firstParagraphComplete;
    double  _firstResponse;
    _LTLocalePair * _localePair;
    double  _pageComplete;
    NSString * _processName;
    double  _progressComplete;
    double  _start;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dict;
@property (nonatomic, readonly) double firstParagraphComplete;
@property (nonatomic, readonly) double firstResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) _LTLocalePair *localePair;
@property (nonatomic, readonly) double pageComplete;
@property (nonatomic, copy) NSString *processName;
@property (nonatomic, readonly) double progressComplete;
@property (nonatomic, readonly) double start;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dict;
- (void)encodeWithCoder:(id)arg1;
- (double)firstParagraphComplete;
- (double)firstResponse;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localePair;
- (void)markFirstParagraphComplete;
- (void)markPageComplete;
- (void)markProgressDone;
- (void)markResponse;
- (double)pageComplete;
- (id)processName;
- (double)progressComplete;
- (void)setLocalePair:(id)arg1;
- (void)setProcessName:(id)arg1;
- (double)start;

@end
