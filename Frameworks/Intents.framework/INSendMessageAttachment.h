
@interface INSendMessageAttachment : NSObject <INEnumerable, INJSONSerializable> {
    INFile * _audioMessageFile;
    bool  _currentLocation;
    INFile * _file;
    NSString * _phAssetId;
    NSURL * _sharedLink;
    NSURL * _speechDataURL;
}

@property (nonatomic, readonly, copy) INFile *audioMessageFile;
@property (nonatomic, readonly) bool currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INFile *file;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHAsset *phAsset;
@property (nonatomic, readonly, copy) NSString *phAssetId;
@property (nonatomic, readonly, copy) NSURL *sharedLink;
@property (nonatomic, readonly, copy) NSURL *speechDataURL;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (id)attachmentWithAudioMessageFile:(id)arg1;
+ (id)attachmentWithCurrentLocation;
+ (id)attachmentWithFile:(id)arg1;
+ (id)attachmentWithPHAsset:(id)arg1;
+ (id)attachmentWithPHAssetId:(id)arg1;
+ (id)attachmentWithSharedLink:(id)arg1;
+ (id)attachmentWithSpeechDataURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithCurrentLocation:(bool)arg1 file:(id)arg2 speechDataURL:(id)arg3 audioMessageFile:(id)arg4 sharedLink:(id)arg5 phAssetId:(id)arg6;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(id /* block */)arg2;
- (id)audioMessageFile;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)currentLocation;
- (void)encodeWithCoder:(id)arg1;
- (id)file;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)phAsset;
- (id)phAssetId;
- (id)sharedLink;
- (id)speechDataURL;

@end
