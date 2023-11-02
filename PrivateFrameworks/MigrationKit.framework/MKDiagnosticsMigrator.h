
@interface MKDiagnosticsMigrator : MKMigrator {
    NSString * _basePath;
    NSString * _performanceMetricsPath;
}

- (void).cxx_destruct;
- (id)init;
- (id)pathForPerformanceMetrics;
- (void)saveData:(id)arg1 fileName:(id)arg2;
- (id)saveData:(id)arg1 toFile:(id)arg2;
- (void)savePerformanceMetrics:(id)arg1;

@end
