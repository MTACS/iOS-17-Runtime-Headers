
@interface PHImportDuplicateInfo : NSObject {
    NSMutableDictionary * _info;
}

@property (nonatomic, retain) NSDate *alternateImportImageDate;
@property (nonatomic, readonly) NSString *avchdFingerprint;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly) NSString *fingerprint;
@property (nonatomic, readonly) bool hasVideoComplement;
@property (nonatomic, readonly) NSDate *imageDate;
@property (nonatomic, retain) NSMutableDictionary *info;
@property (nonatomic, readonly) bool isInTrash;
@property (nonatomic, readonly) double timezoneOffset;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)alternateImportImageDate;
- (id)avchdFingerprint;
- (id)description;
- (id)fileName;
- (id)fileSize;
- (id)fingerprint;
- (bool)hasVideoComplement;
- (id)imageDate;
- (id)info;
- (id)initWithAssetInfo:(id)arg1;
- (bool)isInTrash;
- (bool)isLegacy;
- (id)objectID;
- (id)originatingAssetIdentifier;
- (void)setAlternateImportImageDate:(id)arg1;
- (void)setInfo:(id)arg1;
- (double)timezoneOffset;
- (id)uuid;

@end
