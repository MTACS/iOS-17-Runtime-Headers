
@interface SIServiceDeviceUploadInfo : SISchemaInstrumentationMessage {
    struct { 
        unsigned int ns_relative_to_boot : 1; 
    }  _has;
    bool  _hasRef_id;
    unsigned long long  _ns_relative_to_boot;
    NSString * _ref_id;
}

@property (nonatomic) bool hasNs_relative_to_boot;
@property (nonatomic) bool hasRef_id;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long ns_relative_to_boot;
@property (nonatomic, copy) NSString *ref_id;

- (void).cxx_destruct;
- (void)deleteNs_relative_to_boot;
- (void)deleteRef_id;
- (id)dictionaryRepresentation;
- (bool)hasNs_relative_to_boot;
- (bool)hasRef_id;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)ns_relative_to_boot;
- (bool)readFrom:(id)arg1;
- (id)ref_id;
- (void)setHasNs_relative_to_boot:(bool)arg1;
- (void)setHasRef_id:(bool)arg1;
- (void)setNs_relative_to_boot:(unsigned long long)arg1;
- (void)setRef_id:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
