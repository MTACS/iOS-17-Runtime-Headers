
@interface MSVSegmentedCodingPackage : NSObject {
    Class  _archivedClass;
    NSMutableDictionary * _infoDictionary;
    bool  _needsInfoDictionaryUpdate;
    NSURL * _packageURL;
    NSMutableDictionary * _segmentEncoderMap;
}

@property (nonatomic, readonly) NSDictionary *allVersions;
@property (nonatomic, retain) Class archivedClass;
@property (nonatomic, retain) NSMutableDictionary *infoDictionary;
@property (nonatomic, copy) NSURL *packageURL;
@property (nonatomic, retain) NSMutableDictionary *segmentEncoderMap;

+ (id)packageTypeIdentifier;

- (void).cxx_destruct;
- (id)allVersions;
- (Class)archivedClass;
- (id)coderTypeForSegment:(id)arg1;
- (id)decodersWithError:(id*)arg1;
- (bool)deleteWithError:(id*)arg1;
- (id)encoderForSegment:(id)arg1 version:(long long)arg2;
- (id)infoDictionary;
- (id)initWithURL:(id)arg1;
- (id)packageURL;
- (void)reset;
- (bool)saveWithError:(id*)arg1;
- (id)segmentEncoderMap;
- (void)setArchivedClass:(Class)arg1;
- (void)setInfoDictionary:(id)arg1;
- (void)setNeedsInfoDictionaryUpdate;
- (void)setPackageURL:(id)arg1;
- (void)setSegmentEncoderMap:(id)arg1;
- (bool)writeWithError:(id*)arg1;

@end
