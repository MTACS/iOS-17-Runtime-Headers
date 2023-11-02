
@protocol VCTextSender <NSObject>

@required

- (void)sendCharacter:(unsigned short)arg1;
- (void)sendText:(NSString *)arg1;

@end
