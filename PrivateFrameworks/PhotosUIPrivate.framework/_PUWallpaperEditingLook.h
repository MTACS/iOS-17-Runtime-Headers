
@interface _PUWallpaperEditingLook : NSObject <PUWallpaperEditingLook> {
    NSString * _displayName;
    NSString * _identifier;
    unsigned long long  _pu_timeAppearance;
    PRPosterColor * _pu_timeFontColor;
    NSString * _pu_timeFontIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long pu_timeAppearance;
@property (nonatomic, readonly) PRPosterColor *pu_timeFontColor;
@property (nonatomic, readonly) NSString *pu_timeFontIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (id)identifier;
- (id)initWithDisplayName:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 pu_timeAppearance:(unsigned long long)arg3 pu_timeFontIdentifier:(id)arg4 pu_timeFontColor:(id)arg5;
- (unsigned long long)pu_timeAppearance;
- (id)pu_timeFontColor;
- (id)pu_timeFontIdentifier;

@end
