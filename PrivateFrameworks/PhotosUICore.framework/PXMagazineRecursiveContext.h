
@interface PXMagazineRecursiveContext : NSObject {
    PXNewMagazineRectArray * _fallbackRectArray;
    NSMutableArray * _generatedChunks;
    PXNewMagazineRectArray * _outRectArray;
}

@property (nonatomic, retain) PXNewMagazineRectArray *fallbackRectArray;
@property (nonatomic, retain) NSMutableArray *generatedChunks;
@property (nonatomic, retain) PXNewMagazineRectArray *outRectArray;

- (void).cxx_destruct;
- (id)fallbackRectArray;
- (id)generatedChunks;
- (id)outRectArray;
- (void)setFallbackRectArray:(id)arg1;
- (void)setGeneratedChunks:(id)arg1;
- (void)setOutRectArray:(id)arg1;

@end
