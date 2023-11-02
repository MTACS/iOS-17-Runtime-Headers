
@interface SGMultiLabelEspressoClassifierCached : NSObject <PMLMultiLabelClassifierProtocol> {
    NSString * _espressoModelFile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)classifierWithEspressoModelFile:(id)arg1;

- (void).cxx_destruct;
- (id)initWithEspressoModelFile:(id)arg1;
- (unsigned long long)outputDimension;
- (id)predict:(id)arg1;

@end
