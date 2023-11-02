
@interface CLSArchivedMultipleChoiceAnswerFormat : CLSArchivedAnswerFormat <CLSRelationable> {
    long long  _type;
}

@property (nonatomic, readonly) NSArray *archivedAnswerChoiceItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (id)_init;
- (void)addAnswerItem:(id)arg1;
- (id)archivedAnswerChoiceItems;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
