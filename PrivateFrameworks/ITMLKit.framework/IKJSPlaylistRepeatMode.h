
@interface IKJSPlaylistRepeatMode : IKJSObject <IKJSPlaylistRepeatMode>

@property (readonly) long long ALL;
@property (readonly) long long NONE;
@property (readonly) long long ONE;

- (long long)ALL;
- (long long)NONE;
- (long long)ONE;
- (id)init;

@end
