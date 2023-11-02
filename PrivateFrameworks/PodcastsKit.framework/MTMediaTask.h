
@interface MTMediaTask : NSObject {
    bool  _charts;
    AMSMediaTask * _mediaTask;
}

@property (nonatomic) bool charts;
@property (nonatomic, retain) NSArray *identifiers;
@property (nonatomic, retain) AMSMediaTask *mediaTask;

- (void).cxx_destruct;
- (bool)charts;
- (id)identifiers;
- (id)initWithType:(long long)arg1;
- (id)mediaTask;
- (void)perform:(id /* block */)arg1;
- (void)setCharts:(bool)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setMediaTask:(id)arg1;

@end
