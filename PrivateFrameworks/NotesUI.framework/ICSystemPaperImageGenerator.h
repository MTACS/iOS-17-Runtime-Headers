
@interface ICSystemPaperImageGenerator : NSObject {
    bool  _sixChannelBlendingEnabled;
}

@property (nonatomic, readonly) bool hasDeepLink;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } paperContentBounds;
@property (getter=isSixChannelBlendingEnabled, nonatomic) bool sixChannelBlendingEnabled;

+ (id)imageGeneratorWithPaperAttachment:(id)arg1;
+ (id)imageGeneratorWithPaperAttachment:(id)arg1 useActivePaper:(bool)arg2;

- (bool)drawPaperInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)hasDeepLink;
- (void)imageWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 completion:(id /* block */)arg2;
- (id)imageWithFullResolution:(bool)arg1 inverted:(bool)arg2;
- (id)init;
- (id)initWithPaperAttachment:(id)arg1;
- (id)initWithPaperAttachment:(id)arg1 useActivePaper:(bool)arg2;
- (bool)isSixChannelBlendingEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paperContentBounds;
- (void)setSixChannelBlendingEnabled:(bool)arg1;
- (bool)validatePaperBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
