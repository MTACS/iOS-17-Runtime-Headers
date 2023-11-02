
@interface TSDInstantAlphaBinaryBitmap : NSObject {
    char * mData;
    long long  mHeight;
    long long  mRowBytes;
    long long  mWidth;
}

- (void)dealloc;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2;
- (void)unionWithBitmap:(id)arg1;

@end
