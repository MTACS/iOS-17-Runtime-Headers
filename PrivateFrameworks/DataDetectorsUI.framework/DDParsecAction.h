
@interface DDParsecAction : DDPreviewAction <DDParsecCollectionDelegate> {
    DDParsecCollectionViewController * _parsecViewController;
    bool  _previewMode;
}

+ (bool)isAvailable;

- (void).cxx_destruct;
- (id)createViewController;
- (void)interactionDidFinishAndRequiresDismissal:(bool)arg1;
- (int)interactionType;
- (id)localizedName;

@end
