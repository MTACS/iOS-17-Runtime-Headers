
@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject {
    long long  _enableState;
    MPModelObject * _identifyingModelObject;
}

@property (nonatomic) long long enableState;
@property (nonatomic, retain) MPModelObject *identifyingModelObject;

- (void).cxx_destruct;
- (long long)enableState;
- (unsigned long long)hash;
- (id)identifyingModelObject;
- (bool)isEqual:(id)arg1;
- (void)setEnableState:(long long)arg1;
- (void)setIdentifyingModelObject:(id)arg1;

@end
