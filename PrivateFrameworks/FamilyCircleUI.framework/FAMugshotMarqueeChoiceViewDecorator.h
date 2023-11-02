
@interface FAMugshotMarqueeChoiceViewDecorator : NSObject {
    RUIElement * _element;
    FAProfilePictureStore * _pictureStore;
}

@property (nonatomic, retain) RUIElement *element;
@property (nonatomic, retain) FAProfilePictureStore *pictureStore;

+ (bool)shouldProcessElement:(id)arg1;
+ (bool)shouldProcessObjectModel:(id)arg1;

- (void).cxx_destruct;
- (id)altDSIDsFromString:(id)arg1;
- (void)applyImage;
- (id)element;
- (id)imageWithAltDSIDs:(id)arg1 familyCircle:(id)arg2;
- (id)initWithElement:(id)arg1 pictureStore:(id)arg2;
- (id)initWithObjectModel:(id)arg1 pictureStore:(id)arg2;
- (id)pictureStore;
- (void)setElement:(id)arg1;
- (void)setPictureStore:(id)arg1;

@end
