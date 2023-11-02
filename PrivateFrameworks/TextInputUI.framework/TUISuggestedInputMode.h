
@interface TUISuggestedInputMode : NSObject {
    NSString * _displayName;
    bool  _enabled;
    NSString * _identifier;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (id)displayName;
- (bool)enabled;
- (id)identifier;
- (void)setDisplayName:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;

@end
