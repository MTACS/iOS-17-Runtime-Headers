
@interface AFConversationInsertion : NSObject {
    NSString * _aceCommandIdentifier;
    AceObject * _aceObject;
    long long  _conversationItemType;
    bool  _immersiveExperience;
    NSIndexPath * _indexPath;
    bool  _supplemental;
    bool  _transient;
}

@property (nonatomic, readonly, copy) NSString *aceCommandIdentifier;
@property (nonatomic, readonly) AceObject *aceObject;
@property (nonatomic, readonly) long long conversationItemType;
@property (getter=isImmersiveExperience, nonatomic, readonly) bool immersiveExperience;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (getter=isSupplemental, nonatomic, readonly) bool supplemental;
@property (getter=isTransient, nonatomic, readonly) bool transient;

- (void).cxx_destruct;
- (id)aceCommandIdentifier;
- (id)aceObject;
- (long long)conversationItemType;
- (id)indexPath;
- (id)initWithConversationItemType:(long long)arg1 aceObject:(id)arg2 aceCommandIdentifier:(id)arg3 transient:(bool)arg4 supplemental:(bool)arg5 immersiveExperience:(bool)arg6 indexPath:(id)arg7;
- (bool)isImmersiveExperience;
- (bool)isSupplemental;
- (bool)isTransient;

@end
