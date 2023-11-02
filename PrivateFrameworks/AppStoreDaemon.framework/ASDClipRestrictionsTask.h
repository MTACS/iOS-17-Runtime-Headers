
@interface ASDClipRestrictionsTask : NSObject {
    NSDictionary * _dictionary;
    long long  _responseCode;
    NSDate * _verificationDate;
}

@property (readonly) bool hasErrorStatus;
@property (nonatomic, readonly) long long responseCode;

- (void).cxx_destruct;
- (bool)hasErrorStatus;
- (bool)hasResponseFlag:(long long)arg1;
- (id)initWithClipRequest:(id)arg1;
- (id)initWithClipRequest:(id)arg1 verificationDate:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 verificationDate:(id)arg2;
- (long long)responseCode;

@end
