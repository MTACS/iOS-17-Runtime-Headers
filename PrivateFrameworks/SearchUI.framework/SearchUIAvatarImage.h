
@interface SearchUIAvatarImage : SearchUIImage {
    NSArray * _contactIdentifiers;
    NSString * _letters;
    bool  _onlyReturnFinalRepresentation;
    <CNCancelable> * _renderingToken;
}

@property (nonatomic, copy) NSArray *contactIdentifiers;
@property (nonatomic, retain) NSString *letters;
@property (nonatomic) bool onlyReturnFinalRepresentation;
@property (retain) <CNCancelable> *renderingToken;

+ (id)avatarImageRenderer;

- (void).cxx_destruct;
- (id)contactIdentifiers;
- (int)defaultCornerRoundingStyle;
- (id)initWithContactImage:(id)arg1;
- (id)initWithMonogramImage:(id)arg1;
- (id)letters;
- (void)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)onlyReturnFinalRepresentation;
- (id)renderingToken;
- (void)setContactIdentifiers:(id)arg1;
- (void)setDefaultSizeIfNecessary;
- (void)setLetters:(id)arg1;
- (void)setOnlyReturnFinalRepresentation:(bool)arg1;
- (void)setRenderingToken:(id)arg1;

@end
