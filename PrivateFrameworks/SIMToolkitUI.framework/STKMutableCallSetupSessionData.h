
@interface STKMutableCallSetupSessionData : STKCallSetupSessionData

@property (nonatomic) bool isHighPriority;
@property (nonatomic, copy) NSString *phoneNumber;

- (void)setIsHighPriority:(bool)arg1;
- (void)setPhoneNumber:(id)arg1;

@end
