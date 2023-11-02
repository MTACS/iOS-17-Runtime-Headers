
@interface _INPBSendMessageAttachment : PBCodable <NSCopying, NSSecureCoding, _INPBSendMessageAttachment> {
    _INPBFileDataAttachment * _audioMessageFile;
    _INPBURLValue * _audioMessageFileURL;
    bool  _currentLocation;
    _INPBFileDataAttachment * _file;
    _INPBURLValue * _fileURL;
    struct { }  _has;
    NSString * _phAssetId;
    _INPBURLValue * _sharedLink;
    _INPBURLValue * _speechDataURL;
    NSString * _typeIdentifier;
    unsigned long long  _whichDatasource;
}

@property (nonatomic, retain) _INPBFileDataAttachment *audioMessageFile;
@property (nonatomic, retain) _INPBURLValue *audioMessageFileURL;
@property (nonatomic) bool currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBFileDataAttachment *file;
@property (nonatomic, retain) _INPBURLValue *fileURL;
@property (nonatomic, readonly) bool hasAudioMessageFile;
@property (nonatomic, readonly) bool hasAudioMessageFileURL;
@property (nonatomic, readonly) bool hasCurrentLocation;
@property (nonatomic, readonly) bool hasFile;
@property (nonatomic, readonly) bool hasFileURL;
@property (nonatomic, readonly) bool hasPhAssetId;
@property (nonatomic, readonly) bool hasSharedLink;
@property (nonatomic, readonly) bool hasSpeechDataURL;
@property (nonatomic, readonly) bool hasTypeIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *phAssetId;
@property (nonatomic, retain) _INPBURLValue *sharedLink;
@property (nonatomic, retain) _INPBURLValue *speechDataURL;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *typeIdentifier;
@property (nonatomic, readonly) unsigned long long whichDatasource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audioMessageFile;
- (id)audioMessageFileURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)currentLocation;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)file;
- (id)fileURL;
- (bool)hasAudioMessageFile;
- (bool)hasAudioMessageFileURL;
- (bool)hasCurrentLocation;
- (bool)hasFile;
- (bool)hasFileURL;
- (bool)hasPhAssetId;
- (bool)hasSharedLink;
- (bool)hasSpeechDataURL;
- (bool)hasTypeIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)phAssetId;
- (bool)readFrom:(id)arg1;
- (void)setAudioMessageFile:(id)arg1;
- (void)setAudioMessageFileURL:(id)arg1;
- (void)setCurrentLocation:(bool)arg1;
- (void)setFile:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setPhAssetId:(id)arg1;
- (void)setSharedLink:(id)arg1;
- (void)setSpeechDataURL:(id)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (id)sharedLink;
- (id)speechDataURL;
- (id)typeIdentifier;
- (unsigned long long)whichDatasource;
- (void)writeTo:(id)arg1;

@end
