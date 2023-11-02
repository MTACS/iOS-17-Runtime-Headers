
@interface DKReportPlanner : NSObject {
    DKReporterRegistry * _registry;
}

@property (nonatomic, retain) DKReporterRegistry *registry;

+ (id)plannerWithReportGeneratorRegistry:(id)arg1;

- (void).cxx_destruct;
- (id)_resolveComponentIdentityManifest:(id)arg1;
- (id)initWithReportGeneratorRegistry:(id)arg1;
- (id)registry;
- (id)requestGroupsForPredicateManifest:(id)arg1;
- (void)setRegistry:(id)arg1;

@end
