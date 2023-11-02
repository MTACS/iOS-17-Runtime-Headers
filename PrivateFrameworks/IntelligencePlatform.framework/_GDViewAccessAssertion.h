
@interface _GDViewAccessAssertion : NSObject <GDViewAccessAssertion> {
    long long  _handle;
    NSString * _viewArtifactTableName;
    NSURL * _viewArtifactURL;
    NSString * _viewName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *viewArtifactTableName;
@property (nonatomic, readonly) NSURL *viewArtifactURL;
@property (nonatomic, readonly) NSString *viewName;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithViewName:(id)arg1 extensionToken:(id)arg2 error:(id*)arg3;
- (id)viewArtifactTableName;
- (id)viewArtifactURL;
- (id)viewName;

@end
