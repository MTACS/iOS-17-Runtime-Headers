
@protocol CPControl <NSObject>

@required

- (void)handlePressesEnd;
- (void)handlePressesStart;
- (void)handlePrimaryAction;
- (NSUUID *)identifier;
- (void)setIdentifier:(NSUUID *)arg1;

@end
