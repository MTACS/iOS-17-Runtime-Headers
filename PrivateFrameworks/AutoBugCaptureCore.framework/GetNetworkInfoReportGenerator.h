
@interface GetNetworkInfoReportGenerator : NetworkDiagnosticsReportGenerator

- (id)initWithQueue:(id)arg1;
- (void)setDefaults;
- (void)setGNINDFInfoOption:(bool)arg1;
- (void)setGNISensitiveOption:(bool)arg1;
- (void)setGNISysConfigOption:(bool)arg1;

@end
