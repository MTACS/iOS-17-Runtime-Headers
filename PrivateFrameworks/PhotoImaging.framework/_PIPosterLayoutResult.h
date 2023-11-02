
@interface _PIPosterLayoutResult : _NURenderResult <PIPosterLayoutResult> {
    PFPosterLayout * _layout;
    NSDictionary * _scores;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PFPosterLayout *layout;
@property (nonatomic, copy) NSDictionary *scores;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)layout;
- (id)scores;
- (void)setLayout:(id)arg1;
- (void)setScores:(id)arg1;

@end
