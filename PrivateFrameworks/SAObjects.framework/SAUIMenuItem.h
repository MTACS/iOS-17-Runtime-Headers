
@interface SAUIMenuItem : SAAceView

@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSURL *icon;
@property (nonatomic, copy) NSURL *ref;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (id)menuItem;
+ (id)menuItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)icon;
- (id)ref;
- (void)setCommands:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setRef:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
