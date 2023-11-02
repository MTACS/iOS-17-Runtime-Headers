
@interface _PSCNAutocompleteFeedbackTappedSuggestion : NSObject <NSSecureCoding> {
    _PSSuggestion * _suggestion;
}

@property (nonatomic, readonly, copy) _PSSuggestion *suggestion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestion:(id)arg1;
- (id)suggestion;

@end
