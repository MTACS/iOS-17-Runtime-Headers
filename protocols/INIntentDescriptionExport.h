
@protocol INIntentDescriptionExport <NSObject, JSExport>

@required

- (SEL)confirmSelector;
- (Class)dataClass;
- (Class)facadeClass;
- (SEL)handleSelector;
- (id)init;
- (bool)isPrivate;
- (NSString *)name;
- (NSString *)responseName;
- (NSString *)type;

@end
