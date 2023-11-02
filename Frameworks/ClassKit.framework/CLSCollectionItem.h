
@interface CLSCollectionItem : CLSObject <CLSRelationable> {
    unsigned long long  _displayOrder;
    NSString * _referenceObjectID;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *referenceObjectID;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)displayOrder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithHandout:(id)arg1;
- (id)initWithQuestionStep:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)mergeWithObject:(id)arg1;
- (id)referenceObjectID;
- (void)setDisplayOrder:(unsigned long long)arg1;
- (void)setReferenceObjectID:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (bool)validateObject:(id*)arg1;

@end
