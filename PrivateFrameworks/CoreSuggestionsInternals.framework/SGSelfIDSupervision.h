
@interface SGSelfIDSupervision : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _candidateNameRange;
    bool  _isNegativeExample;
    bool  _isPositiveExample;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } candidateNameRange;
@property (nonatomic) bool isNegativeExample;
@property (nonatomic) bool isPositiveExample;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })candidateNameRange;
- (id)initWithMessage:(id)arg1 candidateName:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isNegativeExample;
- (bool)isPositiveExample;
- (void)setCandidateNameRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setIsNegativeExample:(bool)arg1;
- (void)setIsPositiveExample:(bool)arg1;

@end
