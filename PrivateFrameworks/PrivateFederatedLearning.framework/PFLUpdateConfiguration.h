
@interface PFLUpdateConfiguration : NSObject {
    NSString * _identifier;
    NSArray * _layerNames;
    MLModelConfiguration * _modelConfiguration;
    unsigned long long  _normBinCount;
    double  _normMax;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *layerNames;
@property (nonatomic, readonly) MLModelConfiguration *modelConfiguration;
@property (nonatomic, readonly) unsigned long long normBinCount;
@property (nonatomic, readonly) double normMax;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 layerNames:(id)arg2 normMax:(double)arg3 normBinCount:(unsigned long long)arg4 modelConfiguration:(id)arg5;
- (id)layerNames;
- (id)modelConfiguration;
- (unsigned long long)normBinCount;
- (double)normMax;

@end
