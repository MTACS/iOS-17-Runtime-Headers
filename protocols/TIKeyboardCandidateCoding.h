
@protocol TIKeyboardCandidateCoding <NSObject>

@required

+ (int)type;

- (void)encodeWithCandidateResultSetCoder:(TIKeyboardCandidateResultSetCoder *)arg1;
- (id)initWithCandidateResultSetCoder:(TIKeyboardCandidateResultSetCoder *)arg1;

@end
