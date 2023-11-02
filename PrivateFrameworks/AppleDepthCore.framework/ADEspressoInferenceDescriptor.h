
@interface ADEspressoInferenceDescriptor : NSObject {
    NSDictionary * _layoutNames;
    NSURL * _networkURL;
}

@property (nonatomic, readonly) NSURL *networkURL;

- (void).cxx_destruct;
- (id)configurationNameForLayout:(unsigned long long)arg1;
- (id)initWithUrl:(id)arg1 layoutNames:(id)arg2;
- (id)networkURL;

@end
