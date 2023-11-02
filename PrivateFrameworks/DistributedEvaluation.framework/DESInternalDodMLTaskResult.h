
@interface DESInternalDodMLTaskResult : NSObject {
    NSDictionary * _JSONResult;
    NSData * _binaryResult;
    NSURL * _deferralURL;
    bool  _deferred;
    double  _duration;
}

@property (nonatomic, readonly) NSDictionary *JSONResult;
@property (nonatomic, readonly) NSData *binaryResult;
@property (nonatomic, readonly) NSURL *deferralURL;
@property (nonatomic, readonly) bool deferred;
@property (nonatomic, readonly) double duration;

- (void).cxx_destruct;
- (id)JSONResult;
- (id)binaryResult;
- (id)deferralURL;
- (bool)deferred;
- (id)description;
- (double)duration;
- (id)initWithJSONResult:(id)arg1 binaryResult:(id)arg2 deferred:(bool)arg3 deferralURL:(id)arg4 duration:(double)arg5;

@end
