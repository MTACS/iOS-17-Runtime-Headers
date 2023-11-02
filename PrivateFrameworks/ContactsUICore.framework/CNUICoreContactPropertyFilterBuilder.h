
@interface CNUICoreContactPropertyFilterBuilder : NSObject {
    bool  _excludeNickname;
    bool  _excludeNote;
    bool  _excludePhoto;
    bool  _excludeRelationships;
}

@property (nonatomic) bool excludeNickname;
@property (nonatomic) bool excludeNote;
@property (nonatomic) bool excludePhoto;
@property (nonatomic) bool excludeRelationships;

+ (id)managedContactsFilterBuilder;
+ (id)whitelistedContactsFilterBuilder;

- (id)build;
- (bool)excludeNickname;
- (bool)excludeNote;
- (bool)excludePhoto;
- (bool)excludeRelationships;
- (void)setExcludeNickname:(bool)arg1;
- (void)setExcludeNote:(bool)arg1;
- (void)setExcludePhoto:(bool)arg1;
- (void)setExcludeRelationships:(bool)arg1;

@end
