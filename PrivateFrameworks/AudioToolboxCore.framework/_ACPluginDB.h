
@interface _ACPluginDB : NSObject <NSSecureCoding> {
    NSData * mCarbonComponentHash;
    bool  mDirty;
    NSObject<OS_dispatch_queue> * mDispatchQueue;
    struct function<void (AudioComponentVector &, AudioComponentVector &)>="__f_"{__value_func<void (AudioComponentVector &, AudioComponentVector &)>="__buf_"{type="__lx"[24C] {}  mNotificationCallback;
    struct function<void ()>="__f_"{__value_func<void ()>="__buf_"{type="__lx"[24C] {}  mScanHashCallback;
    NSMutableDictionary * mSearchDirectories;
}

+ (id)path;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)initialScanDirectory:(id)arg1 priority:(int)arg2 components:(void*)arg3;
- (struct AudioComponentVector { void *x1; void *x2; struct __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> { void *x_3_1_1; } x3; bool x4; })postInit:(bool)arg1;
- (void)writeIfDirty;

@end
