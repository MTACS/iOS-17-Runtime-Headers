
@interface SABinary : NSObject <NSCopying, SAJSONSerialization, SASerializable> {
    unsigned long long  _alreadyAttempted;
    unsigned int  _attemptedToGetBundleInfo;
    unsigned int  _attemptedToGetCodeSignInfo;
    NSString * _binaryVersion;
    NSString * _bundleIdentifier;
    NSString * _bundleShortVersion;
    NSString * _bundleVersion;
    NSString * _codesigningID;
    SASegment * _fakeEntireBinarySegment;
    bool  _foundPathViaBinaryLocator;
    unsigned int  _hadSymbolOwnerWhenLastSymbolicated;
    bool  _haveMoreInstructionsToSymbolicate;
    unsigned long long  _length;
    NSString * _name;
    unsigned long long  _optionsWhenLastSymbolicated;
    NSString * _path;
    NSMutableArray * _segments;
    unsigned int  _symbolOwnerWasDsymWhenLastSymbolicated;
    SACSSymbolOwnerWrapper * _symbolOwnerWrapper;
    NSString * _teamID;
    NSUUID * _uuid;
}

@property (readonly) NSString *binaryVersion;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleShortVersion;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *codesigningID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasTextExecSegment;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long length;
@property (readonly) NSString *name;
@property (readonly) NSString *path;
@property (readonly) NSArray *segments;
@property (readonly) Class superclass;
@property (readonly) NSString *teamID;
@property (readonly) unsigned long long textSegmentLength;
@property (readonly) NSUUID *uuid;

+ (void)addDsymPaths:(id)arg1;
+ (void)addPath:(id)arg1 forBinaryWithUUID:(id)arg2;
+ (void)addSymbolsFromTailspin:(id)arg1;
+ (id)binaryWithUUID:(id)arg1;
+ (id)binaryWithUUID:(id)arg1 absolutePath:(id)arg2;
+ (id)classDictionaryKey;
+ (void)clearCaches;
+ (void)clearCoreSymbolicationCaches;
+ (void)clearSymbolCaches;
+ (void)enableImmediateCleanupOfCSSymbolOwners;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;

- (void).cxx_destruct;
- (void)addPath:(id)arg1;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned char x3[16]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; union { unsigned char x_11_1_1; struct { unsigned int x_2_2_1 : 1; } x_11_1_2; } x11; unsigned short x12; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)binaryVersion;
- (id)bundleIdentifier;
- (id)bundleShortVersion;
- (id)bundleVersion;
- (bool)cacheSymbolOwnerWithOptions:(unsigned long long)arg1 pid:(int)arg2;
- (void)clearCoreSymbolicationCache;
- (void)clearSymbolCache;
- (id)codesigningID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)gatherInfoWithDataGatheringOptions:(unsigned long long)arg1 pid:(int)arg2;
- (bool)hasTextExecSegment;
- (id)initWithUUID:(id)arg1 path:(id)arg2;
- (id)instructionAtOffsetIntoBinary:(long long)arg1;
- (id)instructionAtOffsetIntoTextSegment:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)name;
- (id)path;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (id)segmentWithName:(id)arg1;
- (id)segments;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)symbolicateAllInstructionsWithOptions:(unsigned long long)arg1 pid:(int)arg2;
- (id)teamID;
- (unsigned long long)textSegmentLength;
- (id)uuid;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end
