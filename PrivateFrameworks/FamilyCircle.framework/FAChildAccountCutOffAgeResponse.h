
@interface FAChildAccountCutOffAgeResponse : AAResponse

@property (nonatomic, readonly) long long childCutOffAge;
@property (nonatomic, readonly) NSString *childCutOffAgeLocalized;

- (long long)childCutOffAge;
- (id)childCutOffAgeLocalized;
- (id)init;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(bool)arg3;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2 mediaType:(id)arg3;

@end
