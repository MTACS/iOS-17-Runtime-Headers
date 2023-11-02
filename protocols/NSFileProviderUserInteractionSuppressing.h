
@protocol NSFileProviderUserInteractionSuppressing <NSObject>

@required

- (bool)isInteractionSuppressedForIdentifier:(NSString *)arg1;
- (void)setInteractionSuppressed:(bool)arg1 forIdentifier:(NSString *)arg2;

@end
