
@interface WebActionDisablingCALayerDelegate : NSObject <CALayerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)shared;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

@end
