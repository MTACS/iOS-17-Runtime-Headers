
@interface CHSConfiguredWidgetContainerDescriptor : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    long long  _activeWidgetIndex;
    NSString * _activeWidgetUniqueIdentifier;
    bool  _canAppearInSecureEnvironment;
    long long  _family;
    long long  _location;
    unsigned long long  _page;
    bool  _stack;
    NSString * _uniqueIdentifier;
    NSArray * _widgets;
}

@property (nonatomic, readonly) CHSConfiguredWidgetDescriptor *activeWidget;
@property (nonatomic, readonly) bool canAppearInSecureEnvironment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long family;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSystemConfigured;
@property (nonatomic, readonly) long long location;
@property (nonatomic, readonly) unsigned long long page;
@property (getter=isStack, nonatomic, readonly) bool stack;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSArray *widgets;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeWidget;
- (bool)canAppearInSecureEnvironment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)family;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 location:(long long)arg2 canAppearInSecureEnvironment:(bool)arg3 page:(unsigned long long)arg4 family:(long long)arg5 widgets:(id)arg6 activeWidget:(id)arg7;
- (id)initWithUniqueIdentifier:(id)arg1 location:(long long)arg2 page:(unsigned long long)arg3 family:(long long)arg4 widgets:(id)arg5 activeWidget:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isStack;
- (bool)isSystemConfigured;
- (long long)location;
- (unsigned long long)page;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uniqueIdentifier;
- (id)widgets;

@end
