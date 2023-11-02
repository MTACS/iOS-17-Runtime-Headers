
@interface IXUninstallOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _ignoreRemovability;
    bool  _requestUserConfirmation;
    bool  _showArchiveOption;
    bool  _showDemotionOption;
    bool  _systemAppNotAllowed;
    bool  _waitForDeletion;
}

@property (nonatomic) bool ignoreRemovability;
@property (nonatomic) bool requestUserConfirmation;
@property (nonatomic) bool showArchiveOption;
@property (nonatomic) bool showDemotionOption;
@property (nonatomic) bool systemAppNotAllowed;
@property (nonatomic) bool waitForDeletion;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignoreRemovability;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)requestUserConfirmation;
- (void)setIgnoreRemovability:(bool)arg1;
- (void)setRequestUserConfirmation:(bool)arg1;
- (void)setShowArchiveOption:(bool)arg1;
- (void)setShowDemotionOption:(bool)arg1;
- (void)setSystemAppNotAllowed:(bool)arg1;
- (void)setWaitForDeletion:(bool)arg1;
- (bool)showArchiveOption;
- (bool)showDemotionOption;
- (bool)systemAppNotAllowed;
- (bool)waitForDeletion;

@end
