
@interface MXCleanUtil : NSObject {
    <MXClientUtilProtocol> * _clientUtil;
    <MXDeliveryPathUtilProtocol> * _deliveryPathUtil;
    NSObject<OS_os_log> * _logHandle;
}

@property (retain) <MXClientUtilProtocol> *clientUtil;
@property (retain) <MXDeliveryPathUtilProtocol> *deliveryPathUtil;
@property (retain) NSObject<OS_os_log> *logHandle;

- (void).cxx_destruct;
- (void)_cleanClientfulSourceDirectoriesForStaleData;
- (void)_cleanClientlessSourceDirectoryForStaleData;
- (void)_cleanDeliveryDirectoriesForClient:(id)arg1;
- (void)_cleanDeliveryDirectoriesForStaleData;
- (void)_cleanDiagnosticDeliveryDirectoriesForStaleData;
- (void)_cleanDiagnosticDeliveryDirectoryForStaleDataForDirectory:(id)arg1;
- (void)_cleanDirectoriesForStaleData;
- (void)_cleanDirectoriesForUninstalledClient:(id)arg1;
- (void)_cleanDirectoriesForUninstalledClients;
- (void)_cleanDirectory:(id)arg1;
- (void)_cleanFileFromFilePath:(id)arg1;
- (void)_cleanMetricDeliveryDirectoriesForStaleData;
- (void)_cleanMetricDeliveryDirectoryForStaleDataForDirectory:(id)arg1;
- (void)_cleanSourceDirectoriesForClient:(id)arg1;
- (void)_cleanSourceDirectoriesForStaleData;
- (void)_cleanSourceDirectoryForSource:(id)arg1 andClient:(id)arg2;
- (void)_cleanStaleDataForSourceDirectory:(id)arg1;
- (id)_clientfulSourceDirectories;
- (id)_clientlessSourceDirectory;
- (id)_dateFromDateString:(id)arg1;
- (id)_dateFromDiagnosticFilename:(id)arg1;
- (id)_dateFromMetricFilename:(id)arg1;
- (id)_dateStringFromDiagnosticSourceFilename:(id)arg1;
- (id)_dateStringFromMetricSourceFilename:(id)arg1;
- (id)_dateStringFromUnprefixedFilename:(id)arg1;
- (id)_datesFromDiagnosticFilenames:(id)arg1;
- (id)_datesFromMetricFilenames:(id)arg1;
- (id)_diagnosticDeliveryDirectories;
- (id)_diagnosticDeliveryDirectoryForClient:(id)arg1;
- (id)_diagnosticDeliveryParentDirectory;
- (id)_filenamesFromDirectory:(id)arg1;
- (bool)_isDiagnosticDeliveryStaleForDirectory:(id)arg1;
- (bool)_isDiagnosticSourceFilename:(id)arg1;
- (bool)_isMetricDeliveryStaleForDirectory:(id)arg1;
- (bool)_isMetricSourceFilename:(id)arg1;
- (bool)_isStaleDiagnosticSourceForFilename:(id)arg1;
- (bool)_isStaleForDate:(id)arg1;
- (bool)_isStaleMetricSourceForFilename:(id)arg1;
- (bool)_isStaleSourceForFilename:(id)arg1;
- (id)_lastFileDateFromDiagnosticFilenames:(id)arg1;
- (id)_lastFileDateFromMetricFilenames:(id)arg1;
- (id)_latestDateFromDates:(id)arg1;
- (id)_metricDeliveryDirectories;
- (id)_metricDeliveryDirectoryForClient:(id)arg1;
- (id)_metricDeliveryParentDirectory;
- (id)_sourceDirectoryForSource:(id)arg1 andClient:(id)arg2;
- (id)_subdirectoriesFromDirectory:(id)arg1;
- (void)cleanStaleData;
- (id)clientUtil;
- (id)deliveryPathUtil;
- (id)initWithClientUtil:(id)arg1 andDeliveryPathUtil:(id)arg2;
- (id)logHandle;
- (void)setClientUtil:(id)arg1;
- (void)setDeliveryPathUtil:(id)arg1;
- (void)setLogHandle:(id)arg1;

@end
