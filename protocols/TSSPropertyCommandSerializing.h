
@protocol TSSPropertyCommandSerializing <NSObject>

@required

- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; }*)arg1 unarchiver:(TSPUnarchiver *)arg2;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; }*)arg1 archiver:(TSPArchiver *)arg2;

@end
