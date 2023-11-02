
@interface GKAvatarImageBrush : GKImageBrush <GKBrushIdentification> {
    long long  _dimension;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dimension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)dimension;
- (id)renderedImageIdentifier;
- (void)setDimension:(long long)arg1;

@end
