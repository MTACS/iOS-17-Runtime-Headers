
@interface _ASKResourceCacheGroup : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _guard;
    bool  _hasMultipleMembers;
    NSMutableArray * _memberContents;
}

@property bool hasMultipleMembers;

- (void).cxx_destruct;
- (void)discardMemberContents:(id)arg1;
- (bool)hasMultipleMembers;
- (id)init;
- (id)makeMemberContents;
- (id)onlyMemberContents;
- (void)setHasMultipleMembers:(bool)arg1;
- (id)snapshotMemberContents;

@end
