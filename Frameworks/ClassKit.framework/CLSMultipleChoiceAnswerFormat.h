
@interface CLSMultipleChoiceAnswerFormat : CLSAnswerFormat <CLSRelationable> {
    long long  _type;
}

@property (nonatomic, readonly) NSArray *answerChoiceItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (id)_init;
- (void)addAnswerItem:(id)arg1;
- (bool)answerChoiceArraysEqual:(id)arg1;
- (id)answerChoiceItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)removeAnswerItem:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (bool)validateObject:(id*)arg1;

@end
