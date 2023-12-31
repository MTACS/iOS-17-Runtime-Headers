
@interface SFResultsReceivedAfterTimeoutFeedback : SFFeedback <NSCopying> {
    NSArray * _results;
}

@property (nonatomic, copy) NSArray *results;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)results;
- (void)setResults:(id)arg1;

@end
