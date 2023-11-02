
@interface ENNotebook : NSObject <NSCoding> {
    bool  _isDefaultNotebookOverride;
    bool  _isShared;
    EDAMLinkedNotebook * _linkedNotebook;
    EDAMNotebook * _notebook;
    EDAMSharedNotebook * _sharedNotebook;
}

@property (nonatomic, readonly) bool allowsWriting;
@property (nonatomic, readonly) bool isBusinessNotebook;
@property (nonatomic, readonly) bool isDefaultNotebook;
@property (nonatomic) bool isDefaultNotebookOverride;
@property (nonatomic, readonly) bool isJoinedPublic;
@property (nonatomic, readonly) bool isJoinedShared;
@property (nonatomic, readonly) bool isOwnPublic;
@property (nonatomic, readonly) bool isOwnShared;
@property (nonatomic, readonly) bool isOwnedByUser;
@property (nonatomic, readonly) bool isPublic;
@property (nonatomic) bool isShared;
@property (nonatomic, retain) EDAMLinkedNotebook *linkedNotebook;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) EDAMNotebook *notebook;
@property (nonatomic, readonly) NSString *ownerDisplayName;
@property (nonatomic, retain) EDAMSharedNotebook *sharedNotebook;

- (void).cxx_destruct;
- (bool)allowsWriting;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)guid;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotebook:(id)arg1;
- (id)initWithNotebook:(id)arg1 linkedNotebook:(id)arg2 sharedNotebook:(id)arg3;
- (id)initWithPublicNotebook:(id)arg1 forLinkedNotebook:(id)arg2;
- (id)initWithSharedNotebook:(id)arg1 forLinkedNotebook:(id)arg2;
- (id)initWithSharedNotebook:(id)arg1 forLinkedNotebook:(id)arg2 withBusinessNotebook:(id)arg3;
- (bool)isBusinessNotebook;
- (bool)isDefaultNotebook;
- (bool)isDefaultNotebookOverride;
- (bool)isEqual:(id)arg1;
- (bool)isJoinedPublic;
- (bool)isJoinedShared;
- (bool)isLinked;
- (bool)isOwnPublic;
- (bool)isOwnShared;
- (bool)isOwnedByUser;
- (bool)isPublic;
- (bool)isShared;
- (id)linkedNotebook;
- (id)name;
- (id)notebook;
- (id)ownerDisplayName;
- (void)setIsDefaultNotebookOverride:(bool)arg1;
- (void)setIsShared:(bool)arg1;
- (void)setLinkedNotebook:(id)arg1;
- (void)setNotebook:(id)arg1;
- (void)setSharedNotebook:(id)arg1;
- (id)sharedNotebook;

@end
