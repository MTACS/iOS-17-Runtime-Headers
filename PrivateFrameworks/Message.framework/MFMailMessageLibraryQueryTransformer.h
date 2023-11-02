
@interface MFMailMessageLibraryQueryTransformer : NSObject <EFLoggable, MFMessageCriterionConverterDelegate> {
    MFMessageCriterionConverter * _criterionConverter;
    EDMessagePersistence * _messagePersistence;
}

@property (nonatomic, retain) MFMessageCriterionConverter *criterionConverter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)criterionConverter;
- (id)criterionForQuery:(id)arg1;
- (id)initWithMessagePersistence:(id)arg1;
- (id)mailAccountForIdentifier:(id)arg1;
- (long long)messageCriterionConverter:(id)arg1 criterionTypeForKey:(id)arg2;
- (id)messageCriterionConverter:(id)arg1 expressionForConstantValue:(id)arg2 withCriterionType:(long long)arg3;
- (id)messagePersistence;
- (unsigned int)optionsForQuery:(id)arg1;
- (void)setCriterionConverter:(id)arg1;

@end
