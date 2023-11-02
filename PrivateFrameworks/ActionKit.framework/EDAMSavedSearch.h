
@interface EDAMSavedSearch : FATObject {
    NSNumber * _format;
    NSString * _guid;
    NSString * _name;
    NSString * _query;
    EDAMSavedSearchScope * _scope;
    NSNumber * _updateSequenceNum;
}

@property (nonatomic, retain) NSNumber *format;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, retain) EDAMSavedSearchScope *scope;
@property (nonatomic, retain) NSNumber *updateSequenceNum;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)format;
- (id)guid;
- (id)name;
- (id)query;
- (id)scope;
- (void)setFormat:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setScope:(id)arg1;
- (void)setUpdateSequenceNum:(id)arg1;
- (id)updateSequenceNum;

@end
