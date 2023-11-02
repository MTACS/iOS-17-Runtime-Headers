
@interface DEVariableString : DEVariable

@property (readonly) NSString *printValue;
@property (readonly) NSString *speakValue;

- (id)init;
- (id)initWithName:(id)arg1 print:(id)arg2 speak:(id)arg3;
- (id)initWithName:(id)arg1 string:(id)arg2;
- (id)initWithSharedPtr:(void*)arg1;
- (id)printValue;
- (void)setValuePrint:(id)arg1 speak:(id)arg2;
- (id)speakValue;

@end
