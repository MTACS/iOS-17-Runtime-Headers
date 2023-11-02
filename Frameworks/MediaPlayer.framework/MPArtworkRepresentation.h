
@interface MPArtworkRepresentation : NSObject {
    UIImage * _image;
    bool  _imagePrepared;
    long long  _kind;
    struct CGSize { 
        double width; 
        double height; 
    }  _representationSize;
    id  _representationToken;
    AVAsset * _video;
    NSString * _visualIdenticalityStringRepresentation;
}

@property (nonatomic, retain) UIImage *image;
@property (getter=isImagePrepared, nonatomic) bool imagePrepared;
@property (nonatomic) long long kind;
@property (nonatomic) struct CGSize { double x1; double x2; } representationSize;
@property (nonatomic, retain) id representationToken;
@property (nonatomic, retain) AVAsset *video;
@property (nonatomic, readonly, copy) NSString *visualIdenticalityStringRepresentation;

+ (id)representationForVisualIdentity:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 image:(id)arg3;
+ (id)representationForVisualIdentity:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 video:(id)arg3;
+ (id)representationWithSize:(struct CGSize { double x1; double x2; })arg1 image:(id)arg2;
+ (id)representationWithSize:(struct CGSize { double x1; double x2; })arg1 video:(id)arg2;

- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)image;
- (bool)isImagePrepared;
- (long long)kind;
- (struct CGSize { double x1; double x2; })representationSize;
- (id)representationToken;
- (id)representationWithPreparedImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImagePrepared:(bool)arg1;
- (void)setKind:(long long)arg1;
- (void)setRepresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRepresentationToken:(id)arg1;
- (void)setVideo:(id)arg1;
- (id)video;
- (id)visualIdenticalityStringRepresentation;

@end
