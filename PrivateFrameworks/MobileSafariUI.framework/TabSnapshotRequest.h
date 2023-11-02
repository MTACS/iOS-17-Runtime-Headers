
@interface TabSnapshotRequest : NSObject {
    <NSObject><NSCopying> * _identifier;
    unsigned long long  _options;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _topBackdropHeight;
}

@property (nonatomic, readonly, copy) <NSObject><NSCopying> *identifier;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) double topBackdropHeight;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 topBackdropHeight:(double)arg2 options:(unsigned long long)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 topBackdropHeight:(double)arg2 options:(unsigned long long)arg3 identifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (struct CGSize { double x1; double x2; })size;
- (double)topBackdropHeight;

@end
