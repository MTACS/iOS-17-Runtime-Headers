
@interface PGGraphChange : NSObject

@property (nonatomic, readonly) unsigned long long changeCount;
@property (readonly) unsigned long long type;

- (unsigned long long)changeCount;
- (id)description;
- (unsigned long long)type;

@end
