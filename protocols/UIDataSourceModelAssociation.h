
@protocol UIDataSourceModelAssociation

@required

- (NSIndexPath *)indexPathForElementWithModelIdentifier:(NSString *)arg1 inView:(UIView *)arg2;
- (NSString *)modelIdentifierForElementAtIndexPath:(NSIndexPath *)arg1 inView:(UIView *)arg2;

@end
