
@interface AVAssetVariantAudioAttributes : NSObject {
    FigAlternateObjC * _figAlternateObjC;
    struct OpaqueFigSimpleMutex { } * _mutex;
    NSMutableDictionary * _renditionSpecificAttributesForMediaSelection;
}

@property (nonatomic, readonly) NSArray *formatIDs;

- (void)dealloc;
- (id)description;
- (id)formatIDs;
- (id)initWithFigAlternateObjC:(id)arg1;
- (id)renditionSpecificAttributesForMediaOption:(id)arg1;

@end
