
@interface DIExecutionFeedback : NSObject <NSSecureCoding> {
    bool  _consumed;
    NSDate * _finishDate;
}

@property (nonatomic) bool consumed;
@property (nonatomic, copy) NSDate *finishDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)consumed;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)finishDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setConsumed:(bool)arg1;
- (void)setFinishDate:(id)arg1;

@end
