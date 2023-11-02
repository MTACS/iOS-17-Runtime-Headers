
@interface CHRecognitionResult : NSObject {
    double  _score;
}

@property double score;

// Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting

- (id)description;
- (id)initWithScore:(double)arg1;
- (double)score;
- (void)setScore:(double)arg1;

// Image: /System/Library/PrivateFrameworks/TextInputCJK.framework/TextInputCJK

- (id)mecabraHandwritingCandidate;

@end
