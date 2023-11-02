
@interface CNFavoritesEntry : NSObject {
    NSString * _abDatabaseUUID;
    int  _abIdentifier;
    int  _abUid;
    NSString * _actionChannel;
    NSString * _actionType;
    NSString * _bundleIdentifier;
    CNContact * _contact;
    CNContactStore * _contactStore;
    bool  _dirty;
    NSString * _label;
    NSString * _labeledValueIdentifier;
    NSString * _name;
    int  _oldAbUid;
    NSString * _originalName;
    NSString * _propertyKey;
    long long  _type;
    NSString * _value;
}

@property (nonatomic) int abIdentifier;
@property (nonatomic) int abUid;
@property (nonatomic, retain) NSString *actionChannel;
@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) CNContactProperty *contactProperty;
@property (nonatomic) bool dirty;
@property (nonatomic, readonly, copy) NSString *localizedContactPropertyLabel;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) int oldAbUid;
@property (nonatomic, readonly) long long type;
@property (nonatomic, retain) NSString *value;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)descriptorsForRequiredKeysForPropertyKey:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (int)abIdentifier;
- (int)abUid;
- (id)actionChannel;
- (id)actionType;
- (void)applyChangeRecord:(id)arg1;
- (id)bundleIdentifier;
- (id)contactProperty;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)dictionaryRepresentation:(id*)arg1 isDirty:(bool*)arg2;
- (bool)dirty;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 store:(id)arg5;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5 store:(id)arg6;
- (id)initWithDictionaryRepresentation:(id)arg1 store:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (int)oldAbUid;
- (id)rematch;
- (bool)rematchWithContacts;
- (bool)rematchWithGeminiManager:(id)arg1;
- (void)resetContactMatch;
- (void)setAbIdentifier:(int)arg1;
- (void)setAbUid:(int)arg1;
- (void)setActionChannel:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setOldAbUid:(int)arg1;
- (void)setValue:(id)arg1;
- (long long)type;
- (id)value;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)performActionWithCompletion:(id /* block */)arg1;
- (void)performActionWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)performActionWithExtensionContext:(id)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)favoritesEntryForUserActionItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (id)localizedBundleName;
- (id)localizedContactPropertyLabel;

@end
