
@interface GEOPictureItemContainer : NSObject <GEOPictureItemContainer> {
    bool  _allowFullScreenPhoto;
    NSArray * _pictureItems;
}

@property (nonatomic, readonly) bool allowFullScreenPhoto;
@property (nonatomic, readonly) NSArray *pictureItems;

- (void).cxx_destruct;
- (bool)allowFullScreenPhoto;
- (id)init;
- (id)initWithPictureItemContainer:(id)arg1;
- (id)initWithPictureItems:(id)arg1 allowFullScreenPhoto:(bool)arg2;
- (id)pictureItems;

@end
