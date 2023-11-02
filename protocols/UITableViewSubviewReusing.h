
@protocol UITableViewSubviewReusing <NSObject>

@required

- (id)initWithReuseIdentifier:(NSString *)arg1;
- (void)prepareForReuse;
- (NSString *)reuseIdentifier;

@end
