
@interface ISDimmedEffect : NSObject <ISEffect>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;

@end
