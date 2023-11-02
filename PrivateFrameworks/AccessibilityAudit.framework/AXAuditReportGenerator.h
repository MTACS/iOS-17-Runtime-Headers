
@interface AXAuditReportGenerator : NSObject {
    NSMutableDictionary * __auditScreenToIssuesMapping;
    NSMutableArray * __issues;
    NSString * _deviceName;
}

@property (nonatomic, retain) NSMutableDictionary *_auditScreenToIssuesMapping;
@property (nonatomic, retain) NSMutableArray *_issues;
@property (nonatomic, copy) NSString *deviceName;

- (void).cxx_destruct;
- (id)_anyAuditIssueFromResults:(id)arg1;
- (id)_auditScreenToIssuesMapping;
- (id)_defaultSavePath;
- (id)_fileExtensionForReportType:(long long)arg1;
- (id)_fullOutputPathForReportType:(long long)arg1 outputPath:(id)arg2 outputFilename:(id)arg3;
- (id)_generateHTMLSourceFromTemplates;
- (void)_generateMapOfScreensToIssues:(id)arg1;
- (id)_htmlTemplate;
- (id)_htmlTemplatePath;
- (id)_issues;
- (id)_jsonArrayForIssues:(id)arg1 screenName:(id)arg2;
- (id)_jsonData;
- (id)_jsonDictionary;
- (id)_jsonDictionaryForAuditIssueImage:(id)arg1 thumbnailOnly:(bool)arg2;
- (id)_jsonDictionaryForIssue:(id)arg1 screenName:(id)arg2;
- (id)_jsonDictionaryForScreen:(id)arg1 issuesOnScreen:(id)arg2;
- (id)_jsonString;
- (id)_locStringForKey:(id)arg1;
- (void)_processScreenshotsForAXAuditResult:(id)arg1 completion:(id /* block */)arg2;
- (void)appendIssues:(id)arg1;
- (id)deviceName;
- (id)generateReportType:(long long)arg1 outputPath:(id)arg2 outputFilename:(id)arg3 error:(id*)arg4;
- (void)generateXCTestReportType:(long long)arg1 forAuditResult:(id)arg2 completion:(id /* block */)arg3;
- (id)imageDataForIssue:(id)arg1 thumbnailOnly:(bool)arg2;
- (id)init;
- (id)reportHeaderForIssues:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)set_auditScreenToIssuesMapping:(id)arg1;
- (void)set_issues:(id)arg1;
- (id)textDescriptionForIssues:(id)arg1;

@end
