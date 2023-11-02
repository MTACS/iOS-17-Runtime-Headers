
@protocol BCSConfigCaching <NSObject>

@required

- (BCSConfigItem *)configItemForType:(long long)arg1;
- (void)deleteConfigItemForType:(long long)arg1;
- (void)updateConfigItem:(BCSConfigItem *)arg1 withType:(long long)arg2;

@end
