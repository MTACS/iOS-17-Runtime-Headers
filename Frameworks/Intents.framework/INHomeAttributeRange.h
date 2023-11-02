
@interface INHomeAttributeRange : NSObject <NSCopying, NSSecureCoding> {
    double  _lowerValue;
    double  _upperValue;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) double lowerValue;
@property (nonatomic, readonly) double upperValue;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(double)arg1 upperValue:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)lowerValue;
- (double)upperValue;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
