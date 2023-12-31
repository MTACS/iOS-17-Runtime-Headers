
@interface UIStoryboardPresentationSegueTemplate : UIStoryboardSegueTemplate {
    long long  _modalPresentationStyle;
    long long  _modalTransitionStyle;
    bool  _useDefaultModalPresentationStyle;
    bool  _useDefaultModalTransitionStyle;
}

@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic) long long modalTransitionStyle;
@property (nonatomic) bool useDefaultModalPresentationStyle;
@property (nonatomic) bool useDefaultModalTransitionStyle;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)arg1;
- (id /* block */)newDefaultPrepareHandlerForSegue:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setModalTransitionStyle:(long long)arg1;
- (void)setUseDefaultModalPresentationStyle:(bool)arg1;
- (void)setUseDefaultModalTransitionStyle:(bool)arg1;
- (bool)useDefaultModalPresentationStyle;
- (bool)useDefaultModalTransitionStyle;

@end
