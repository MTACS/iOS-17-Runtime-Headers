
@interface AISChildAccountCutOffAgeResponse : NSObject {
    void wrappedResponse;
}

@property (nonatomic, readonly) long long childCutOffAge;
@property (nonatomic, readonly) NSString *childCutOffAgeLocalized;

- (void).cxx_destruct;
- (long long)childCutOffAge;
- (id)childCutOffAgeLocalized;
- (id)init;

@end
