
@interface SFSearchViewDisappearFeedback : SFFeedback {
    long long  _viewDisappearEvent;
}

@property (nonatomic) long long viewDisappearEvent;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(long long)arg1;
- (void)setViewDisappearEvent:(long long)arg1;
- (long long)viewDisappearEvent;

@end
