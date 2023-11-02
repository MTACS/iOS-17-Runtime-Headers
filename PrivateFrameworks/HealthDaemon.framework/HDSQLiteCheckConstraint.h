
@interface HDSQLiteCheckConstraint : NSObject <NSCopying>

@property (nonatomic, readonly, copy) NSString *SQLCheckConstraint;

- (id)SQLCheckConstraint;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end
