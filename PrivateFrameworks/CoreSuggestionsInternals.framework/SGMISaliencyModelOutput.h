
@interface SGMISaliencyModelOutput : NSObject {
    MLMultiArray * _data;
}

@property (nonatomic, retain) MLMultiArray *data;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)arg1;
- (double)regularScore;
- (double)salientScore;
- (void)setData:(id)arg1;

@end
