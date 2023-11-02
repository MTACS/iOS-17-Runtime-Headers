
@interface DUEntryViewController : UIViewController {
    DUDefinitionValue * _definitionValue;
}

@property (retain) DUDefinitionValue *definitionValue;

+ (id)entryViewControllerWithDefinitionValue:(id)arg1;

- (void).cxx_destruct;
- (id)definitionValue;
- (id)initWithDefinitionValue:(id)arg1;
- (void)setDefinitionValue:(id)arg1;
- (void)viewDidLoad;

@end
