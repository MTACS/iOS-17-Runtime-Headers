
@interface CVNLPTextDecodingToken : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _activationRange;
    NSNumber * _alignmentScore;
    bool  _hasPrecedingSpace;
    NSNumber * _score;
    NSString * _string;
    NSString * _terminatingCharacter;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } activationRange;
@property (nonatomic, readonly, copy) NSNumber *alignmentScore;
@property (nonatomic, readonly, copy) NSString *fullString;
@property (nonatomic, readonly) bool hasPrecedingSpace;
@property (nonatomic, readonly, copy) NSNumber *score;
@property (nonatomic, readonly, copy) NSString *string;
@property (nonatomic, readonly, copy) NSString *terminatingCharacter;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })activationRange;
- (id)alignmentScore;
- (id)fullString;
- (bool)hasPrecedingSpace;
- (id)initWithString:(id)arg1 score:(id)arg2 activationRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 hasPrecedingSpace:(bool)arg4;
- (id)initWithString:(id)arg1 score:(id)arg2 activationRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 terminatingCharacter:(id)arg4;
- (id)initWithString:(id)arg1 score:(id)arg2 alignmentScore:(id)arg3 activationRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 terminatingCharacter:(id)arg5;
- (id)score;
- (id)string;
- (id)terminatingCharacter;

@end
