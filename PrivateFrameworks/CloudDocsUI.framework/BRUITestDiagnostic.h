
@interface BRUITestDiagnostic : NSObject {
    NSMutableDictionary * _diagnosticDataBySectionName;
    NSString * _outputDirectoryPath;
}

- (void).cxx_destruct;
- (void)addDiagnosticData:(id)arg1 forFilename:(id)arg2;
- (void)addDiagnosticData:(id)arg1 forFilename:(id)arg2 sectionName:(id)arg3;
- (id)initWithOutputDirectoryPath:(id)arg1;
- (bool)writeToDiskWithError:(id*)arg1;

@end
