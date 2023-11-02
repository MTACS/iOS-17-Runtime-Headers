
@interface ICMusicAccountNotificationsSettingsSwitch : NSObject {
    bool  _hasBeenPreviouslyToggled;
    bool  _isToggled;
    NSDictionary * _itemResponseDictionary;
    NSMutableDictionary * _valueDictionary;
}

@property (nonatomic, readonly) bool hasBeenPreviouslyToggled;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) bool isToggled;
@property (nonatomic, readonly, copy) NSDictionary *itemResponseDictionary;

- (void).cxx_destruct;
- (bool)hasBeenPreviouslyToggled;
- (id)identifier;
- (id)initWithItemResponseDictionary:(id)arg1;
- (id)initWithToggleState:(bool)arg1 hasBeenToggled:(bool)arg2 identifier:(id)arg3;
- (bool)isToggled;
- (id)itemResponseDictionary;
- (void)setHasBeenPreviouslyToggled:(bool)arg1;
- (void)setIsToggled:(bool)arg1;

@end
