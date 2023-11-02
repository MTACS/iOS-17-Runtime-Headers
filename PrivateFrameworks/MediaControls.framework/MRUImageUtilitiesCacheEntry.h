
@interface MRUImageUtilitiesCacheEntry : NSObject {
    MSVTimer * _evictionTimer;
    struct CGSize { 
        double width; 
        double height; 
    }  _fittingSize;
    NSString * _identifier;
    UIImage * _image;
}

@property (nonatomic, retain) MSVTimer *evictionTimer;
@property (nonatomic) struct CGSize { double x1; double x2; } fittingSize;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (void)cancelEvictionTimer;
- (void)dealloc;
- (id)evictionTimer;
- (struct CGSize { double x1; double x2; })fittingSize;
- (id)identifier;
- (id)image;
- (void)setEvictionTimer:(id)arg1;
- (void)setFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)startEvictionTimer;

@end
