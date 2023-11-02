
@interface EDAMResourceAttributes : FATObject {
    NSNumber * _altitude;
    EDAMLazyMap * _applicationData;
    NSNumber * _attachment;
    NSString * _cameraMake;
    NSString * _cameraModel;
    NSNumber * _clientWillIndex;
    NSString * _fileName;
    NSNumber * _latitude;
    NSNumber * _longitude;
    NSString * _recoType;
    NSString * _sourceURL;
    NSNumber * _timestamp;
}

@property (nonatomic, retain) NSNumber *altitude;
@property (nonatomic, retain) EDAMLazyMap *applicationData;
@property (nonatomic, retain) NSNumber *attachment;
@property (nonatomic, retain) NSString *cameraMake;
@property (nonatomic, retain) NSString *cameraModel;
@property (nonatomic, retain) NSNumber *clientWillIndex;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSString *recoType;
@property (nonatomic, retain) NSString *sourceURL;
@property (nonatomic, retain) NSNumber *timestamp;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)altitude;
- (id)applicationData;
- (id)attachment;
- (id)cameraMake;
- (id)cameraModel;
- (id)clientWillIndex;
- (id)fileName;
- (id)latitude;
- (id)longitude;
- (id)recoType;
- (void)setAltitude:(id)arg1;
- (void)setApplicationData:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setCameraMake:(id)arg1;
- (void)setCameraModel:(id)arg1;
- (void)setClientWillIndex:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setRecoType:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)sourceURL;
- (id)timestamp;

@end
