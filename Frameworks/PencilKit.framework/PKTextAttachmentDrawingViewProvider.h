
@interface PKTextAttachmentDrawingViewProvider : NSTextAttachmentViewProvider {
    <NSTextLocation> * _updatedLocationForRecycledViewProvider;
}

@property (nonatomic, retain) <NSTextLocation> *updatedLocationForRecycledViewProvider;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

+ (Class)drawingClassForFileType:(id)arg1;
+ (Class)drawingViewClassForDrawingClass:(Class)arg1;
+ (bool)isSystemNoteTakingEnabled;
+ (void)registerViewProviderClassIfNecessary;
+ (Class)tiledViewClassForDrawingClass:(Class)arg1;

- (void).cxx_destruct;
- (void)loadView;
- (id)location;
- (void)setLocation:(id)arg1;
- (void)setUpdatedLocationForRecycledViewProvider:(id)arg1;
- (id)updatedLocationForRecycledViewProvider;

// Image: /System/Library/PrivateFrameworks/PaperKit.framework/PaperKit

+ (Class)drawingViewClassForPaper;
+ (Class)inlineDrawingTiledViewClassForPaper;
+ (Class)inlineDrawingViewClassForPaper;
+ (Class)tiledViewClassForPaper;

@end
