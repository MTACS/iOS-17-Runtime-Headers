
@protocol SGEntityKey <NSObject>

@required

+ (bool)isSupportedEntityType:(long long)arg1;

- (id)initWithSerialized:(NSString *)arg1;
- (NSString *)serialize;

@end
