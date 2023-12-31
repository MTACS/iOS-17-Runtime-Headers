
@interface CoreDAVACLItem : CoreDAVItem {
    NSMutableSet * _accessControlEntities;
}

@property (nonatomic, retain) NSMutableSet *accessControlEntities;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)accessControlEntities;
- (void)addACE:(id)arg1;
- (id)description;
- (id)init;
- (id)liveACEs;
- (id)notGrantedSubsetOfACEs:(id)arg1;
- (void)setAccessControlEntities:(id)arg1;

@end
