
@interface CLMiLoPlaceConfidenceReason : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _confidenceReasonEnum;
}

@property (nonatomic, readonly) unsigned long long confidenceReasonEnum;

+ (bool)supportsSecureCoding;

- (unsigned long long)confidenceReasonEnum;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfidenceReasonEnum:(unsigned long long)arg1;

@end
