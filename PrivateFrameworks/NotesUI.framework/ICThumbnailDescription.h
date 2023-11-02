
@interface ICThumbnailDescription : NSObject {
    NSSet * _associatedObjectIdentifiers;
    bool  _cached;
    ICThumbnailConfiguration * _configuration;
    NSDate * _creationDate;
    NSError * _error;
    double  _fetchDuration;
    UIImage * _image;
    unsigned long long  _imageScaling;
    long long  _thumbnailDecorationType;
}

@property (nonatomic, retain) NSSet *associatedObjectIdentifiers;
@property (getter=isCached, nonatomic) bool cached;
@property (nonatomic, readonly) ICThumbnailConfiguration *configuration;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) double fetchDuration;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic, readonly) long long preferredContentMode;
@property (nonatomic) long long thumbnailDecorationType;

- (void).cxx_destruct;
- (id)associatedObjectIdentifiers;
- (id)configuration;
- (id)creationDate;
- (id)error;
- (double)fetchDuration;
- (id)image;
- (unsigned long long)imageScaling;
- (id)initWithConfiguration:(id)arg1;
- (bool)isCached;
- (long long)preferredContentMode;
- (void)setAssociatedObjectIdentifiers:(id)arg1;
- (void)setCached:(bool)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFetchDuration:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (void)setThumbnailDecorationType:(long long)arg1;
- (long long)thumbnailDecorationType;

@end
