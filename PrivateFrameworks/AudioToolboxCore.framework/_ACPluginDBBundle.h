
@interface _ACPluginDBBundle : NSObject <NSSecureCoding> {
    struct AudioComponentVector { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> { 
            void *__value_; 
        } __end_cap_; 
        bool mSorted; 
    }  mBundleComponentVector;
    NSString * mFullPath;
    double  mInfoPlistModDate;
    double  mRsrcModDate;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 infoPlistModDate:(double)arg2 rsrcModDate:(double)arg3;
- (void)loadAllComponents:(void*)arg1;
- (void)scanWithPriority:(int)arg1 loadable:(bool)arg2 infoPlistPath:(id)arg3;

@end
