
@interface _PISliderNetLiftResult : _NURenderResult <PISliderNetLiftResult> {
    NSData * _contentFeatureVectorData;
    NSData * _styleFeatureVectorData;
}

@property (copy) NSData *contentFeatureVectorData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (copy) NSData *styleFeatureVectorData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentFeatureVectorData;
- (id)description;
- (void)setContentFeatureVectorData:(id)arg1;
- (void)setStyleFeatureVectorData:(id)arg1;
- (id)styleFeatureVectorData;

@end
