
@interface CLRegulatoryConfig : NSObject {
    struct unique_ptr<CLRegulatoryConfigInternal, std::default_delete<CLRegulatoryConfigInternal>> { 
        struct __compressed_pair<CLRegulatoryConfigInternal *, std::default_delete<CLRegulatoryConfigInternal>> { 
            struct CLRegulatoryConfigInternal {} *__value_; 
        } __ptr_; 
    }  _config;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addConfigForIsoList:(id)arg1 config:(id)arg2 error:(id*)arg3;
- (bool)addConfigForRegionList:(id)arg1 config:(id)arg2 error:(id*)arg3;
- (void)fetchConfigForLocation:(id)arg1 withReply:(id /* block */)arg2;
- (void)fetchInfoForLocation:(id)arg1 withReply:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1 defaultConfig:(id)arg2;
- (bool)setExtendedBorderDetection:(bool)arg1 withExtendedDistance:(int)arg2;

@end
