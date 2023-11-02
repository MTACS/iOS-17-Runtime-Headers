
@interface CNContactToggleBlockCallerAction : CNContactAction {
    NSNumber * _isBlockedCachedValue;
}

@property (nonatomic, retain) NSNumber *isBlockedCachedValue;

- (void).cxx_destruct;
- (id)allNumbersAndEmails;
- (id)checkIsContactBlocked;
- (id)isBlockedCachedValue;
- (bool)isContactBlockedPreservingChanges:(bool)arg1;
- (void)performActionWithSender:(id)arg1;
- (void)setContactBlocked:(bool)arg1;
- (void)setIsBlockedCachedValue:(id)arg1;

@end
