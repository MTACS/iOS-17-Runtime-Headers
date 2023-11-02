
@interface PRUISIncomingCallPosterContext : NSObject <PRUISPosterEditingContext, PRUISPosterEditingContextInternal, PRUISPosterRenderingContext, PRUISPosterRenderingContextInternal> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _horizontalTitleBoundingRect;
    NSString * _imageAssetID;
    PRUISIncomingCallPosterContextNameVariations * _nameVariations;
    bool  _personalPoster;
    long long  _preferredNameStyle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _verticalTitleBoundingRect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } horizontalTitleBoundingRect;
@property (nonatomic, readonly, copy) NSString *imageAssetID;
@property (nonatomic, readonly) PRUISIncomingCallPosterContextNameVariations *nameVariations;
@property (getter=isPersonalPoster, nonatomic, readonly) bool personalPoster;
@property (nonatomic, readonly) long long preferredNameStyle;
@property (nonatomic, readonly, copy) NSString *preferredTitleString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } verticalTitleBoundingRect;

- (void).cxx_destruct;
- (void)applyContextToEditingSceneViewController:(id)arg1;
- (void)applyContextToScene:(id)arg1;
- (unsigned long long)hash;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })horizontalTitleBoundingRect;
- (id)identifierForSnapshotting;
- (id)identifierForSnapshottingWithNameStyle:(long long)arg1;
- (id)imageAssetID;
- (id)init;
- (id)initWithNameVariations:(id)arg1 preferredNameStyle:(long long)arg2 horizontalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 verticalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 imageAssetID:(id)arg5 personalPoster:(bool)arg6;
- (id)initWithTitleString:(id)arg1 horizontalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 verticalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 imageAssetID:(id)arg4 personalPoster:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isPersonalPoster;
- (id)nameVariations;
- (long long)preferredNameStyle;
- (id)preferredTitleString;
- (id)titleString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })verticalTitleBoundingRect;

@end
