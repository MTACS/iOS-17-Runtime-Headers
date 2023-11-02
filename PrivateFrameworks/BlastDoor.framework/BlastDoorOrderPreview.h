
@interface BlastDoorOrderPreview : NSObject {
    void orderPreview;
}

@property (nonatomic, readonly) BlastDoorColor *backgroundColor;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorOrderPreview_OrderImage *headerImage;
@property (nonatomic, readonly) BlastDoorOrderPreview_OrderText *primaryText;
@property (nonatomic, readonly) BlastDoorOrderPreview_OrderText *secondaryText;
@property (nonatomic, readonly) BlastDoorOrderPreview_OrderText *tertiaryText;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)description;
- (id)headerImage;
- (id)init;
- (id)primaryText;
- (id)secondaryText;
- (id)tertiaryText;

@end
