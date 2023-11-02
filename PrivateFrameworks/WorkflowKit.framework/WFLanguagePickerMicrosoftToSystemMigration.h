
@interface WFLanguagePickerMicrosoftToSystemMigration : WFWorkflowMigration

+ (bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (id)languagesSupportedByTranslation;
- (id)localeIdentifierFromLegacySerializedParameterValue:(id)arg1;
- (id)localeIdentifierFromSerializedLocaleDisplayName:(id)arg1;
- (id)localeIdentifierFromUnmigratedValue:(id)arg1;
- (id)localizedLanguageDisplayNamesToLocaleIdentifiers;
- (void)migrateWorkflow;

@end
