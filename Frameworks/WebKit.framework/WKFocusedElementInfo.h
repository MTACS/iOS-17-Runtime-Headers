
@interface WKFocusedElementInfo : NSObject <_WKFocusedElementInfo> {
    bool  _isUserInitiated;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _label;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _placeholder;
    long long  _type;
    struct RetainPtr<NSObject<NSSecureCoding>> { 
        void *m_ptr; 
    }  _userObject;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSString *placeholder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (getter=isUserInitiated, nonatomic, readonly) bool userInitiated;
@property (nonatomic, readonly) NSObject<NSSecureCoding> *userObject;
@property (nonatomic, readonly, copy) NSString *value;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFocusedElementInformation:(const void*)arg1 isUserInitiated:(bool)arg2 userObject:(id)arg3;
- (bool)isUserInitiated;
- (id)label;
- (id)placeholder;
- (long long)type;
- (id)userObject;
- (id)value;

@end
