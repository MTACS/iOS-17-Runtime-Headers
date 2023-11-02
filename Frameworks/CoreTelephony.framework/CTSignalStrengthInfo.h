
@interface CTSignalStrengthInfo : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _bars;
    NSNumber * _displayBars;
    NSNumber * _maxDisplayBars;
}

@property (nonatomic, retain) NSNumber *bars;
@property (nonatomic, retain) NSNumber *displayBars;
@property (nonatomic, retain) NSNumber *maxDisplayBars;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bars;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayBars;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)maxDisplayBars;
- (void)setBars:(id)arg1;
- (void)setDisplayBars:(id)arg1;
- (void)setMaxDisplayBars:(id)arg1;

@end
