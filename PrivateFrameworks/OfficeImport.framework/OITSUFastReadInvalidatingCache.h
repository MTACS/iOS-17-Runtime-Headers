
@interface OITSUFastReadInvalidatingCache : NSObject {
    NSCondition * mCondition;
    id /* block */  mGenerator;
    bool  mIsGenerating;
    _Atomic long long  mReaderCount;
    bool  mReentrant;
    _Atomic id  mToDispose;
    _Atomic id  mValue;
}

- (void)dealloc;
- (id)initForReentrant:(bool)arg1 withGenerator:(id /* block */)arg2;
- (void)invalidate;
- (void)p_setValue:(id)arg1;
- (id)value;

@end
