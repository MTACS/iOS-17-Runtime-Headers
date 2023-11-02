
@interface SBSUserNotificationButtonDefinition : NSObject <NSCopying, NSMutableCopying> {
    bool  _isPreferredButton;
    int  _presentationStyle;
    NSString * _title;
}

@property (nonatomic, readonly) bool isPreferredButton;
@property (nonatomic, readonly) int presentationStyle;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)_buttonDefinitionsFromSerializedDefinitions:(id)arg1;

- (void).cxx_destruct;
- (void)_copyPropertiesToDefinition:(id)arg1;
- (id)_initWithDictionary:(id)arg1;
- (id)build;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPreferredButton;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)presentationStyle;
- (id)title;

@end
