
@interface EDAMNoteShareRelationshipRestrictions : FATObject {
    NSNumber * _noSetFullAccess;
    NSNumber * _noSetModifyNote;
    NSNumber * _noSetReadNote;
}

@property (nonatomic, retain) NSNumber *noSetFullAccess;
@property (nonatomic, retain) NSNumber *noSetModifyNote;
@property (nonatomic, retain) NSNumber *noSetReadNote;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)noSetFullAccess;
- (id)noSetModifyNote;
- (id)noSetReadNote;
- (void)setNoSetFullAccess:(id)arg1;
- (void)setNoSetModifyNote:(id)arg1;
- (void)setNoSetReadNote:(id)arg1;

@end
