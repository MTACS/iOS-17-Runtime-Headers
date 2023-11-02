
@interface CAMExpandingControlMenuItem : NSObject {
    CAMExpandingControlMenuItemConfiguration * __configuration;
    NSString * _selectedSubtitle;
    NSValue * _state;
    NSString * _subtitle;
}

@property (nonatomic, readonly, copy) CAMExpandingControlMenuItemConfiguration *_configuration;
@property (nonatomic, readonly) NSString *selectedSubtitle;
@property (nonatomic, readonly) NSValue *state;
@property (nonatomic, readonly) NSString *subtitle;

+ (id)_menuItemWithState:(id)arg1 subtitle:(id)arg2 selectedSubtitle:(id)arg3 configuration:(id)arg4;

- (void).cxx_destruct;
- (id)_configuration;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItem:(id)arg1;
- (id)selectedSubtitle;
- (id)state;
- (id)subtitle;

@end
