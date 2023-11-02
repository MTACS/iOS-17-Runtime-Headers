
@interface CLSContextNavigationNode : CLSObject <CLSRelationable> {
    NSString * _childObjectID;
}

@property (nonatomic, copy) NSString *childObjectID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)objectIDForParentContextID:(id)arg1 andChildContextID:(id)arg2;
+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)childObjectID;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentContextID:(id)arg1 childContextID:(id)arg2;
- (void)mergeWithObject:(id)arg1;
- (void)setChildObjectID:(id)arg1;
- (bool)validateObject:(id*)arg1;

@end
