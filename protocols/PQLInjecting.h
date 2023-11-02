
@protocol PQLInjecting <NSObject>

@required

- (int)bindWithStatement:(struct sqlite3_stmt { }*)arg1 startingAtIndex:(int)arg2;
- (NSData *)sql;

@optional

- (id)bindValuesToKeepAlive;

@end
