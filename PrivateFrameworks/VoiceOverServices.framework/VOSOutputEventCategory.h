
@interface VOSOutputEventCategory : NSObject {
    NSString * _localizedCategoryName;
    NSArray * _outputEvents;
}

@property (nonatomic, retain) NSString *localizedCategoryName;
@property (nonatomic, retain) NSArray *outputEvents;

+ (id)allCategories;
+ (id)appFeedback;
+ (id)braille;
+ (id)interaction;
+ (id)system;
+ (id)textEditing;
+ (id)voiceOverFeedback;

- (void).cxx_destruct;
- (bool)containsOutputEvent:(id)arg1;
- (id)init;
- (id)initWithOutputEvents:(id)arg1 localizedCategoryName:(id)arg2;
- (id)localizedCategoryName;
- (id)outputEvents;
- (void)setLocalizedCategoryName:(id)arg1;
- (void)setOutputEvents:(id)arg1;

@end
