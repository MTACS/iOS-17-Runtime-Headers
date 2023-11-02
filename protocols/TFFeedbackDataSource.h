
@protocol TFFeedbackDataSource <NSObject, NSCopying>

@required

- (NSArray *)imageCollectionForIdentifer:(NSString *)arg1;
- (bool)isEntryWithIdentifierLoading:(NSString *)arg1;
- (bool)isGroupWithIdentifierIncluded:(NSString *)arg1;
- (bool)isLoading;
- (NSNumber *)numberForIdentifier:(NSString *)arg1;
- (NSString *)stringForIdentifier:(NSString *)arg1;

@end
