
@interface MPExportableArtworkProperties : NSObject {
    NSArray * _artworkTemplateItems;
    long long  _mediaLibraryArtworkType;
    unsigned long long  _mediaType;
    NSString * _resolvedURLString;
}

@property (nonatomic, readonly) ICStoreArtworkInfo *artworkInfo;
@property (nonatomic, copy) NSArray *artworkTemplateItems;
@property (nonatomic, readonly) id jsonRepresentation;
@property (nonatomic) long long mediaLibraryArtworkType;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic, copy) NSString *resolvedURLString;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)artworkInfo;
- (id)artworkTemplateItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithJSONRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)jsonRepresentation;
- (long long)mediaLibraryArtworkType;
- (unsigned long long)mediaType;
- (id)resolvedURLString;
- (void)setArtworkTemplateItems:(id)arg1;
- (void)setMediaLibraryArtworkType:(long long)arg1;
- (void)setMediaType:(unsigned long long)arg1;
- (void)setResolvedURLString:(id)arg1;

@end
