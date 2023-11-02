
@interface CKOperationMMCSRequestOptions : NSObject <NSSecureCoding> {
    bool  _chunkingLibraryCorruptionMode;
    bool  _insufficientDiskSpaceMode;
    bool  _resumableContainerLimpMode;
}

@property bool chunkingLibraryCorruptionMode;
@property bool insufficientDiskSpaceMode;
@property bool resumableContainerLimpMode;

+ (bool)supportsSecureCoding;

- (bool)chunkingLibraryCorruptionMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)insufficientDiskSpaceMode;
- (bool)resumableContainerLimpMode;
- (void)setChunkingLibraryCorruptionMode:(bool)arg1;
- (void)setInsufficientDiskSpaceMode:(bool)arg1;
- (void)setResumableContainerLimpMode:(bool)arg1;

@end
