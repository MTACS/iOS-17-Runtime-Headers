
@interface TSDImageProvider : NSObject {
    TSUFlushingManager * mFlushingManager;
    TSPData * mImageData;
    int  mInterest;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  mInterestLock;
    int  mLoadState;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  mOwnerCount;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  mRetainCount;
}

@property (nonatomic, readonly) unsigned long long imageGamut;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)addInterest;
- (void)addOwner;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })dpiAdjustedNaturalSize;
- (void)drawImageInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)flush;
- (void)flushIfInterestLessThan:(int)arg1;
- (bool)hasFlushableContent;
- (void)i_commonInit;
- (id)imageData;
- (unsigned long long)imageGamut;
- (id)initWithImageData:(id)arg1;
- (int)interest;
- (bool)isError;
- (bool)isValid;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)ownerAccess;
- (oneway void)release;
- (void)removeInterest;
- (void)removeOwner;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setFlushingManager:(id)arg1;

@end
