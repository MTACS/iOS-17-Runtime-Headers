
@interface CTCAServicePlotReading : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _at;
    NSArray * _targets;
}

@property (nonatomic, retain) NSDate *at;
@property (nonatomic, retain) NSArray *targets;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)at;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAt:(id)arg1;
- (void)setTargets:(id)arg1;
- (id)targets;

@end
