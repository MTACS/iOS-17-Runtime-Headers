
@protocol TSPForwardsCompatibleField

@required

- (const void*)fieldInfo;
- (bool)hasKnownValues;
- (bool)hasUnknownValues;
- (void)loadFromUnarchiver:(TSPUnarchiver *)arg1;
- (void)mergeToMessage:(struct Message { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; }*)arg1 reflection:(const struct Reflection { struct Descriptor {} *x1; struct ReflectionSchema { struct Message {} *x_2_1_1; unsigned int *x_2_1_2; unsigned int *x_2_1_3; int x_2_1_4; int x_2_1_5; int x_2_1_6; int x_2_1_7; int x_2_1_8; int x_2_1_9; } x2; struct DescriptorPool {} *x3; struct MessageFactory {} *x4; int x5; }*)arg2;
- (void)mergeToUnknownFieldSet:(void*)arg1;
- (void)saveToArchiver:(TSPArchiver *)arg1;
- (void)updateMessageInfo:(void*)arg1;

@end
