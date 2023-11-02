
@interface SGMISubmodelsAccumulator : NSObject {
    NSDictionary * _submodels;
}

@property (readonly) NSDictionary *submodels;

- (void).cxx_destruct;
- (void)commitToStore:(id)arg1 updateDate:(id)arg2;
- (void)ingest:(id)arg1 asSalient:(bool)arg2;
- (id)init;
- (id)submodels;

@end
