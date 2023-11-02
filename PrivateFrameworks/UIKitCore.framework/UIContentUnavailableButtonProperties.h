
@interface UIContentUnavailableButtonProperties : NSObject <NSCopying, NSSecureCoding> {
    bool  __showsMenuAsPrimaryAction;
    struct { 
        unsigned int hasCustomizedEnabled : 1; 
        unsigned int hasCustomizedRole : 1; 
    }  _buttonFlags;
    UIButtonConfiguration * _configuration;
    UIButtonConfiguration * _defaultConfiguration;
    bool  _enabled;
    UIMenu * _menu;
    UIAction * _primaryAction;
    long long  _role;
}

@property (nonatomic, retain) UIButtonConfiguration *configuration;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) UIMenu *menu;
@property (nonatomic, copy) UIAction *primaryAction;
@property (nonatomic) long long role;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)menu;
- (id)primaryAction;
- (long long)role;
- (void)setConfiguration:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMenu:(id)arg1;
- (void)setPrimaryAction:(id)arg1;
- (void)setRole:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (id)asTTRI;

@end
