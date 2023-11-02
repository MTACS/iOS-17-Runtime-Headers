
@interface UNCNotificationSettingsPersistentStore : NSObject {
    NSString * _dataDirectoryPath;
}

@property (readonly) NSString *dataDirectoryPath;

- (void).cxx_destruct;
- (id)_clearedSectionsPath;
- (id)_sectionInfoLegacyPath;
- (id)_sectionInfoPath;
- (id)_sectionOrderPath;
- (id)dataDirectoryPath;
- (void)deleteSectionInfoFile;
- (void)deleteSectionInfoLegacyFile;
- (bool)hasSectionInfoLegacyFile;
- (id)init;
- (id)initWithDataDirectoryPath:(id)arg1;
- (id)readClearedSections;
- (id)readSectionInfo;
- (id)readSectionInfoLegacy;
- (id)readSectionInfoWithVersionNumberForMigration;
- (id)readSectionOrder;
- (void)writeClearedSections:(id)arg1;
- (void)writeSectionInfo:(id)arg1;
- (void)writeSectionOrder:(id)arg1;

@end
