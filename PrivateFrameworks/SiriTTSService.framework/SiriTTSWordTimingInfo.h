
@interface SiriTTSWordTimingInfo : NSObject <NSSecureCoding> {
    void startTime;
    void textRange;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic) double startTime;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartTiming:(double)arg1 textRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isEqual:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (double)startTime;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;

@end
