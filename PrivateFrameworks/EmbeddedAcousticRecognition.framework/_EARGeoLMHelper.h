
@interface _EARGeoLMHelper : NSObject {
    struct unique_ptr<quasar::Geography, std::default_delete<quasar::Geography>> { 
        struct __compressed_pair<quasar::Geography *, std::default_delete<quasar::Geography>> { 
            struct Geography {} *__value_; 
        } __ptr_; 
    }  _geography;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (id)regionIdForLatitude:(double)arg1 longitude:(double)arg2;

@end
