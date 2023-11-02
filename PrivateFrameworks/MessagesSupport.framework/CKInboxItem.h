
@interface CKInboxItem : NSObject {
    id /* block */  _action;
    NSNumber * _filterMode;
    NSUUID * _identifier;
    CKInboxItemSwift * _inboxItemSwift;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, readonly, copy) NSNumber *filterMode;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) CKInboxItemSwift *inboxItemSwift;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)description;
- (id)filterMode;
- (id)identifier;
- (id)inboxItemSwift;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 systemImage:(id)arg3 accessoryText:(id)arg4 filterMode:(id)arg5 action:(id /* block */)arg6;
- (void)setAction:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInboxItemSwift:(id)arg1;
- (void)updateAccessory:(id)arg1;

@end
