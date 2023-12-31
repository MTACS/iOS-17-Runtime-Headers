
@interface OABReaderState : NSObject {
    ESDContainer * mBstoreContainerHolder;
    Class  mClient;
    <OADColorPalette> * mColorPalette;
    NSMutableDictionary * mEshContentIdMap;
    NSMutableArray * mGroupStack;
    NSMutableDictionary * mShapeIdMap;
}

@property (nonatomic, retain) ESDContainer *bstoreContainerHolder;

- (void).cxx_destruct;
- (id)bstoreContainerHolder;
- (Class)client;
- (id)colorPalette;
- (id)contentObjectForId:(int)arg1;
- (id)drawableForShapeId:(int)arg1;
- (int)groupDepth;
- (id)groupStackReference;
- (id)init;
- (id)initWithClient:(Class)arg1;
- (bool)isInsideGroup;
- (id)peekGroup;
- (id)popGroup;
- (void)pushGroup:(id)arg1;
- (void)resetForNewDrawing;
- (void)setBstoreContainerHolder:(id)arg1;
- (void)setColorPalette:(id)arg1;
- (void)setContentObject:(id)arg1 forId:(int)arg2;
- (void)setDrawable:(id)arg1 forShapeId:(unsigned int)arg2;
- (bool)useXmlBlobs;
- (id)xmlDrawingState;

@end
