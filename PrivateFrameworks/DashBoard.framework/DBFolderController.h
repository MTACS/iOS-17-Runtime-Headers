
@interface DBFolderController : SBRootFolderController {
    <DBEnvironment> * _environment;
}

@property (nonatomic) <DBEnvironment> *environment;

+ (Class)_contentViewClass;
+ (Class)listViewClass;

- (void).cxx_destruct;
- (id)environment;
- (bool)hasDock;
- (void)setEnvironment:(id)arg1;

@end
