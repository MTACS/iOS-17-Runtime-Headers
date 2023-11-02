
@interface NMSKeepLocalRequest : NSObject {
    long long  _enableState;
    MPModelObject * _modelObject;
}

@property (nonatomic, readonly) long long enableState;
@property (nonatomic, readonly) MPModelObject *modelObject;

- (void).cxx_destruct;
- (long long)enableState;
- (id)initWithModelObject:(id)arg1 enableState:(long long)arg2;
- (id)modelObject;
- (void)performWithOptions:(id)arg1 completion:(id /* block */)arg2;

@end
