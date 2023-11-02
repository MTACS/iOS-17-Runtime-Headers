
@interface _EARUserProfileConfig : NSObject {
    struct unique_ptr<quasar::LmeConfig, std::default_delete<quasar::LmeConfig>> { 
        struct __compressed_pair<quasar::LmeConfig *, std::default_delete<quasar::LmeConfig>> { 
            struct LmeConfig {} *__value_; 
        } __ptr_; 
    }  lmeConfig;
}

@property (nonatomic, readonly) _EARPeopleSuggesterConfig *peopleSuggesterConfig;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2;
- (id)peopleSuggesterConfig;

@end
