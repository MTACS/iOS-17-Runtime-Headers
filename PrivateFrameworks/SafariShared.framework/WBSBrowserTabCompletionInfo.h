
@interface WBSBrowserTabCompletionInfo : NSObject {
    long long  _pageStatus;
    NSString * _tabGroupTitle;
    NSUUID * _tabGroupUUID;
    unsigned long long  _tabIndex;
    NSString * _title;
    NSURL * _url;
    NSUUID * _uuid;
    NSUUID * _windowUUID;
}

@property (nonatomic, readonly) long long pageStatus;
@property (nonatomic, readonly, copy) NSString *tabGroupTitle;
@property (nonatomic, readonly) NSUUID *tabGroupUUID;
@property (nonatomic, readonly) unsigned long long tabIndex;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSUUID *windowUUID;

- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 windowUUID:(id)arg2 tabGroupUUID:(id)arg3 tabGroupTitle:(id)arg4 tabIndex:(unsigned long long)arg5 url:(id)arg6 title:(id)arg7 pageStatus:(long long)arg8;
- (id)initWithUUID:(id)arg1 windowUUID:(id)arg2 tabIndex:(unsigned long long)arg3 url:(id)arg4 title:(id)arg5;
- (long long)pageStatus;
- (id)tabGroupTitle;
- (id)tabGroupUUID;
- (unsigned long long)tabIndex;
- (id)title;
- (id)url;
- (id)uuid;
- (id)windowUUID;

@end
