
@interface WKSelectMultiplePicker : NSObject <UIPopoverPresentationControllerDelegate, WKFormControl> {
    struct RetainPtr<UINavigationController> { 
        void *m_ptr; 
    }  _navigationController;
    struct RetainPtr<WKSelectPickerTableViewController> { 
        void *m_ptr; 
    }  _tableViewController;
    WKContentView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_indexPathForRow:(long long)arg1;
- (void)configurePresentation;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (id)initWithView:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(bool)arg3;

@end
