
@interface PBFGalleryOptions : NSObject <NSCopying> {
    NSNumber * _modeSemanticTypeToCreate;
    NSString * _modeSymbolImageName;
    ATXFaceGalleryItem * _suggestedGalleryItem;
}

@property (nonatomic, retain) NSNumber *modeSemanticTypeToCreate;
@property (nonatomic, copy) NSString *modeSymbolImageName;
@property (nonatomic, retain) ATXFaceGalleryItem *suggestedGalleryItem;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)modeSemanticTypeToCreate;
- (id)modeSymbolImageName;
- (void)setModeSemanticTypeToCreate:(id)arg1;
- (void)setModeSymbolImageName:(id)arg1;
- (void)setSuggestedGalleryItem:(id)arg1;
- (id)suggestedGalleryItem;

@end
