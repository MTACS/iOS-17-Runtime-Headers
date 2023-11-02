
@interface BRCFPImportReport : NSObject {
    NSError * _importError;
    long long  _reconciledItems;
}

@property (nonatomic, copy) NSError *importError;
@property (nonatomic) long long reconciledItems;

- (void).cxx_destruct;
- (id)importError;
- (id)init;
- (long long)reconciledItems;
- (void)setImportError:(id)arg1;
- (void)setReconciledItems:(long long)arg1;

@end
