
@protocol WFCompactPlatterPresentation <NSObject>

@required

- (<WFCompactPlatterContentContainer> *)platterContentContainer;
- (double)platterHeightForWidth:(double)arg1 withMaximumHeight:(double)arg2;
- (void)setPlatterContentContainer:(id <WFCompactPlatterContentContainer>)arg1;

@optional

- (bool)platterHeightAnimationsDisabled;
- (void)setPlatterHeightAnimationsDisabled:(bool)arg1;

@end
