
@interface TLKRoundedCornerLabels : TLKStackView {
    unsigned long long  _prominence;
    NSMutableArray * _roundedLabels;
    unsigned long long  _sizeConfiguration;
}

@property (nonatomic) unsigned long long prominence;
@property (nonatomic, retain) NSMutableArray *roundedLabels;
@property (nonatomic) unsigned long long sizeConfiguration;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)prominence;
- (id)roundedLabels;
- (void)setProminence:(unsigned long long)arg1;
- (void)setRoundedLabels:(id)arg1;
- (void)setSizeConfiguration:(unsigned long long)arg1;
- (unsigned long long)sizeConfiguration;
- (void)updateRoundedText:(id)arg1;

@end
