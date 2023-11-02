
@interface CLPInstSchemaCLPCDMReplayTaskStarted : SISchemaInstrumentationMessage {
    NSArray * _availableSiriAssets;
    NSArray * _habitualUsages;
    struct { 
        unsigned int replayType : 1; 
    }  _has;
    bool  _hasPluginTaskAsset;
    SISchemaAsset * _pluginTaskAsset;
    int  _replayType;
}

@property (nonatomic, copy) NSArray *availableSiriAssets;
@property (nonatomic, copy) NSArray *habitualUsages;
@property (nonatomic) bool hasPluginTaskAsset;
@property (nonatomic) bool hasReplayType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaAsset *pluginTaskAsset;
@property (nonatomic) int replayType;

- (void).cxx_destruct;
- (void)addAvailableSiriAssets:(id)arg1;
- (void)addHabitualUsage:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)availableSiriAssets;
- (id)availableSiriAssetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)availableSiriAssetsCount;
- (void)clearAvailableSiriAssets;
- (void)clearHabitualUsage;
- (void)deleteAvailableSiriAssets;
- (void)deleteHabitualUsage;
- (void)deletePluginTaskAsset;
- (void)deleteReplayType;
- (id)dictionaryRepresentation;
- (id)habitualUsageAtIndex:(unsigned long long)arg1;
- (unsigned long long)habitualUsageCount;
- (id)habitualUsages;
- (bool)hasPluginTaskAsset;
- (bool)hasReplayType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)pluginTaskAsset;
- (bool)readFrom:(id)arg1;
- (int)replayType;
- (void)setAvailableSiriAssets:(id)arg1;
- (void)setHabitualUsages:(id)arg1;
- (void)setHasPluginTaskAsset:(bool)arg1;
- (void)setHasReplayType:(bool)arg1;
- (void)setPluginTaskAsset:(id)arg1;
- (void)setReplayType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
