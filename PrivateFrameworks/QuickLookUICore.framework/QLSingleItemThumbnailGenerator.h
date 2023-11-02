
@interface QLSingleItemThumbnailGenerator : NSObject <NSSecureCoding, QLItemThumbnailGeneratorProtocolInternal> {
    bool  _isRepresentative;
    QLItem * _item;
    QLItemThumbnailGenerator * _thumbnailGenerator;
    QLThumbnailRepresentation * _thumbnailRepresentation;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
    QLThumbnailVersion * _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) QLItem *item;
@property (readonly) Class superclass;
@property (nonatomic, retain) QLItemThumbnailGenerator *thumbnailGenerator;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_generateUncachedThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(unsigned long long)arg2 thumbnailVersion:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_handleThumbnailGenerationFinishedWithThumbnailRepresentation:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 version:(id)arg3 clientCompletionBlock:(id /* block */)arg4;
- (void)_thumbnailVersionForItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)generateThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 completionBlock:(id /* block */)arg2;
- (void)generateThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (id)genericIconWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void)setThumbnailGenerator:(id)arg1;
- (id)thumbnailGenerator;

@end
