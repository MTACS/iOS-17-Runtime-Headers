
@interface _HKContextTitleAndIdentifier : NSObject {
    NSString * _accessibilityIdentifier;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *accessibilityIdentifier;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)initWithTitle:(id)arg1 accessibilityIdentifier:(id)arg2;
- (id)title;

@end
