
@interface SBSUserNotificationSystemImageDefinition : SBSUserNotificationImageDefinition {
    NSString * _systemImageName;
    SBSUserNotificationColorDefinition * _tintColor;
}

@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly, copy) SBSUserNotificationColorDefinition *tintColor;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

+ (id)_definitionType;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)_initWithSystemImageName:(id)arg1 tintColor:(id)arg2;
- (id)build;
- (id)initWithSystemImageName:(id)arg1;
- (id)initWithSystemImageName:(id)arg1 tintColor:(id)arg2;
- (id)systemImageName;
- (id)tintColor;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)sb_resolvedImage;
- (id)sb_resolvedTintColor;

@end
