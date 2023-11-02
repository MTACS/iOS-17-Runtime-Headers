
@interface AVMobileContentTab : NSObject {
    NSString * _accessibilityIdentifier;
    NSString * _displayName;
}

@property (nonatomic, readonly) NSString *accessibilityIdentifier;
@property (nonatomic, readonly) NSString *displayName;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)displayName;
- (id)initWithDisplayName:(id)arg1 accessibilityIdentifier:(id)arg2;

@end
