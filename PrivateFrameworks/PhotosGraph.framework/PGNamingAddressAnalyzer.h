
@interface PGNamingAddressAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor * _processor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)findAddressMatchesFromHomeAddressesByContactIdentifier:(id)arg1 momentNodesByAddressNode:(id)arg2 withProgressBlock:(id /* block */)arg3;
- (id)initWithNamingProcessor:(id)arg1;
- (id)name;
- (void)runAnalysisWithProgressBlock:(id /* block */)arg1;

@end
