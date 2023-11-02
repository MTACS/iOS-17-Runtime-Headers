
@interface _PFIndexCacheOffset : NSObject {
    long long  _offset;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

- (id)description;

@end
