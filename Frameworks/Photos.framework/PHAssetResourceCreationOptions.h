
@interface PHAssetResourceCreationOptions : NSObject <NSCopying> {
    NSDate * _alternateImportImageDate;
    int  _burstPickType;
    NSString * _forcePairingIdentifier;
    NSString * _originalFilename;
    bool  _shouldIngestInPlace;
    bool  _shouldMoveFile;
    NSString * _uniformTypeIdentifier;
}

@property (nonatomic, retain) NSDate *alternateImportImageDate;
@property (nonatomic) int burstPickType;
@property (nonatomic, retain) NSString *forcePairingIdentifier;
@property (nonatomic, copy) NSString *originalFilename;
@property (nonatomic) bool shouldIngestInPlace;
@property (nonatomic) bool shouldMoveFile;
@property (nonatomic, copy) NSString *uniformTypeIdentifier;

- (void).cxx_destruct;
- (id)alternateImportImageDate;
- (int)burstPickType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)ensureOptionsAreCompleteForURL:(id)arg1;
- (id)forcePairingIdentifier;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)originalFilename;
- (id)propertyListRepresentation;
- (void)setAlternateImportImageDate:(id)arg1;
- (void)setBurstPickType:(int)arg1;
- (void)setForcePairingIdentifier:(id)arg1;
- (void)setOriginalFilename:(id)arg1;
- (void)setShouldIngestInPlace:(bool)arg1;
- (void)setShouldMoveFile:(bool)arg1;
- (void)setUniformTypeIdentifier:(id)arg1;
- (bool)shouldIngestInPlace;
- (bool)shouldMoveFile;
- (id)uniformTypeIdentifier;

@end
