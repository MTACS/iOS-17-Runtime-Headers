
@interface NTKApricotComplicationInfo : NSObject <NSCopying> {
    NSString * _localizedAppName;
    NSString * _localizedDisplayName;
}

@property (nonatomic, retain) NSString *localizedAppName;
@property (nonatomic, retain) NSString *localizedDisplayName;

- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAppName:(id)arg1 displayName:(id)arg2;
- (id)localizedAppName;
- (id)localizedDisplayName;
- (void)setLocalizedAppName:(id)arg1;
- (void)setLocalizedDisplayName:(id)arg1;

@end
