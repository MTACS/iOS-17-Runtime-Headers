
@protocol INIntentResponseDescriptionExport <NSObject, JSExport>

@required

- (Class)dataClass;
- (Class)facadeClass;
- (id)init;
- (bool)isPrivate;
- (NSString *)name;
- (NSDictionary *)slotsByName;
- (NSString *)type;

@end
