
@interface HVPBDataSourceContentState : PBCodable <NSCopying> {
    NSMutableArray * _deferredContentStates;
    NSMutableArray * _deprecatedDeferredContentStates;
}

@property (nonatomic, retain) NSMutableArray *deferredContentStates;
@property (nonatomic, retain) NSMutableArray *deprecatedDeferredContentStates;

+ (Class)deferredContentStatesType;
+ (Class)deprecatedDeferredContentStatesType;

- (void).cxx_destruct;
- (void)addDeferredContentStates:(id)arg1;
- (void)addDeprecatedDeferredContentStates:(id)arg1;
- (void)clearDeferredContentStates;
- (void)clearDeprecatedDeferredContentStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deferredContentStates;
- (id)deferredContentStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)deferredContentStatesCount;
- (id)deprecatedDeferredContentStates;
- (id)deprecatedDeferredContentStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)deprecatedDeferredContentStatesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeferredContentStates:(id)arg1;
- (void)setDeprecatedDeferredContentStates:(id)arg1;
- (void)writeTo:(id)arg1;

@end
