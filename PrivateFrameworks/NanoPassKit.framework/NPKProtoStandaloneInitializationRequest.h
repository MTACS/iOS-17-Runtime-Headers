
@interface NPKProtoStandaloneInitializationRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int useSimulatedFlowController : 1; 
    }  _has;
    NPKProtoStandaloneImageSize * _passImageSize;
    NPKProtoStandaloneImageSize * _passThumbnailImageSize;
    NPKProtoStandaloneRequestHeader * _requestHeader;
    bool  _useSimulatedFlowController;
    NSString * _userLanguageCode;
}

@property (nonatomic, readonly) bool hasPassImageSize;
@property (nonatomic, readonly) bool hasPassThumbnailImageSize;
@property (nonatomic) bool hasUseSimulatedFlowController;
@property (nonatomic, readonly) bool hasUserLanguageCode;
@property (nonatomic, retain) NPKProtoStandaloneImageSize *passImageSize;
@property (nonatomic, retain) NPKProtoStandaloneImageSize *passThumbnailImageSize;
@property (nonatomic, retain) NPKProtoStandaloneRequestHeader *requestHeader;
@property (nonatomic) bool useSimulatedFlowController;
@property (nonatomic, retain) NSString *userLanguageCode;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPassImageSize;
- (bool)hasPassThumbnailImageSize;
- (bool)hasUseSimulatedFlowController;
- (bool)hasUserLanguageCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passImageSize;
- (id)passThumbnailImageSize;
- (bool)readFrom:(id)arg1;
- (id)requestHeader;
- (void)setHasUseSimulatedFlowController:(bool)arg1;
- (void)setPassImageSize:(id)arg1;
- (void)setPassThumbnailImageSize:(id)arg1;
- (void)setRequestHeader:(id)arg1;
- (void)setUseSimulatedFlowController:(bool)arg1;
- (void)setUserLanguageCode:(id)arg1;
- (bool)useSimulatedFlowController;
- (id)userLanguageCode;
- (void)writeTo:(id)arg1;

@end
