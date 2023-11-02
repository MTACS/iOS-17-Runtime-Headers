
@interface EDAMAd : FATObject {
    NSString * _advertiserName;
    NSString * _destinationUrl;
    NSNumber * _displayFrequency;
    NSNumber * _displaySeconds;
    NSNumber * _height;
    NSString * _html;
    NSNumber * _id;
    NSData * _image;
    NSString * _imageMime;
    NSString * _imageUrl;
    NSNumber * _openInTrunk;
    NSNumber * _score;
    NSNumber * _width;
}

@property (nonatomic, retain) NSString *advertiserName;
@property (nonatomic, retain) NSString *destinationUrl;
@property (nonatomic, retain) NSNumber *displayFrequency;
@property (nonatomic, retain) NSNumber *displaySeconds;
@property (nonatomic, retain) NSNumber *height;
@property (nonatomic, retain) NSString *html;
@property (nonatomic, retain) NSNumber *id;
@property (nonatomic, retain) NSData *image;
@property (nonatomic, retain) NSString *imageMime;
@property (nonatomic, retain) NSString *imageUrl;
@property (nonatomic, retain) NSNumber *openInTrunk;
@property (nonatomic, retain) NSNumber *score;
@property (nonatomic, retain) NSNumber *width;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)advertiserName;
- (id)destinationUrl;
- (id)displayFrequency;
- (id)displaySeconds;
- (id)height;
- (id)html;
- (id)id;
- (id)image;
- (id)imageMime;
- (id)imageUrl;
- (id)openInTrunk;
- (id)score;
- (void)setAdvertiserName:(id)arg1;
- (void)setDestinationUrl:(id)arg1;
- (void)setDisplayFrequency:(id)arg1;
- (void)setDisplaySeconds:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setHtml:(id)arg1;
- (void)setId:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageMime:(id)arg1;
- (void)setImageUrl:(id)arg1;
- (void)setOpenInTrunk:(id)arg1;
- (void)setScore:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)width;

@end
