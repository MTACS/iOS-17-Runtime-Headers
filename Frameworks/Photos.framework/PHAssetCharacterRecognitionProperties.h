
@interface PHAssetCharacterRecognitionProperties : PHAssetPropertySet {
    NSDate * _adjustmentVersion;
    long long  _algorithmVersion;
    NSData * _characterRecognitionData;
    NSData * _machineReadableCodeData;
}

@property (nonatomic, readonly) NSDate *adjustmentVersion;
@property (nonatomic, readonly) long long algorithmVersion;
@property (nonatomic, readonly) NSData *characterRecognitionData;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSData *machineReadableCodeData;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)adjustmentVersion;
- (long long)algorithmVersion;
- (id)characterRecognitionData;
- (id)data;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)machineReadableCodeData;

@end
