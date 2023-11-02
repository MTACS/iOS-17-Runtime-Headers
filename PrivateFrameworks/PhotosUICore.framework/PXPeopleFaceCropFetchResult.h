
@interface PXPeopleFaceCropFetchResult : NSObject {
    NSManagedObjectID * _assetObjectID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceRect;
    UIImage * _image;
    bool  _isCropped;
    bool  _isDegraded;
    PXPeopleFaceCropFetchOptions * _options;
}

@property (nonatomic, readonly) NSManagedObjectID *assetObjectID;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceRect;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) bool isCropped;
@property (nonatomic, readonly) bool isDegraded;
@property (nonatomic, readonly) PXPeopleFaceCropFetchOptions *options;

- (void).cxx_destruct;
- (id)assetObjectID;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRect;
- (id)image;
- (id)initWithImage:(id)arg1 assetObjectID:(id)arg2 faceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 isCropped:(bool)arg4 isDegraded:(bool)arg5 options:(id)arg6;
- (bool)isCropped;
- (bool)isDegraded;
- (id)options;

@end
