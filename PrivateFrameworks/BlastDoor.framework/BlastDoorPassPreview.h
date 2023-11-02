
@interface BlastDoorPassPreview : NSObject {
    void passPreview;
}

@property (nonatomic, readonly) BlastDoorPassPreview_PassBackground *background;
@property (nonatomic, readonly) BlastDoorColor *backgroundColor;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorPassPreview_PassImage *headerImage;
@property (nonatomic, readonly) BlastDoorPassPreview_PassImage *icon;
@property (nonatomic, readonly) BlastDoorPassPreview_PassText *primaryText;
@property (nonatomic, readonly) BlastDoorPassPreview_PassText *secondaryText;
@property (nonatomic, readonly) BlastDoorPassPreview_PassText *tertiaryText;

- (void).cxx_destruct;
- (id)background;
- (id)backgroundColor;
- (id)description;
- (id)headerImage;
- (id)icon;
- (id)init;
- (id)primaryText;
- (id)secondaryText;
- (id)tertiaryText;

@end
