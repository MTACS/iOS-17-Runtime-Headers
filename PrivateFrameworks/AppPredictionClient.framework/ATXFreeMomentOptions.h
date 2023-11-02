
@interface ATXFreeMomentOptions : NSObject <NSSecureCoding> {
    double  _durationHint;
    unsigned long long  _matchingOptions;
}

@property (nonatomic, readonly) double durationHint;
@property (nonatomic, readonly) unsigned long long matchingOptions;

+ (bool)supportsSecureCoding;

- (double)durationHint;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDurationHint:(double)arg1 matchingOptions:(unsigned long long)arg2;
- (unsigned long long)matchingOptions;

@end
