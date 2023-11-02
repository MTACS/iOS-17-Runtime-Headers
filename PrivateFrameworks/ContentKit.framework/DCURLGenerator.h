
@interface DCURLGenerator : NSObject

@property (nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *query;
@property (nonatomic, readonly) NSString *scheme;

- (id)URL;
- (id)host;
- (id)path;
- (id)query;
- (id)scheme;

@end
