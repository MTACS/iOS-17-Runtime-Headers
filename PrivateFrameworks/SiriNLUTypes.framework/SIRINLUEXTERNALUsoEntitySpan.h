
@interface SIRINLUEXTERNALUsoEntitySpan : PBCodable <NSCopying> {
    NSMutableArray * _alternatives;
    SIRICOMMONUInt32Value * _endIndex;
    struct { 
        unsigned int nodeIndex : 1; 
        unsigned int sourceComponent : 1; 
    }  _has;
    SIRICOMMONStringValue * _label;
    SIRINLUEXTERNALMatchInfo * _matchInfo;
    unsigned int  _nodeIndex;
    SIRICOMMONStringValue * _originAppId;
    SIRICOMMONStringValue * _originEntityId;
    SIRINLUEXTERNALPayloadAttachmentInfo * _payloadAttachmentInfo;
    NSMutableArray * _properties;
    int  _sourceComponent;
    SIRICOMMONUInt32Value * _startIndex;
}

@property (nonatomic, retain) NSMutableArray *alternatives;
@property (nonatomic, retain) SIRICOMMONUInt32Value *endIndex;
@property (nonatomic, readonly) bool hasEndIndex;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic, readonly) bool hasMatchInfo;
@property (nonatomic) bool hasNodeIndex;
@property (nonatomic, readonly) bool hasOriginAppId;
@property (nonatomic, readonly) bool hasOriginEntityId;
@property (nonatomic, readonly) bool hasPayloadAttachmentInfo;
@property (nonatomic) bool hasSourceComponent;
@property (nonatomic, readonly) bool hasStartIndex;
@property (nonatomic, retain) SIRICOMMONStringValue *label;
@property (nonatomic, retain) SIRINLUEXTERNALMatchInfo *matchInfo;
@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic, retain) SIRICOMMONStringValue *originAppId;
@property (nonatomic, retain) SIRICOMMONStringValue *originEntityId;
@property (nonatomic, retain) SIRINLUEXTERNALPayloadAttachmentInfo *payloadAttachmentInfo;
@property (nonatomic, retain) NSMutableArray *properties;
@property (nonatomic) int sourceComponent;
@property (nonatomic, retain) SIRICOMMONUInt32Value *startIndex;

+ (Class)alternativesType;
+ (Class)propertiesType;

- (void).cxx_destruct;
- (int)StringAsSourceComponent:(id)arg1;
- (void)addAlternatives:(id)arg1;
- (void)addProperties:(id)arg1;
- (id)alternatives;
- (id)alternativesAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternativesCount;
- (void)clearAlternatives;
- (void)clearProperties;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endIndex;
- (bool)hasEndIndex;
- (bool)hasLabel;
- (bool)hasMatchInfo;
- (bool)hasNodeIndex;
- (bool)hasOriginAppId;
- (bool)hasOriginEntityId;
- (bool)hasPayloadAttachmentInfo;
- (bool)hasSourceComponent;
- (bool)hasStartIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)matchInfo;
- (void)mergeFrom:(id)arg1;
- (unsigned int)nodeIndex;
- (id)originAppId;
- (id)originEntityId;
- (id)payloadAttachmentInfo;
- (id)properties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (bool)readFrom:(id)arg1;
- (void)setAlternatives:(id)arg1;
- (void)setEndIndex:(id)arg1;
- (void)setHasNodeIndex:(bool)arg1;
- (void)setHasSourceComponent:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setMatchInfo:(id)arg1;
- (void)setNodeIndex:(unsigned int)arg1;
- (void)setOriginAppId:(id)arg1;
- (void)setOriginEntityId:(id)arg1;
- (void)setPayloadAttachmentInfo:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setSourceComponent:(int)arg1;
- (void)setStartIndex:(id)arg1;
- (int)sourceComponent;
- (id)sourceComponentAsString:(int)arg1;
- (id)startIndex;
- (void)writeTo:(id)arg1;

@end
