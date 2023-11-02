
@interface VUIExtrasInfo : NSObject <NSCopying> {
    NSDictionary * _extrasDict;
}

@property (nonatomic, retain) NSString *actionParams;
@property (nonatomic, readonly) NSString *adamID;
@property (nonatomic, readonly) NSNumber *contentRating;
@property (nonatomic, readonly) NSString *extrasURLString;
@property (nonatomic, readonly) bool isEntitledToPlay;
@property (nonatomic, readonly) bool isLightTheme;
@property (nonatomic, readonly) NSString *loadingImage;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *previewURLString;
@property (nonatomic, readonly) NSURL *tvAppDeeplinkURL;

- (void).cxx_destruct;
- (id)actionParams;
- (id)adamID;
- (id)contentRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)extrasURLString;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMediaItem:(id)arg1;
- (bool)isEntitledToPlay;
- (bool)isLightTheme;
- (id)loadingImage;
- (id)name;
- (id)previewURLString;
- (void)setActionParams:(id)arg1;
- (id)tvAppDeeplinkURL;

@end
