
@interface TrialNamespaceProjectPair : NSObject {
    NSString * _namespace;
    int  _projectId;
}

@property (nonatomic, retain) NSString *namespace;
@property (nonatomic) int projectId;

- (void).cxx_destruct;
- (id)namespace;
- (int)projectId;
- (void)setNamespace:(id)arg1;
- (void)setProjectId:(int)arg1;

@end
