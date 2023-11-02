
@interface LKLogKeychainItemAdditionEvent : LKLogEvent {
    NSString * _keychainItemAdded;
}

@property (nonatomic, readonly) NSString *keychainItemAdded;

+ (id)eventFromLKLogEvent:(id)arg1;

- (void).cxx_destruct;
- (id)dictionary;
- (id)keychainItemAdded;
- (void)setKeychainItemAdded:(id)arg1;

@end
