
@interface FSItemSetAttributesRequest : FSItemAttributes {
    unsigned long long  attrsConsumed;
}

@property (nonatomic) bool accessTimeWasConsumed;
@property (nonatomic) bool addedTimeWasConsumed;
@property (nonatomic) bool allocSizeWasConsumed;
@property (nonatomic) bool backupTimeWasConsumed;
@property (nonatomic) bool birthTimeWasConsumed;
@property (nonatomic) bool bsdFlagsWasConsumed;
@property (nonatomic) bool changeTimeWasConsumed;
@property (nonatomic) bool fileidWasConsumed;
@property (nonatomic) bool gidWasConsumed;
@property (nonatomic) bool modeWasConsumed;
@property (nonatomic) bool modifyTimeWasConsumed;
@property (nonatomic) bool numLinksWasConsumed;
@property (nonatomic) bool parentidWasConsumed;
@property (nonatomic) bool sizeWasConsumed;
@property (nonatomic) bool typeWasConsumed;
@property (nonatomic) bool uidWasConsumed;

+ (bool)supportsSecureCoding;

- (bool)accessTimeWasConsumed;
- (bool)addedTimeWasConsumed;
- (bool)allocSizeWasConsumed;
- (bool)backupTimeWasConsumed;
- (bool)birthTimeWasConsumed;
- (bool)bsdFlagsWasConsumed;
- (bool)changeTimeWasConsumed;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (bool)fileidWasConsumed;
- (bool)gidWasConsumed;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)internalFlagsWasConsumed;
- (bool)modeWasConsumed;
- (bool)modifyTimeWasConsumed;
- (bool)numLinksWasConsumed;
- (bool)parentidWasConsumed;
- (void)setAccessTimeWasConsumed:(bool)arg1;
- (void)setAddedTimeWasConsumed:(bool)arg1;
- (void)setAllocSizeWasConsumed:(bool)arg1;
- (void)setBackupTimeWasConsumed:(bool)arg1;
- (void)setBirthTimeWasConsumed:(bool)arg1;
- (void)setBsdFlagsWasConsumed:(bool)arg1;
- (void)setChangeTimeWasConsumed:(bool)arg1;
- (void)setFileidWasConsumed:(bool)arg1;
- (void)setGidWasConsumed:(bool)arg1;
- (void)setInternalFlagsWasConsumed:(bool)arg1;
- (void)setModeWasConsumed:(bool)arg1;
- (void)setModifyTimeWasConsumed:(bool)arg1;
- (void)setNumLinksWasConsumed:(bool)arg1;
- (void)setParentidWasConsumed:(bool)arg1;
- (void)setSizeWasConsumed:(bool)arg1;
- (void)setTypeWasConsumed:(bool)arg1;
- (void)setUidWasConsumed:(bool)arg1;
- (bool)sizeWasConsumed;
- (bool)typeWasConsumed;
- (bool)uidWasConsumed;

@end
