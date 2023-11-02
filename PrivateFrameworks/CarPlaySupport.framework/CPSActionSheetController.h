
@interface CPSActionSheetController : UIAlertController {
    CPActionSheetTemplate * _actionSheet;
    <CPTemplateDelegate> * _templateDelegate;
}

@property (nonatomic, retain) CPActionSheetTemplate *actionSheet;
@property (nonatomic, retain) <CPTemplateDelegate> *templateDelegate;

+ (id)actionSheetControllerWithActionSheet:(id)arg1;

- (void).cxx_destruct;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (void)setTemplateDelegate:(id)arg1;
- (id)templateDelegate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
