
@interface AXAuditResult : NSObject <AXAuditTransportableObjectProtocol> {
    NSDictionary * _auditIssueToScreenshotMapping;
    NSArray * _auditIssues;
}

@property (nonatomic, retain) NSDictionary *auditIssueToScreenshotMapping;
@property (nonatomic, retain) NSArray *auditIssues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerTransportableObjectWithManager:(id)arg1;

- (void).cxx_destruct;
- (void)_generateIssueToImageMapping;
- (id)auditIssueToScreenshotMapping;
- (id)auditIssues;
- (id)borderFrameForAuditIssue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayBoundsForAuditIssue:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAXAuditCategoryResults:(id)arg1;
- (id)initWithAuditIssues:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)rotationForAuditIssue:(id)arg1;
- (id)scaleForAuditIssue:(id)arg1;
- (id)screenshotForAuditIssue:(id)arg1;
- (id)screenshotInfoDictionaryForAuditIssue:(id)arg1;
- (void)setAuditIssueToScreenshotMapping:(id)arg1;
- (void)setAuditIssues:(id)arg1;
- (id)shouldFlipOutlineForAuditIssue:(id)arg1;

@end
