
@interface Feedback.FBKSubmissionError : NSObject <NSSecureCoding> {
    void serverErrorDetails;
    void underlyingError;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSDictionary *serverErrorDetails;
@property (nonatomic, retain) NSError *underlyingError;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)serverErrorDetails;
- (void)setServerErrorDetails:(id)arg1;
- (void)setUnderlyingError:(id)arg1;
- (id)underlyingError;

@end
