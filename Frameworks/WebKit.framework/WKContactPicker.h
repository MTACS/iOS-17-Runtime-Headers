
@interface WKContactPicker : NSObject <CNContactPickerDelegate> {
    struct CompletionHandler<void (std::optional<WTF::Vector<WebCore::ContactInfo>> &&)>="m_function"{Function<void (std::optional<WTF::Vector<WebCore::ContactInfo>> &&)>="m_callableWrapper"{unique_ptr<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo>> &&>, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo>> &&>>>="__ptr_"{__compressed_pair<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo>> &&> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo>> &&>>>="__value_"^v {}  _completionHandler;
    struct RetainPtr<WKCNContactPickerDelegate> { 
        void *m_ptr; 
    }  _contactPickerDelegate;
    struct RetainPtr<CNContactPickerViewController> { 
        void *m_ptr; 
    }  _contactPickerViewController;
    struct WeakObjCPtr<id<WKContactPickerDelegate>> { 
        id m_weakReference; 
    }  _delegate;
    struct Vector<WebCore::ContactProperty, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        unsigned char *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _properties;
    struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKContactPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct ContactInfo { struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct String {} *x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct String {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct String {} *x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; })_contactInfoFromCNContact:(id)arg1;
- (void)_contactPickerDidDismissWithContactInfo:(void*)arg1;
- (id)_contactsFromJSContacts:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)delegate;
- (void)dismissWithContacts:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)presentWithRequestData:(const void*)arg1 completionHandler:(void*)arg2;
- (void)setDelegate:(id)arg1;

@end
