
@interface _PSCNAutocompleteFeedbackActionStatistics : NSObject {
    long long  _countTappedSuggestions;
    long long  _countTimesVendedSuggestions;
    long long  _countUsedSuggestions;
    long long  _countVendedSuggestions;
}

@property (nonatomic) long long countTappedSuggestions;
@property (nonatomic) long long countTimesVendedSuggestions;
@property (nonatomic) long long countUsedSuggestions;
@property (nonatomic) long long countVendedSuggestions;

- (long long)countTappedSuggestions;
- (long long)countTimesVendedSuggestions;
- (long long)countUsedSuggestions;
- (long long)countVendedSuggestions;
- (void)setCountTappedSuggestions:(long long)arg1;
- (void)setCountTimesVendedSuggestions:(long long)arg1;
- (void)setCountUsedSuggestions:(long long)arg1;
- (void)setCountVendedSuggestions:(long long)arg1;

@end
