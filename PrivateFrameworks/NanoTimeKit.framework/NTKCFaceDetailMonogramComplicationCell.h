
@interface NTKCFaceDetailMonogramComplicationCell : NTKCFaceDetailToggleCell {
    NSString * _slot;
}

@property (nonatomic, readonly) NSString *slot;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithSlot:(id)arg1 inFace:(id)arg2;
- (id)slot;

@end
