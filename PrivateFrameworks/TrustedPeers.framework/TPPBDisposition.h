
@interface TPPBDisposition : PBCodable <NSCopying> {
    TPPBAncientEpoch * _ancientEpoch;
    TPPBDispositionDisallowedMachineID * _disallowedMachineID;
    TPPBDispositionDuplicateMachineID * _duplicateMachineID;
    TPPBPolicyProhibits * _policyProhibits;
    TPPBUnknownMachineID * _unknownMachineID;
}

@property (nonatomic, retain) TPPBAncientEpoch *ancientEpoch;
@property (nonatomic, retain) TPPBDispositionDisallowedMachineID *disallowedMachineID;
@property (nonatomic, retain) TPPBDispositionDuplicateMachineID *duplicateMachineID;
@property (nonatomic, readonly) bool hasAncientEpoch;
@property (nonatomic, readonly) bool hasDisallowedMachineID;
@property (nonatomic, readonly) bool hasDuplicateMachineID;
@property (nonatomic, readonly) bool hasPolicyProhibits;
@property (nonatomic, readonly) bool hasUnknownMachineID;
@property (nonatomic, retain) TPPBPolicyProhibits *policyProhibits;
@property (nonatomic, retain) TPPBUnknownMachineID *unknownMachineID;

- (void).cxx_destruct;
- (id)ancientEpoch;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disallowedMachineID;
- (id)duplicateMachineID;
- (bool)hasAncientEpoch;
- (bool)hasDisallowedMachineID;
- (bool)hasDuplicateMachineID;
- (bool)hasPolicyProhibits;
- (bool)hasUnknownMachineID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)policyProhibits;
- (bool)readFrom:(id)arg1;
- (void)setAncientEpoch:(id)arg1;
- (void)setDisallowedMachineID:(id)arg1;
- (void)setDuplicateMachineID:(id)arg1;
- (void)setPolicyProhibits:(id)arg1;
- (void)setUnknownMachineID:(id)arg1;
- (id)unknownMachineID;
- (void)writeTo:(id)arg1;

@end
