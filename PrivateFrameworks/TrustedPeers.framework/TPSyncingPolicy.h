
@interface TPSyncingPolicy : NSObject <NSSecureCoding> {
    bool  _isInheritedAccount;
    NSArray * _keyViewMapping;
    NSString * _model;
    NSSet * _priorityViews;
    int  _syncUserControllableViews;
    NSSet * _userControllableViews;
    TPPolicyVersion * _version;
    NSSet * _viewList;
    NSSet * _viewsToPiggybackTLKs;
}

@property bool isInheritedAccount;
@property (readonly) NSArray *keyViewMapping;
@property (readonly) NSString *model;
@property (readonly) NSSet *priorityViews;
@property (readonly) int syncUserControllableViews;
@property (readonly) NSSet *userControllableViews;
@property (readonly) TPPolicyVersion *version;
@property (readonly) NSSet *viewList;
@property (readonly) NSSet *viewsToPiggybackTLKs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 version:(id)arg2 viewList:(id)arg3 priorityViews:(id)arg4 userControllableViews:(id)arg5 syncUserControllableViews:(int)arg6 viewsToPiggybackTLKs:(id)arg7 keyViewMapping:(id)arg8 isInheritedAccount:(bool)arg9;
- (bool)isInheritedAccount;
- (bool)isSyncingEnabledForView:(id)arg1;
- (id)keyViewMapping;
- (id)mapDictionaryToView:(id)arg1;
- (id)model;
- (id)priorityViews;
- (void)setIsInheritedAccount:(bool)arg1;
- (int)syncUserControllableViews;
- (bool)syncUserControllableViewsAsBoolean;
- (id)userControllableViews;
- (id)version;
- (id)viewList;
- (id)viewsToPiggybackTLKs;

@end
