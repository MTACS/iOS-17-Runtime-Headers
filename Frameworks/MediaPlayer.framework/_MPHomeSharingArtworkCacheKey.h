
@interface _MPHomeSharingArtworkCacheKey : NSObject {
    unsigned long long  _persistentID;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (unsigned long long)hash;
- (id)initWithPersistentID:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)persistentID;
- (struct CGSize { double x1; double x2; })size;

@end
