
@interface SUCoreConfigParam : NSObject {
    NSError * _error;
    MAAsset * _locatedAsset;
    unsigned long long  _operation;
}

@property (nonatomic, readonly, retain) NSError *error;
@property (nonatomic, readonly, retain) MAAsset *locatedAsset;
@property (nonatomic, readonly) unsigned long long operation;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)initWithError:(id)arg1 operation:(unsigned long long)arg2;
- (id)initWithLocatedAsset:(id)arg1;
- (id)locatedAsset;
- (unsigned long long)operation;

@end
