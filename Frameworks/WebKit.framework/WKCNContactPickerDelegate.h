
@interface WKCNContactPickerDelegate : NSObject <CNContactPickerDelegate> {
    struct WeakObjCPtr<id<CNContactPickerDelegate>> { 
        id m_weakReference; 
    }  _contactPickerDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)contactPickerDidCancel:(id)arg1;
- (id)initWithContactPickerDelegate:(id)arg1;

@end
