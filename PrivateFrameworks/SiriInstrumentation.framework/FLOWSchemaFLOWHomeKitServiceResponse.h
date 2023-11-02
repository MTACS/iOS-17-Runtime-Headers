
@interface FLOWSchemaFLOWHomeKitServiceResponse : SISchemaInstrumentationMessage {
    struct { 
        unsigned int homeKitServiceType : 1; 
        unsigned int numServicesCompleted : 1; 
        unsigned int numServicesFailed : 1; 
    }  _has;
    int  _homeKitServiceType;
    int  _numServicesCompleted;
    int  _numServicesFailed;
}

@property (nonatomic) bool hasHomeKitServiceType;
@property (nonatomic) bool hasNumServicesCompleted;
@property (nonatomic) bool hasNumServicesFailed;
@property (nonatomic) int homeKitServiceType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int numServicesCompleted;
@property (nonatomic) int numServicesFailed;

- (void)deleteHomeKitServiceType;
- (void)deleteNumServicesCompleted;
- (void)deleteNumServicesFailed;
- (id)dictionaryRepresentation;
- (bool)hasHomeKitServiceType;
- (bool)hasNumServicesCompleted;
- (bool)hasNumServicesFailed;
- (unsigned long long)hash;
- (int)homeKitServiceType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)numServicesCompleted;
- (int)numServicesFailed;
- (bool)readFrom:(id)arg1;
- (void)setHasHomeKitServiceType:(bool)arg1;
- (void)setHasNumServicesCompleted:(bool)arg1;
- (void)setHasNumServicesFailed:(bool)arg1;
- (void)setHomeKitServiceType:(int)arg1;
- (void)setNumServicesCompleted:(int)arg1;
- (void)setNumServicesFailed:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
