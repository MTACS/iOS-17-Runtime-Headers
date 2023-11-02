
@interface TypistCandidateBar : NSObject

+ (id)candidatesAsStringArray:(id)arg1;
+ (id)initWithTypistKeyboard:(id)arg1;

- (id)candidateUIInformation:(id)arg1;
- (struct CGPoint { double x1; double x2; })centerOfCandidate:(id)arg1;
- (id)getAllCandidates;
- (double)getCandidateBarHeight;
- (double)getCandidateBarWidth;
- (long long)getIndexOfCandidate:(id)arg1;
- (id)getVisibleCandidates;
- (bool)hasCandidate:(id)arg1;
- (bool)hasCandidate:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)hasCandidates;
- (bool)hasCandidates:(id)arg1;
- (bool)hasCandidates:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)hasVisibleCandidate:(id)arg1;
- (id)init;
- (long long)selectCandidate:(id)arg1;
- (long long)selectCandidateAtIndex:(long long)arg1;

@end
