
@interface EDAMShareRelationshipRestrictions : FATObject {
    NSNumber * _noSetFullAccess;
    NSNumber * _noSetModify;
    NSNumber * _noSetReadOnly;
    NSNumber * _noSetReadPlusActivity;
}

@property (nonatomic, retain) NSNumber *noSetFullAccess;
@property (nonatomic, retain) NSNumber *noSetModify;
@property (nonatomic, retain) NSNumber *noSetReadOnly;
@property (nonatomic, retain) NSNumber *noSetReadPlusActivity;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)noSetFullAccess;
- (id)noSetModify;
- (id)noSetReadOnly;
- (id)noSetReadPlusActivity;
- (void)setNoSetFullAccess:(id)arg1;
- (void)setNoSetModify:(id)arg1;
- (void)setNoSetReadOnly:(id)arg1;
- (void)setNoSetReadPlusActivity:(id)arg1;

@end
