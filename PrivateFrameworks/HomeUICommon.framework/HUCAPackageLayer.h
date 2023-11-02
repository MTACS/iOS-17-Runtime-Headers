
@interface HUCAPackageLayer : NSObject {
    CALayer * _layer;
    NSString * _name;
    NSSet * _tags;
}

@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSSet *tags;

+ (id)_allTags;
+ (id)_tagsForName:(id)arg1;

- (void).cxx_destruct;
- (void)_applyPrimaryColorWithModifiers:(id)arg1;
- (void)applyModifiers:(id)arg1;
- (id)initWithName:(id)arg1 layer:(id)arg2;
- (id)layer;
- (id)name;
- (id)tags;

@end
