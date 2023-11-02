
@protocol TUICandidateViewState <NSObject>

@required

- (double)additionalHeight;
- (long long)arrowButtonDirection;
- (struct CGPoint { double x1; double x2; })arrowButtonOffset;
- (long long)arrowButtonPosition;
- (unsigned long long)borders;
- (bool)candidateNumberEnabled;
- (long long)disambiguationGridPosition;
- (long long)disambiguationGridRowType;
- (<TUICandidateViewStyle> *)disambiguationStyle;
- (bool)hasBackdrop;
- (long long)inlineTextViewPosition;
- (long long)primaryGridRowType;
- (long long)sortControlPosition;
- (<TUICandidateViewStyle> *)style;
- (double)yOffset;

@end
