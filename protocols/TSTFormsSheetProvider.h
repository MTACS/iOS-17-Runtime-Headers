
@protocol TSTFormsSheetProvider

@required

+ (bool)platformSupportsForms;

- (bool)containsForms;
- (bool)isTableLinkedToAForm:(struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)tableUID:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg1 changedToTableUID:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg2;

@end
