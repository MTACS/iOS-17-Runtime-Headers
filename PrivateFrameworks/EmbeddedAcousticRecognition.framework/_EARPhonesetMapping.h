
@interface _EARPhonesetMapping : NSObject {
    struct shared_ptr<quasar::PhonesetMapping> { 
        struct PhonesetMapping {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _phoneset;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)arg1;
- (id)ipaPhoneSequenceForAsrProns:(id)arg1;
- (id)nvAsrPhoneSequenceForXsampaProns:(id)arg1;
- (id)supportedXsampaProns;

@end
