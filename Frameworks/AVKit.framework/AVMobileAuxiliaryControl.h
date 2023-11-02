
@interface AVMobileAuxiliaryControl : NSObject {
    UIView * _controlView;
    <AVMobileAuxiliaryControlDelegate> * _delegate;
    long long  _displayPriority;
    NSString * _identifier;
    bool  _included;
}

@property (nonatomic, readonly) UIView *controlView;
@property (nonatomic) <AVMobileAuxiliaryControlDelegate> *delegate;
@property (nonatomic, readonly) long long displayPriority;
@property (nonatomic, readonly) NSString *identifier;
@property (getter=isIncluded, nonatomic) bool included;

+ (id)controlWithDisplayPriority:(long long)arg1 identifier:(id)arg2;
+ (id)controlWithView:(id)arg1 displayPriority:(long long)arg2 identifier:(id)arg3;

- (void).cxx_destruct;
- (bool)canOnlyAppearInOverflowMenu;
- (id)controlView;
- (id)delegate;
- (id)description;
- (long long)displayPriority;
- (id)identifier;
- (bool)isIncluded;
- (void)setDelegate:(id)arg1;
- (void)setIncluded:(bool)arg1;

@end
