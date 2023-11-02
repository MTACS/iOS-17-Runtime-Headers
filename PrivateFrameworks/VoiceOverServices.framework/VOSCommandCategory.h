
@interface VOSCommandCategory : NSObject {
    NSArray * _commands;
    NSString * _localizedCategoryName;
}

@property (nonatomic, retain) NSArray *commands;
@property (nonatomic, retain) NSString *localizedCategoryName;

+ (id)advancedNavigation;
+ (id)allCategories;
+ (id)basicNavigation;
+ (id)braille;
+ (id)brailleScreenInput;
+ (bool)categories:(id)arg1 containsCommand:(id)arg2;
+ (id)editing;
+ (id)handwriting;
+ (id)interaction;
+ (id)internalOnly;
+ (id)other;
+ (id)output;
+ (id)rotor;
+ (id)scrolling;
+ (id)speechAndAudio;
+ (id)system;
+ (id)textNavigation;
+ (id)voiceOverFeatures;

- (void).cxx_destruct;
- (id)commands;
- (bool)containsCommand:(id)arg1;
- (id)init;
- (id)initWithCommands:(id)arg1 localizedCategoryName:(id)arg2;
- (id)localizedCategoryName;
- (void)setCommands:(id)arg1;
- (void)setLocalizedCategoryName:(id)arg1;

@end
