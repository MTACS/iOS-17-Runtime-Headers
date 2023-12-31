
@interface TSDMediaInfo : TSDStyledInfo {
    struct { 
        unsigned int isPlaceholder : 1; 
        unsigned int wasMediaReplaced : 1; 
    }  mFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  mOriginalSize;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultOriginalSize;
@property (nonatomic) unsigned int flags;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic, readonly) NSString *mediaDisplayName;
@property (nonatomic, readonly) NSString *mediaFileType;
@property (nonatomic) struct CGSize { double x1; double x2; } originalSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } rawDataSize;
@property (nonatomic) bool wasMediaReplaced;

- (struct CGPoint { double x1; double x2; })centerForReplacingWithNewMedia;
- (id)copyWithContext:(id)arg1;
- (struct CGSize { double x1; double x2; })defaultOriginalSize;
- (unsigned int)flags;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (bool)isPlaceholder;
- (id)mediaDisplayName;
- (id)mediaFileType;
- (struct CGSize { double x1; double x2; })originalSize;
- (struct CGSize { double x1; double x2; })rawDataSize;
- (void)setFlags:(unsigned int)arg1;
- (void)setGeometry:(id)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setOriginalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWasMediaReplaced:(bool)arg1;
- (void)takePropertiesFromReplacedMediaInfo:(id)arg1;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (bool)wasMediaReplaced;

@end
