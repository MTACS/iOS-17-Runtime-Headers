
@interface BWDeferredIntermediate : NSObject <NSSecureCoding> {
    NSURL * _URL;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _cv;
    bool  _dirty;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    bool  _prefetching;
    NSString * _tag;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *tag;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)URL;
- (id)_shortString;
- (id)archive:(int*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchAndRetain:(int*)arg1;
- (int)flush;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1 URL:(id)arg2;
- (int)setURL:(id)arg1 prefetchQueue:(id)arg2;
- (id)tag;

@end
