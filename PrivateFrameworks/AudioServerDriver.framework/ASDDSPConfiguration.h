
@interface ASDDSPConfiguration : NSObject {
    NSArray * _dspItems;
}

@property (nonatomic, copy) NSArray *dspItems;

- (void).cxx_destruct;
- (id)dspItems;
- (id)initWithArray:(id)arg1 resourcePath:(id)arg2;
- (void)setDspItems:(id)arg1;

@end
