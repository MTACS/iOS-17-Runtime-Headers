
@interface PLModelMigratorRebuildProgressFraction : NSObject {
    bool  _legacyRecoveryEnabled;
    bool  _rebuildEnabled;
}

@property (readonly) bool isLegacyRecoveryEnabled;
@property (getter=isRebuildEnabled, nonatomic) bool rebuildEnabled;

- (id)initWithLegacyRecoveryEnabled:(bool)arg1;
- (bool)isLegacyRecoveryEnabled;
- (bool)isRebuildEnabled;
- (float)progressFractionForType:(unsigned char)arg1;
- (void)setRebuildEnabled:(bool)arg1;

@end
