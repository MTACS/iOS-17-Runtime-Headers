
@interface TSDImageResamplingOperation : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  mDesiredSize;
    NSString * mDisplayName;
    TSDImageProvider * mImageProvider;
    struct CGPath { } * mMaskingPath;
    TSPObjectContext * mObjectContext;
}

@property (nonatomic) struct CGSize { double x1; double x2; } desiredSize;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) TSDImageProvider *imageProvider;
@property (nonatomic) struct CGPath { }*maskingPath;
@property (nonatomic, retain) TSPObjectContext *objectContext;

- (void)dealloc;
- (struct CGSize { double x1; double x2; })desiredSize;
- (id)displayName;
- (id)imageProvider;
- (id)init;
- (id)initWithImageProvider:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGPath { }*)maskingPath;
- (id)objectContext;
- (id)performResampleOperationWithResampleOptions:(unsigned long long)arg1 bitmapContextOptions:(unsigned long long)arg2;
- (void)setDesiredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDisplayName:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setMaskingPath:(struct CGPath { }*)arg1;
- (void)setObjectContext:(id)arg1;

@end
