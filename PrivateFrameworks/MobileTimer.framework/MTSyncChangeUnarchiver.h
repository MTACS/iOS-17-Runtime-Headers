
@interface MTSyncChangeUnarchiver : NSKeyedUnarchiver <MTSerializer>

@property (nonatomic, readonly) NSCoder *mtCoder;
@property (nonatomic, readonly) unsigned long long mtType;

- (id)mtCoder;
- (unsigned long long)mtType;

@end
