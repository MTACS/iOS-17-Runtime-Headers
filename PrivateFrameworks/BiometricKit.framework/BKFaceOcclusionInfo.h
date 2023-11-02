
@interface BKFaceOcclusionInfo : NSObject {
    bool  _hasFaceOcclusion;
}

@property (nonatomic, readonly) bool hasFaceOcclusion;

- (bool)hasFaceOcclusion;
- (id)initWithDictionary:(id)arg1;

@end
