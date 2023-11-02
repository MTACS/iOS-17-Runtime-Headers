
@interface CACSpokenCommandGroup : NSObject {
    NSMutableArray * _commandsArray;
    NSString * _displayString;
    NSString * _identifier;
    bool  _isConfirmationRequired;
    bool  _isCustom;
    bool  _isEnabled;
    unsigned long long  _searchScore;
}

@property (nonatomic, retain) NSMutableArray *commandsArray;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isConfirmationRequired;
@property (nonatomic) bool isCustom;
@property (nonatomic) bool isEnabled;
@property (nonatomic) unsigned long long searchScore;

- (void).cxx_destruct;
- (id)cloneWithoutCommands;
- (id)commandsArray;
- (id)description;
- (id)displayString;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isConfirmationRequired;
- (bool)isCustom;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (bool)isVisible;
- (void)saveToPreferences;
- (unsigned long long)searchScore;
- (void)setCommandsArray:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsConfirmationRequired:(bool)arg1;
- (void)setIsCustom:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setSearchScore:(unsigned long long)arg1;

@end
