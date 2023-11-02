
@protocol MFIMAPSequenceIdentifierProvider <NSObject>

@required

- (NSString *)sequenceIdentifierForUIDs:(NSArray *)arg1;
- (void)setSequenceIdentifier:(NSString *)arg1 forUIDs:(NSArray *)arg2;

@end
