
@interface _GEOResourceManifestTileSetOverride : NSObject <NSSecureCoding> {
    NSURL * _baseURL;
    NSURL * _localizationURL;
    int  _scale;
    int  _size;
    int  _style;
    NSNumber * _version;
}

@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, copy) NSURL *localizationURL;
@property (nonatomic, readonly) int scale;
@property (nonatomic, readonly) int size;
@property (nonatomic, readonly) int style;
@property (nonatomic, copy) NSNumber *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)baseURL;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)localizationURL;
- (int)scale;
- (void)setBaseURL:(id)arg1;
- (void)setLocalizationURL:(id)arg1;
- (void)setVersion:(id)arg1;
- (int)size;
- (int)style;
- (id)version;

@end
