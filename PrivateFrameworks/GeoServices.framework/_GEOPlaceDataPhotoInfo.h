
@interface _GEOPlaceDataPhotoInfo : NSObject <GEOMapItemPhotoInfo> {
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)arg1 width:(double)arg2 height:(double)arg3;
- (struct CGSize { double x1; double x2; })size;
- (id)url;

@end
