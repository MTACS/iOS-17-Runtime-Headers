
@interface CNGroupIdentity : NSObject <NSCopying> {
    NSArray * _contacts;
    NSString * _groupName;
    NSData * _groupPhoto;
    NSString * _identifier;
}

@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic, retain) NSString *groupName;
@property (nonatomic, retain) NSData *groupPhoto;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long numberOfContacts;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void).cxx_destruct;
- (id)contacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupName;
- (id)groupPhoto;
- (id)identifier;
- (id)initGroupWithName:(id)arg1 photo:(id)arg2 contacts:(id)arg3;
- (id)initGroupWithName:(id)arg1 photo:(id)arg2 contacts:(id)arg3 identifier:(id)arg4;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)numberOfContacts;
- (void)setContacts:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupPhoto:(id)arg1;
- (void)updateContacts:(id)arg1;
- (void)updateGroupName:(id)arg1;
- (void)updateGroupPhoto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)ck_contactInstancesMatchingContacts:(id)arg1;

@end
