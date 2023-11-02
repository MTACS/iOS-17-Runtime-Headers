
@protocol WFCompactPlatterContentContainer <NSObject>

@required

- (double)maximumExpectedHeightForPlatterPresentation:(id <WFCompactPlatterPresentation>)arg1;
- (void)platterPresentationDidInvalidateSize:(id <WFCompactPlatterPresentation>)arg1;

@end
