
@interface WBBrowserState : NSObject <NSSecureCoding> {
    NSArray * _pinnedTabs;
    NSDictionary * _pinnedTabsByProfileIdentifier;
    NSArray * _privatePinnedTabs;
    NSArray * _windowStates;
    NSArray * _windows;
}

@property (nonatomic, copy) NSArray *pinnedTabs;
@property (nonatomic, copy) NSDictionary *pinnedTabsByProfileIdentifier;
@property (nonatomic, copy) NSArray *privatePinnedTabs;
@property (nonatomic, copy) NSArray *windowStates;
@property (nonatomic, copy) NSArray *windows;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPinnedTabs:(id)arg1 privatePinnedTabs:(id)arg2 windowStates:(id)arg3;
- (id)initWithPinnedTabs:(id)arg1 privatePinnedTabs:(id)arg2 windows:(id)arg3;
- (id)pinnedTabs;
- (id)pinnedTabsByProfileIdentifier;
- (id)privatePinnedTabs;
- (void)setPinnedTabs:(id)arg1;
- (void)setPinnedTabsByProfileIdentifier:(id)arg1;
- (void)setPrivatePinnedTabs:(id)arg1;
- (void)setWindowStates:(id)arg1;
- (void)setWindows:(id)arg1;
- (id)windowStates;
- (id)windows;

@end
