
@interface _NSTextStorageSideData : NSObject {
    id  _delegate;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _lazyFixRange;
}

- (void)dealloc;

@end
