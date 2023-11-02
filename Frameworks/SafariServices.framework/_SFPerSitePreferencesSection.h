
@interface _SFPerSitePreferencesSection : NSObject {
    NSArray * _preferences;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *preferences;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 preferences:(id)arg2;
- (id)preferences;
- (id)title;

@end
