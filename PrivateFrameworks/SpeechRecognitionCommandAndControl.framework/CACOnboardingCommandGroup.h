
@interface CACOnboardingCommandGroup : NSObject {
    NSArray * _commands;
    NSString * _groupTitle;
}

@property (nonatomic, retain) NSArray *commands;
@property (nonatomic, retain) NSString *groupTitle;

+ (id)allCommandGroups;
+ (id)groupWithIdentifier:(id)arg1;
+ (id)groupsFromIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)commands;
- (id)groupTitle;
- (id)initWithGroupTitle:(id)arg1 commands:(id)arg2;
- (void)setCommands:(id)arg1;
- (void)setGroupTitle:(id)arg1;

@end
