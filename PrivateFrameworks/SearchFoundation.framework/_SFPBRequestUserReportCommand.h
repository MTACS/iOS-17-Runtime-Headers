
@interface _SFPBRequestUserReportCommand : PBCodable <NSSecureCoding, _SFPBRequestUserReportCommand> {
    _SFPBUserReportRequest * _userReportRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBUserReportRequest *userReportRequest;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setUserReportRequest:(id)arg1;
- (id)userReportRequest;
- (void)writeTo:(id)arg1;

@end
