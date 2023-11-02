
@interface _IKDSEBoundItemsPrototypeBundleEntry : NSObject {
    unsigned long long  _prototypeIndex;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic) unsigned long long prototypeIndex;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (unsigned long long)prototypeIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setPrototypeIndex:(unsigned long long)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
