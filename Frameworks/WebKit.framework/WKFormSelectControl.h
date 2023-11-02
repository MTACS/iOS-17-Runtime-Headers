
@interface WKFormSelectControl : WKFormPeripheralBase {
    struct RetainPtr<NSObject<WKFormControl>> { 
        void *m_ptr; 
    }  _control;
}

@property (nonatomic, readonly) NSArray *menuItemTitles;
@property (nonatomic, readonly) NSString *selectFormPopoverTitle;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithView:(id)arg1;
- (id)menuItemTitles;
- (bool)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1;
- (id)selectFormPopoverTitle;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(bool)arg3;

@end
