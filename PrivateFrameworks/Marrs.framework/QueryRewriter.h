
@interface QueryRewriter : NSObject {
    NSString * _locale;
    struct unique_ptr<marrs::qr::orchestration::QRPredictor, std::default_delete<marrs::qr::orchestration::QRPredictor>> { 
        struct __compressed_pair<marrs::qr::orchestration::QRPredictor *, std::default_delete<marrs::qr::orchestration::QRPredictor>> { 
            struct QRPredictor {} *__value_; 
        } __ptr_; 
    }  _plugin;
    NSString * _predictorName;
    int  _predictorType;
}

@property (nonatomic, retain) NSString *locale;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithLocale:(id)arg1 filesPath:(id)arg2 predictorType:(int)arg3 status:(id*)arg4;
- (id)locale;
- (id)predictWithInput:(id)arg1 status:(id*)arg2;
- (void)setLocale:(id)arg1;

@end
