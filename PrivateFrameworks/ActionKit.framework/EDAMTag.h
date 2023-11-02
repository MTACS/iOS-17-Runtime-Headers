
@interface EDAMTag : FATObject {
    NSString * _guid;
    NSString * _name;
    NSString * _parentGuid;
    NSNumber * _updateSequenceNum;
}

@property (nonatomic, retain) NSString *guid;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *parentGuid;
@property (nonatomic, retain) NSNumber *updateSequenceNum;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)guid;
- (id)name;
- (id)parentGuid;
- (void)setGuid:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentGuid:(id)arg1;
- (void)setUpdateSequenceNum:(id)arg1;
- (id)updateSequenceNum;

@end
