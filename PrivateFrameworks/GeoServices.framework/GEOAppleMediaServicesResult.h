
@interface GEOAppleMediaServicesResult : NSObject <MUAppLockupViewModel, NSSecureCoding> {
    NSString * _artistName;
    NSURL * _artworkURL;
    NSString * _classType;
    NSString * _displayName;
    double  _duration;
    NSString * _editorialSubtitle;
    int  _episodeNumber;
    NSString * _iOSBundleIdentifier;
    NSString * _identifier;
    long long  _mediaType;
    int  _ratingsCount;
    float  _ratingsValue;
    NSString * _shortName;
    NSString * _subtitle;
    NSArray * _transitModes;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *actionButtonText;
@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, retain) NSURL *artworkURL;
@property (nonatomic, readonly) NSString *classType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *editorialSubtitle;
@property (nonatomic, readonly) int episodeNumber;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *iOSBundleIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic) int ratingsCount;
@property (nonatomic) float ratingsValue;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) NSString *subtitleText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *titleText;
@property (nonatomic, readonly) NSArray *transitModes;
@property (nonatomic, retain) NSURL *url;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_artworkDictionaryFromResponseDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artistName;
- (id)artworkURL;
- (id)classType;
- (id)displayName;
- (double)duration;
- (id)editorialSubtitle;
- (void)encodeWithCoder:(id)arg1;
- (int)episodeNumber;
- (id)iOSBundleIdentifier;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 mediaType:(long long)arg2 displayName:(id)arg3 shortName:(id)arg4 artistName:(id)arg5 url:(id)arg6 subtitle:(id)arg7 editorialSubtitle:(id)arg8 iOSBundleIdentifier:(id)arg9 artworkURL:(id)arg10 ratingsCount:(int)arg11 ratingsValue:(float)arg12 transitModes:(id)arg13 classType:(id)arg14 episodeNumber:(int)arg15 duration:(double)arg16;
- (id)initWithResponseDictionary:(id)arg1 mediaType:(long long)arg2 artworkSize:(struct CGSize { double x1; double x2; })arg3 screenScale:(double)arg4;
- (bool)isAppInstalled;
- (long long)mediaType;
- (int)ratingsCount;
- (float)ratingsValue;
- (void)setArtistName:(id)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIOSBundleIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRatingsCount:(int)arg1;
- (void)setRatingsValue:(float)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)shortName;
- (id)subtitle;
- (id)transitModes;
- (id)url;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (id)actionButtonText;
- (bool)isInstalled;
- (void)loadAppArtworkWithCompletion:(id /* block */)arg1;
- (id)subtitleText;
- (id)titleText;

@end
