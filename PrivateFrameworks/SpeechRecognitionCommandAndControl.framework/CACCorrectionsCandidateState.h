
@interface CACCorrectionsCandidateState : NSObject <TUICandidateViewState> {
    double  _additionalHeight;
    long long  _arrowButtonDirection;
    struct CGPoint { 
        double x; 
        double y; 
    }  _arrowButtonOffset;
    long long  _arrowButtonPosition;
    unsigned long long  _borders;
    bool  _candidateNumberEnabled;
    long long  _disambiguationGridPosition;
    long long  _disambiguationGridRowType;
    <TUICandidateViewStyle> * _disambiguationStyle;
    bool  _hasBackdrop;
    long long  _inlineTextViewPosition;
    long long  _primaryGridRowType;
    long long  _sortControlPosition;
    <TUICandidateViewStyle> * _style;
    double  _yOffset;
}

@property (nonatomic) double additionalHeight;
@property (nonatomic) long long arrowButtonDirection;
@property (nonatomic) struct CGPoint { double x1; double x2; } arrowButtonOffset;
@property (nonatomic) long long arrowButtonPosition;
@property (nonatomic) unsigned long long borders;
@property (nonatomic) bool candidateNumberEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long disambiguationGridPosition;
@property (nonatomic) long long disambiguationGridRowType;
@property (nonatomic, retain) <TUICandidateViewStyle> *disambiguationStyle;
@property (nonatomic) bool hasBackdrop;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inlineTextViewPosition;
@property (nonatomic) long long primaryGridRowType;
@property (nonatomic) long long sortControlPosition;
@property (nonatomic, retain) <TUICandidateViewStyle> *style;
@property (readonly) Class superclass;
@property (nonatomic) double yOffset;

- (void).cxx_destruct;
- (double)additionalHeight;
- (long long)arrowButtonDirection;
- (struct CGPoint { double x1; double x2; })arrowButtonOffset;
- (long long)arrowButtonPosition;
- (unsigned long long)borders;
- (bool)candidateNumberEnabled;
- (long long)disambiguationGridPosition;
- (long long)disambiguationGridRowType;
- (id)disambiguationStyle;
- (bool)hasBackdrop;
- (long long)inlineTextViewPosition;
- (long long)primaryGridRowType;
- (void)setAdditionalHeight:(double)arg1;
- (void)setArrowButtonDirection:(long long)arg1;
- (void)setArrowButtonOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setArrowButtonPosition:(long long)arg1;
- (void)setBorders:(unsigned long long)arg1;
- (void)setCandidateNumberEnabled:(bool)arg1;
- (void)setDisambiguationGridPosition:(long long)arg1;
- (void)setDisambiguationGridRowType:(long long)arg1;
- (void)setDisambiguationStyle:(id)arg1;
- (void)setHasBackdrop:(bool)arg1;
- (void)setInlineTextViewPosition:(long long)arg1;
- (void)setPrimaryGridRowType:(long long)arg1;
- (void)setSortControlPosition:(long long)arg1;
- (void)setStyle:(id)arg1;
- (void)setYOffset:(double)arg1;
- (long long)sortControlPosition;
- (id)style;
- (double)yOffset;

@end
