
@interface ASCProgressOfferMetadata : ASCOfferMetadata {
    bool  _indeterminate;
    double  _percent;
}

@property (getter=isIndeterminate, nonatomic) bool indeterminate;
@property (nonatomic, readonly) double percent;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initIndeterminate;
- (id)initWithCoder:(id)arg1;
- (id)initWithPercent:(double)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIndeterminate;
- (bool)isProgress;
- (double)percent;
- (void)setIndeterminate:(bool)arg1;

@end
