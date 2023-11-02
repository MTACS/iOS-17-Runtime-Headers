
@interface WFSmartPromptDialogViewController : WFCompactDialogViewController <QLPreviewControllerDelegate> {
    NSArray * _actions;
    WFContentCollection * _dataSource;
    UIStackView * _sourceDestinationView;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) WFContentCollection *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIStackView *sourceDestinationView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actions;
- (id)dataSource;
- (void)finishWithResult:(unsigned long long)arg1;
- (void)loadContentCollection;
- (void)loadView;
- (void)setActions:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setSourceDestinationView:(id)arg1;
- (id)sourceDestinationView;

@end
