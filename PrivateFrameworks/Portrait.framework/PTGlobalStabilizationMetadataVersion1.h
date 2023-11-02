
@interface PTGlobalStabilizationMetadataVersion1 : PTGlobalStabilizationMetadata {
    bool  _hasOriginalVideoDimensions;
    struct { 
        int width; 
        int height; 
    }  _originalVideoDimensions;
}

@property (readonly) bool hasOriginalVideoDimensions;
@property (nonatomic) struct { int x1; int x2; } originalVideoDimensions;

- (bool)hasOriginalVideoDimensions;
- (id)initWithData:(id)arg1;
- (id)initWithMinorVersion:(unsigned int)arg1;
- (struct { int x1; int x2; })originalVideoDimensions;
- (void)setOriginalVideoDimensions:(struct { int x1; int x2; })arg1;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)arg1;
- (bool)writeToData:(id)arg1 withOptions:(id)arg2;

@end
