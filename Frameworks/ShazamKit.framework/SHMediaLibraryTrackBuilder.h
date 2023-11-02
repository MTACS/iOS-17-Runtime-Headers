
@interface SHMediaLibraryTrackBuilder : NSObject {
    NSURL * _artworkURL;
    NSDate * _creationDate;
    NSSet * _labels;
    CLLocation * _location;
    NSString * _providerIdentifier;
    NSString * _providerName;
    NSString * _recognitionIdentifier;
    SHShazamKey * _shazamKey;
    NSURL * _shazamURL;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) NSURL *artworkURL;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSSet *labels;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, copy) NSString *providerIdentifier;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, copy) NSString *recognitionIdentifier;
@property (nonatomic, retain) SHShazamKey *shazamKey;
@property (nonatomic, retain) NSURL *shazamURL;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)artworkURL;
- (id)creationDate;
- (id)initWithCreationDate:(id)arg1;
- (id)labels;
- (id)location;
- (id)providerIdentifier;
- (id)providerName;
- (id)recognitionIdentifier;
- (void)setArtworkURL:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setProviderIdentifier:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setRecognitionIdentifier:(id)arg1;
- (void)setShazamKey:(id)arg1;
- (void)setShazamURL:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)shazamKey;
- (id)shazamURL;
- (id)subtitle;
- (id)title;

@end
