
@interface FSItemGetAttributesRequest : NSObject <NSSecureCoding> {
    unsigned long long  attrsWanted;
}

@property (nonatomic) bool accessTimeWanted;
@property (nonatomic) bool addedTimeWanted;
@property (nonatomic) bool allocSizeWanted;
@property (nonatomic) bool backupTimeWanted;
@property (nonatomic) bool birthTimeWanted;
@property (nonatomic) bool bsdFlagsWanted;
@property (nonatomic) bool changeTimeWanted;
@property (nonatomic) bool fileidWanted;
@property (nonatomic) bool gidWanted;
@property (nonatomic) bool modeWanted;
@property (nonatomic) bool modifyTimeWanted;
@property (nonatomic) bool numLinksWanted;
@property (nonatomic) bool parentidWanted;
@property (nonatomic) bool sizeWanted;
@property (nonatomic) bool typeWanted;
@property (nonatomic) bool uidWanted;

+ (bool)supportsSecureCoding;

- (bool)accessTimeWanted;
- (bool)addedTimeWanted;
- (bool)allocSizeWanted;
- (bool)backupTimeWanted;
- (bool)birthTimeWanted;
- (bool)bsdFlagsWanted;
- (bool)changeTimeWanted;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (bool)fileidWanted;
- (bool)gidWanted;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)internalFlagsWanted;
- (bool)modeWanted;
- (bool)modifyTimeWanted;
- (bool)numLinksWanted;
- (bool)parentidWanted;
- (void)setAccessTimeWanted:(bool)arg1;
- (void)setAddedTimeWanted:(bool)arg1;
- (void)setAllocSizeWanted:(bool)arg1;
- (void)setBackupTimeWanted:(bool)arg1;
- (void)setBirthTimeWanted:(bool)arg1;
- (void)setBsdFlagsWanted:(bool)arg1;
- (void)setChangeTimeWanted:(bool)arg1;
- (void)setFileidWanted:(bool)arg1;
- (void)setGidWanted:(bool)arg1;
- (void)setInternalFlagsWanted:(bool)arg1;
- (void)setModeWanted:(bool)arg1;
- (void)setModifyTimeWanted:(bool)arg1;
- (void)setNumLinksWanted:(bool)arg1;
- (void)setParentidWanted:(bool)arg1;
- (void)setSizeWanted:(bool)arg1;
- (void)setTypeWanted:(bool)arg1;
- (void)setUidWanted:(bool)arg1;
- (bool)sizeWanted;
- (bool)typeWanted;
- (bool)uidWanted;

@end
