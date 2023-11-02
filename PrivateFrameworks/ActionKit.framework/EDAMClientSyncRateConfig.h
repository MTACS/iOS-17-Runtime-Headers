
@interface EDAMClientSyncRateConfig : FATObject {
    NSNumber * _syncStateIntervalMillis;
    NSNumber * _updateNoteDuringEditIntervalMillis;
    NSNumber * _updateNoteWhenIdleForMillis;
}

@property (nonatomic, retain) NSNumber *syncStateIntervalMillis;
@property (nonatomic, retain) NSNumber *updateNoteDuringEditIntervalMillis;
@property (nonatomic, retain) NSNumber *updateNoteWhenIdleForMillis;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (void)setSyncStateIntervalMillis:(id)arg1;
- (void)setUpdateNoteDuringEditIntervalMillis:(id)arg1;
- (void)setUpdateNoteWhenIdleForMillis:(id)arg1;
- (id)syncStateIntervalMillis;
- (id)updateNoteDuringEditIntervalMillis;
- (id)updateNoteWhenIdleForMillis;

@end
