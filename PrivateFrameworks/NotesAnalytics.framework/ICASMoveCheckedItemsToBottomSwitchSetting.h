
@interface ICASMoveCheckedItemsToBottomSwitchSetting : NSObject <AADataType> {
    long long  _moveCheckedItemsToBottomSwitchSetting;
}

@property (nonatomic, readonly) long long moveCheckedItemsToBottomSwitchSetting;

- (id)initWithMoveCheckedItemsToBottomSwitchSetting:(long long)arg1;
- (long long)moveCheckedItemsToBottomSwitchSetting;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
