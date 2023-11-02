
@interface SUUIBrickItem : NSObject {
    NSString * _accessibilityLabel;
    SUUIArtwork * _artwork;
    long long  _brickIdentifier;
    SUUICountdown * _countdown;
    SUUIEditorialComponent * _editorial;
    SUUILink * _link;
}

@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic, readonly) SUUIArtwork *artwork;
@property (nonatomic, readonly) long long brickIdentifier;
@property (nonatomic, readonly) SUUICountdown *countdown;
@property (nonatomic, readonly) SUUIEditorialComponent *editorial;
@property (nonatomic, readonly) SUUILink *link;

- (void).cxx_destruct;
- (void)_setLinkInfoWithLinkDictionary:(id)arg1 context:(id)arg2;
- (void)_setLinkItem:(id)arg1;
- (id)accessibilityLabel;
- (id)artwork;
- (long long)brickIdentifier;
- (id)countdown;
- (id)description;
- (id)editorial;
- (id)initWithBannerRoomContext:(id)arg1;
- (id)initWithComponentContext:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)link;

@end
