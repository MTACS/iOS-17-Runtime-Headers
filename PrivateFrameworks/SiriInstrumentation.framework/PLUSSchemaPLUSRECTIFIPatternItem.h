
@interface PLUSSchemaPLUSRECTIFIPatternItem : SISchemaInstrumentationMessage {
    NSString * _cdmMatchingSpanLabel;
    struct { 
        unsigned int itemSource : 1; 
        unsigned int itemType : 1; 
        unsigned int relativeTimestampInMs : 1; 
    }  _has;
    bool  _hasCdmMatchingSpanLabel;
    bool  _hasItemDomainName;
    bool  _hasItemPayload;
    bool  _hasUufrSaidDialogIdentifier;
    NSString * _itemDomainName;
    NSString * _itemPayload;
    int  _itemSource;
    int  _itemType;
    unsigned long long  _relativeTimestampInMs;
    NSString * _uufrSaidDialogIdentifier;
    unsigned long long  _whichPatternitemcontent;
}

@property (nonatomic, copy) NSString *cdmMatchingSpanLabel;
@property (nonatomic) bool hasCdmMatchingSpanLabel;
@property (nonatomic) bool hasItemDomainName;
@property (nonatomic) bool hasItemPayload;
@property (nonatomic) bool hasItemSource;
@property (nonatomic) bool hasItemType;
@property (nonatomic) bool hasRelativeTimestampInMs;
@property (nonatomic) bool hasUufrSaidDialogIdentifier;
@property (nonatomic, copy) NSString *itemDomainName;
@property (nonatomic, copy) NSString *itemPayload;
@property (nonatomic) int itemSource;
@property (nonatomic) int itemType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long relativeTimestampInMs;
@property (nonatomic, copy) NSString *uufrSaidDialogIdentifier;
@property (nonatomic, readonly) unsigned long long whichPatternitemcontent;

- (void).cxx_destruct;
- (id)cdmMatchingSpanLabel;
- (void)deleteCdmMatchingSpanLabel;
- (void)deleteItemDomainName;
- (void)deleteItemPayload;
- (void)deleteItemSource;
- (void)deleteItemType;
- (void)deleteRelativeTimestampInMs;
- (void)deleteUufrSaidDialogIdentifier;
- (id)dictionaryRepresentation;
- (bool)hasCdmMatchingSpanLabel;
- (bool)hasItemDomainName;
- (bool)hasItemPayload;
- (bool)hasItemSource;
- (bool)hasItemType;
- (bool)hasRelativeTimestampInMs;
- (bool)hasUufrSaidDialogIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemDomainName;
- (id)itemPayload;
- (int)itemSource;
- (int)itemType;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (unsigned long long)relativeTimestampInMs;
- (void)setCdmMatchingSpanLabel:(id)arg1;
- (void)setHasCdmMatchingSpanLabel:(bool)arg1;
- (void)setHasItemDomainName:(bool)arg1;
- (void)setHasItemPayload:(bool)arg1;
- (void)setHasItemSource:(bool)arg1;
- (void)setHasItemType:(bool)arg1;
- (void)setHasRelativeTimestampInMs:(bool)arg1;
- (void)setHasUufrSaidDialogIdentifier:(bool)arg1;
- (void)setItemDomainName:(id)arg1;
- (void)setItemPayload:(id)arg1;
- (void)setItemSource:(int)arg1;
- (void)setItemType:(int)arg1;
- (void)setRelativeTimestampInMs:(unsigned long long)arg1;
- (void)setUufrSaidDialogIdentifier:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)uufrSaidDialogIdentifier;
- (unsigned long long)whichPatternitemcontent;
- (void)writeTo:(id)arg1;

@end
