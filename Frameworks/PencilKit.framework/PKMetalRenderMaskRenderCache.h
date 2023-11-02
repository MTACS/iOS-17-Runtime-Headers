
@interface PKMetalRenderMaskRenderCache : PKMetalStrokeRenderCache {
    NSUUID * _strokeDataUUID;
}

@property (nonatomic, readonly) NSUUID *strokeDataUUID;

- (void).cxx_destruct;
- (id)initWithInk:(id)arg1 strokeDataUUID:(id)arg2;
- (id)strokeDataUUID;

@end
