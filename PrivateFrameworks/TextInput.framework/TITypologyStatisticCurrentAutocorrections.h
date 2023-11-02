
@interface TITypologyStatisticCurrentAutocorrections : TITypologyStatistic {
    TIAutocorrectionList * _autocorrections;
    TICandidateRequestToken * _requestToken;
}

@property (nonatomic, retain) TIAutocorrectionList *autocorrections;
@property (nonatomic, retain) TICandidateRequestToken *requestToken;

- (void).cxx_destruct;
- (id)autocorrections;
- (id)requestToken;
- (void)setAutocorrections:(id)arg1;
- (void)setRequestToken:(id)arg1;
- (void)visitRecordAutocorrections:(id)arg1;

@end
