
@interface FCPersonalizationPublisherDampeningConfig : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _dampeningFactorMapping;
    unsigned long long  _dampeningStrategy;
    double  _defaultDampeningFactor;
}

@property (nonatomic, retain) NSDictionary *dampeningFactorMapping;
@property (nonatomic) unsigned long long dampeningStrategy;
@property (nonatomic) double defaultDampeningFactor;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dampeningFactorMapping;
- (unsigned long long)dampeningStrategy;
- (double)defaultDampeningFactor;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithDampeningFactorMapping:(id)arg1 dampeningStrategy:(unsigned long long)arg2 defaultDampeningFactor:(double)arg3;
- (void)setDampeningFactorMapping:(id)arg1;
- (void)setDampeningStrategy:(unsigned long long)arg1;
- (void)setDefaultDampeningFactor:(double)arg1;

// Image: /System/Library/PrivateFrameworks/NewsPersonalization.framework/NewsPersonalization

- (bool)isEqual:(id)arg1;

@end
